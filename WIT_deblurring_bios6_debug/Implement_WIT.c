#include <stdio.h>
#include "upp_common.h"
#include "GPIO.h"
#include "Init.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ti\csl\csl_cpIntc.h>
#include <ti\csl\csl_cpIntcAux.h>

//#define LoopBack


#include "regs.h"
#include "EDMA3.h"




#define receiveSize			16448
#define sendSize		 	32768
#define imageSize   		16384
#define imageWidth			128
#define imageHeight			128
#define receivelineCnt		514
#define sendlineCnt 		1024
#define dataWidth			8

unsigned short	RecFlag = 0;
unsigned short	SendFlag = 0;
unsigned int	sendCount = 0;

/* configure the GPIO_7 as OUTPUT */
#define GPDIR_PARAMS			(OUTPUT	<<	GPIO_7)
#define GPOUT_LIGHT				(1		<<	GPIO_7)

/* configure the GPIO_6 as OUTPUT for BOOT FLAG */
#define GPDIR_PARAMS_BOOT_FLAG	(OUTPUT	<<	GPIO_6)
#define GPOUT_BOOT_FLAG			(1		<<	GPIO_6)

/* configure the GPIO_13 as OUTPUT for RESET FLAG */
#define GPDIR_PARAMS_RESET_FLAG	(OUTPUT	<<	GPIO_13)
#define GPOUT_RESET_FLAG		(1		<<	GPIO_13)

unsigned short valid = 0;
unsigned short first_flag = 1;
unsigned short loseFrame = 1;

/* Buffers placed in L2 memory */
#pragma DATA_SECTION(rcvBuffer,".L2_buffers");
unsigned char rcvBuffer[receiveSize];

#pragma DATA_SECTION(sendBuffer,".L2_buffers");
unsigned char sendBuffer[sendSize];

#pragma DATA_SECTION(imageData_Src,".L2_buffers");
unsigned char imageData_Src[imageSize];

#pragma DATA_SECTION(imageData_Dst,".L2_buffers");
unsigned char imageData_Dst[imageSize];

#pragma DATA_SECTION(imageData_ResInput,".L2_buffers");
unsigned char imageData_ResInput[imageSize];

#pragma DATA_SECTION(imageData_ResOutput,".L2_buffers");
unsigned char imageData_ResOutput[imageSize];

#pragma DATA_SECTION(th_map,".L2_buffers");
unsigned char th_map[imageSize];

#pragma DATA_SECTION(label_map,".L2_buffers");
int label_map[imageSize];




/* Function definitions */
static void LOCAL_delay(int cnt);

/*
 *  upp_dlb_test : simple uPP digital loopback test.
 *  Note : PSC is assumed to be turned on, by default_setup in the C6657 gel file.
 */

int upp_init()
{
	int status    = 0;
	uppDevParams uPP;

	upp_key_config();	 // program the KICK0 and 1 registers.
    upp_pinmux_enable(); // Though internal loopback, enable uPP in PIN_CONTROL_1
                         // EMIF16/UPP pinmux, "1" enable UPP

	// read PID

	int pid = CSL_FEXT(uppRegs->UPPID, UPP_UPPID_REVID);
	if(pid != CSL_UPP_UPPID_RESETVAL)
	{
			printf("\n Error : Incorrect UPP ID read.");
			goto upp_test_exit;
	}

    // toggle SW reset in PCR
	CSL_FINST(uppRegs->UPPCR, UPP_UPPCR_EN, DISABLE);
	// toggle SW reset in PCR
	CSL_FINST(uppRegs->UPPCR, UPP_UPPCR_SWRST, RESET);
	LOCAL_delay(300);
	CSL_FINST(uppRegs->UPPCR, UPP_UPPCR_SWRST, RUNNING);

	CSL_FINST(uppRegs->UPPCR, UPP_UPPCR_SOFT, ENABLE);
	CSL_FINST(uppRegs->UPPCR, UPP_UPPCR_FREE, DISABLE );

	// init regs: CTL, ICR, IVR, TCR
	uPP = uppDevParams_DEFAULT;
	uPP.A.direction = UPP_DIR_XMT;//UPCTL中MODE位为1，发送模式
	uPP.A.dataRate = UPP_DR_SDR;//UPCTL中DRA位为0，单倍速率模式
	uPP.A.dataWidthVal = dataWidth;//UPCTL中IWA位为0,8bit宽度
	uPP.A.idleValueVal = 0xAAAA;//空闲状态通道A中的idle值
	uPP.A.clkDivVal = 0x2;			// I/O时钟=发送时钟/(2*(UPICR.CLKDIVn+1))=发送时钟/(2*(2+1)=六分之一发送时钟
	uPP.A.txThresh = UPP_TT_64B;//读阈值，一次最多读64B

	uPP.B.direction = UPP_DIR_RCV;//UPCTL中MODE位为0，接收模式
	uPP.B.dataRate = UPP_DR_SDR;
	uPP.B.dataWidthVal = dataWidth;
	uPP.B.idleValueVal = 0xBBBB;
	uPP.B.clkDivVal = 0x2;//接收模式，分频无效，由外部时钟决定
	uPP.B.rcvThresh = UPP_TT_64B;

	uPP.loopback = UPP_LB_NONE; // UPP_LB_NONE UPP_LB_INTERNAL;
	uPP.numChannelsVal = 2;

	status = upp_config(&uPP);
	if (status < 0)
		goto upp_test_exit;

	// init interrupt regs
	upp_intc_setup_my(upp_isr);	// setup intc (removed: use polled operation)
	upp_int_enable(	upp_int_EOLI |
					upp_int_EOWI |
					upp_int_ERRI | upp_int_UORI | upp_int_DPEI |
					upp_int_EOLQ |
					upp_int_EOWQ |
					upp_int_ERRQ | upp_int_UORQ | upp_int_DPEQ |
					0 );

	CSL_FINST(uppRegs->UPPCR, UPP_UPPCR_EN, ENABLE);//打开uPP外设
		status = 0;
	    upp_test_exit:
	    	return status;
}

int upp_start_transmit(
						unsigned char *trans_buffer,
						int receive_length,
						int byte_receive_perline,
						int send_length,
						int byte_send_perline,unsigned char tranflag)
{
	int status = 0;
	int	receive_line_cnt,send_line_cnt;
//	unsigned short *xmtBuffer_pt;

#ifdef LoopBack
	upp_fill_buffer(trans_buffer, dataWidth, UPP_DP_RJUST_0FILL, sendSize);	// fill transmit buffer with test pattern
	//
	upp_fill_buffer(recv_buffer, 0, UPP_DP_RJUST_0FILL, receiveSize);			// clear receive buffer
#else
	receive_line_cnt=receive_length/byte_receive_perline;
	send_line_cnt=send_length/byte_send_perline;
#endif

	// Ensure uPP not enabled yet.
	CSL_FINST(uppRegs->UPPCR, UPP_UPPCR_EN, DISABLE);

	// init DMA channels
	if(tranflag == 0)
	{
		while(CSL_FEXT(uppRegs->UPQS2, UPP_UPQS2_PEND) == 1);
		upp_dma_prog(UPP_DMA_CHAN_Q, (void *)trans_buffer, receive_line_cnt, byte_receive_perline, byte_receive_perline);
	}


	if(tranflag == 1)
	{
		while(CSL_FEXT(uppRegs->UPIS2, UPP_UPIS2_PEND) == 1);
		upp_dma_prog(UPP_DMA_CHAN_I, (void *)trans_buffer, send_line_cnt, byte_send_perline, byte_send_perline);
	}

	// Enable uPP here. PCR.EN bit
	CSL_FINST(uppRegs->UPPCR, UPP_UPPCR_EN, ENABLE);//上述配置完成后，打开uPP开始传输

	status = 0;


	return status;
}

static void LOCAL_delay(int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
		asm(" nop");
}


int upp_isr()
{
	int status    = 0;
	CSL_CPINTC_Handle   hnd;
    Uint32  rawStatus=0;
	int interrupt_status = uppRegs->UPIER;
	while (interrupt_status != 0)
	{

		if (interrupt_status & upp_int_EOLI)
		{
			uppRegs->UPIER = upp_int_EOLI; // clear EOLI

			// Handle EOLI...
		}
		if (interrupt_status & upp_int_EOWI)
		{
			uppRegs->UPIER = upp_int_EOWI; // clear EOWI

			// Handle EOWI...

		}
		if (interrupt_status & upp_int_ERRI)
		{
			uppRegs->UPIER = upp_int_ERRI; // clear ERRI
			// Handle ERRI...
			status = -1;
		}
		if (interrupt_status & upp_int_UORI)
		{
			uppRegs->UPIER = upp_int_UORI; // clear UORI
			// Handle UORI...
		}
		if (interrupt_status & upp_int_DPEI)
		{
			uppRegs->UPIER = upp_int_DPEI; // clear DPEI
			// Handle DPEI...
		}
		if (interrupt_status & upp_int_EOLQ)
		{
			uppRegs->UPIER = upp_int_EOLQ; // clear EOLQ
			// Handle EOLQ...
		}
		if (interrupt_status & upp_int_EOWQ)
		{
			uppRegs->UPIER = upp_int_EOWQ; // clear EOWQ
			// Handle EOWQ...
			valid = 1;
			first_flag = 0;

		}
		if (interrupt_status & upp_int_ERRQ)
		{
			uppRegs->UPIER = upp_int_ERRQ; // clear ERRQ
			// Handle ERRQ...
			status = -1;
		}
		if (interrupt_status & upp_int_UORQ)
		{
			uppRegs->UPIER = upp_int_UORQ; // clear UORQ
			// Handle UORQ...
		}
		if (interrupt_status & upp_int_DPEQ)
		{
			uppRegs->UPIER = upp_int_DPEQ; // clear DPEQ
			// Handle DPEQ...
		}
		//uppRegs->UPEOI = 0;
		// loop again if any interrupts are left
		interrupt_status = uppRegs->UPIER;
	} // end of while
	// write end of interrupt vector to allow future calls

	hnd = CSL_CPINTC_open(0);

	CSL_CPINTC_getRawInterruptStatus(hnd, 4, &rawStatus);//获取RAW_STATUS_REG[4]的状态


	CSL_CPINTC_clearSysInterrupt(hnd,(CSL_CPINTCSystemInterrupt) rawStatus);//System Interrupt清零


	*((volatile unsigned int *)(0x02600290)) = rawStatus;//System Interrupt Statu EN/CL Register 怎么确定寄存器地址的？

	uppRegs->UPEOI = 0;
	status = 0;


	return status;
} // end of function


void deblurring_WIT_process()
{
	*(volatile unsigned short *)GP_DIR = GPDIR_PARAMS;
	*(volatile unsigned short *)GP_CLR = GPOUT_LIGHT;

	int	byte_receive_perline, byte_send_perline;

//	DEFINATIONS OF VARIABLES
	int  i=0;

	byte_receive_perline = receiveSize / receivelineCnt;
	byte_send_perline = sendSize / sendlineCnt;

	upp_init();

	*(volatile unsigned short *)GP_SET = GPOUT_LIGHT;

	while(1)
	{
		upp_start_transmit(rcvBuffer,receiveSize, byte_receive_perline,sendSize,byte_send_perline,0);

		while(!valid);
		valid = 0;
		/* FLASH LED(GPIO6) FOR DSP BOOT FLAG */
		*(volatile unsigned short *)GP_DIR = GPDIR_PARAMS_BOOT_FLAG;
		*(volatile unsigned short *)GP_CLR = GPOUT_BOOT_FLAG;
		*(volatile unsigned short *)GP_SET = GPOUT_BOOT_FLAG;

		for(i = 0; i < 128; ++i)
			sendBuffer[i] = 0x55;

		for(i = 128; i < 16512; ++i)
		{
			sendBuffer[i] = rcvBuffer[i - 64];
			imageData_Src[i - 128] = rcvBuffer[i - 64];
			imageData_Dst[i - 128] = rcvBuffer[i - 64];
			label_map[i - 128] = 0;
			th_map[i - 128] = 0;
			imageData_ResInput[i - 128] = 0;
			imageData_ResOutput[i - 128] = 0;
		}

		for(i = 16512; i < 32768; ++i)
			sendBuffer[i] = 0xff;

/*
 * 		开始算法
 * 		imageData_Src is the input source data;
 * 		imageData_Dst is the output result data to display;
 */

/*
 * 		Here is the demo
 * 		imageData_Src is the ENTRANCE
 * 		imageData_Dst is the EXIT
 */


		printf("deblurring_WIT_process end");


//		结束算法

		for(i = 128; i < 16512; ++i)
			sendBuffer[i] = imageData_Dst[i - 128];

		upp_start_transmit(sendBuffer,receiveSize, byte_receive_perline,sendSize,byte_send_perline,1);
	}
}












