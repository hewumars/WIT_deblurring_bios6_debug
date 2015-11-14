/*
 * Init.c
 *
 *  Created on: 2013-3-8
 *      Author: Administrator
 */

#include <stdio.h>
#include <math.h>
#include <csl_types.h>
#include <csl_edma3.h>
#include <csl_intc.h>
#include <soc.h>
#include <csl_gpio.h>
#include <csl_gpioAux.h>
#include <cslr_gpio.h>

#include <cslr_device.h>

#include <csl_chipAux.h>

#include <csl_emif4f.h>
#include <csl_emif4fAux.h>

#include <csl_bootcfgAux.h>


#include <csl_cpIntc.h>
#include <csl_cpIntcAux.h>

#include "EDMA3.h"
#include "edmaCommon.h"
#include "evmc665x_gpio.h"
#include "cdatatype.h"

#include "Intc_ISR.h"

#include "Interrupt.h"
#include "IPC.h"

#include "base_6657_include.h"

#include "upp_6657.h"
#include "upp_common.h"


#define ROW      128		//!origin image's height
#define COL      128		//!origin image's width

#define UPP_ADR		0x02580000

/**********************************************************************************/
extern INT32U 					UART_SRC[32];
extern INT32U 					UART_UP_DATA[36];
extern INT32U 					UART_DONE_DATA[33];

extern INT32U 					DDR3_DATA1[200];
extern INT32U 					L2_memory[200];

extern char 					UPP_TX_DATA[2048];

extern INT32U                  	coreNum;

extern INT8U  					qRel[ROW*COL];

//!Intc declaration
CSL_IntcContext                 intcContext_uPP;
CSL_IntcGlobalEnableState       intc_state_uPP;
CSL_IntcEventHandlerRecord      EventHandler_uPP[30];
CSL_IntcParam                   vectId_uPP;

CSL_IntcObj     				intcObjGpio;
CSL_IntcHandle 					hIntcGpio;
CSL_IntcObj     				intcObjGpio5;
CSL_IntcHandle 					hIntcGpio5;
CSL_IntcObj     				intcObjGpio4;
CSL_IntcHandle 					hIntcGpio4;

CSL_IntcObj     				intcObjUpp;
CSL_IntcHandle 					hIntcUpp;

CSL_IntcEventHandlerRecord 		gpioHandler;		//!handle for gpio interrupt
CSL_IntcObj                     intcObjEdma_uPP;
CSL_IntcHandle                  hIntcEdma_uPP;

CSL_IntcEventHandlerRecord      EventRecord_uPP;	//!handle for edma completed
CSL_IntcObj						intcObjEdma_manu;
CSL_IntcHandle                  hIntcEdma_manu;

CSL_IntcEventHandlerRecord      EventRecord_IPC;

CSL_Edma3Handle					hModule_uPP;		//!Edma declaration
CSL_Edma3Obj					edmaObj_uPP;

CSL_Edma3ChannelHandle			hChannel_img_rec;
CSL_Edma3ChannelHandle			hChannel_uart_trans;
CSL_Edma3ChannelHandle			hChannel_uart_rec;
CSL_Edma3ChannelHandle			hChannel_mcbsp_tx;
CSL_Edma3ChannelHandle			hChannel_mcbsp_rx;
CSL_Edma3ChannelHandle			hChannel_uart_send;

CSL_Edma3ChannelHandle			hChannel_DDR3_read;
CSL_Edma3ChannelHandle			hChannel_UPP;

CSL_Edma3ParamHandle     		hParamBasicImgRec;
CSL_Edma3ParamHandle			hParamBasicUartRec;
CSL_Edma3ParamHandle			hParamBasicUartTrans;
CSL_Edma3ParamHandle			hParamBasicUartRec;
CSL_Edma3ParamHandle			hParamBasicMcbspTx;
CSL_Edma3ParamHandle			hParamBasicMcbspRx;
CSL_Edma3ParamHandle			hParamBasicUartSend;

CSL_Edma3ParamHandle			hParamBasicDDR3Read;
CSL_Edma3ParamHandle			hParamBasicUPP;

CSL_Edma3ParamSetup      		myParamSetupImgRec;
CSL_Edma3ParamSetup      		myParamSetupUartTrans;
CSL_Edma3ParamSetup     	 	myParamSetupUartRec;
CSL_Edma3ParamSetup      		myParamSetupMcbspTx;
CSL_Edma3ParamSetup      		myParamSetupMcbspRx;
CSL_Edma3ParamSetup      		myParamSetupUartSend;

CSL_Edma3ParamSetup      		myParamSetupDDR3Read;
CSL_Edma3ParamSetup      		myParamSetupUPP;

CSL_Edma3ChannelObj      		ChObjImgRec;
CSL_Edma3ChannelObj      		ChObjUartTrans;
CSL_Edma3ChannelObj      		ChObjUartRec;
CSL_Edma3ChannelObj      		ChObjMcbspTx;
CSL_Edma3ChannelObj      		ChObjMcbspRx;
CSL_Edma3ChannelObj      		chobjUartSend;

CSL_Edma3ChannelObj      		chobjDDR3Read;
CSL_Edma3ChannelObj      		chobjUPP;

/*******************************************/
CSL_CPINTC_RegsOvly   			glbCpintcHnd[3];
CSL_CPINTC_Handle 				hnd_EDMA_uPP;

/********************* IPC **********************/
CSL_IntcObj     				intcObj[16];
CSL_CPINTC_Handle 				hnd_IPC=0;
CSL_IntcHandle  				hIntc_IPC[2];
uint32_t        				coreVector[MAX_CORE_NUM];

/* CPINTC configuration */
cpintcCfg cpintcInfo[1] =
{
  /* inst   event, channel*/
	{0,    7,    64}
};

interruptCfg intInfo[2] =
{
	/* core   event   vector*/
	{  0,     90,     CSL_INTC_VECTID_9, &IPC_ISR},
	{  1,     90,     CSL_INTC_VECTID_10, &IPC_ISR}
};


/********************* UPP **********************/
CSL_CPINTC_Handle 		hnd_UPP=0;


/*****************************************************************************************************/

void platform_delaycycles(uint32_t cycles)
{
	uint32_t start_val  = CSL_chipReadTSCL();

	while ((CSL_chipReadTSCL() - start_val) < cycles);

    return;
}

static void pll_delay(INT32U ix)
{
    while (ix--) {
        asm("   NOP");
    }
}

/**
 *  @b Description
 *  @n
 *      Utility function which converts a local GEM L2 memory address
 *      to global memory address.
 *
 *  @param[in]  addr
 *      Local address to be converted
 *
 *  @retval
 *      Computed L2 global Address
 */
static uint32_t l2_global_address (uint32_t addr)
{
	uint32_t coreNum;

	/* Get the core number. */
	coreNum = CSL_chipReadReg (CSL_CHIP_DNUM);

	/* Compute the global address. */
	return (addr + (0x10000000 + (coreNum * 0x1000000)));
}

int32_t registerInterruptIPC()
{
	uint32_t i;
	uint32_t event;
	uint32_t vector;
	uint32_t core;
	uint32_t coreID = CSL_chipReadReg (CSL_CHIP_DNUM);
	CSL_IntcEventHandler isr;

	for (i=0; i<MAX_CORE_NUM; i++)
	{
		coreVector[i] = 0;
	}

	for (i=0; i<MAX_CORE_NUM; i++)
	{
		core   = intInfo[i].core;
		if (coreID == core)
		{
			event  = intInfo[i].event;
			vector = intInfo[i].vect;
			isr    = intInfo[i].isr;

			if (MAX_CORE_NUM <= coreVector[core])
			{
				printf("Core %d Vector Number Exceed\n");
			}

			hIntc_IPC[vector] = CSL_intcOpen (&intcObj[vector], event, (CSL_IntcParam*)&vector , NULL);
		    if (hIntc_IPC[vector] == NULL)
		    {
		        printf("Error: GEM-INTC Open failed\n");
		        return -1;
		    }

			/* Register an call-back handler which is invoked when the event occurs. */
		    EventRecord_IPC.handler = isr;
		    EventRecord_IPC.arg = 0;
		    if (CSL_intcPlugEventHandler(hIntc_IPC[vector],&EventRecord_IPC) != CSL_SOK)
		    {
		        printf("Error: GEM-INTC Plug event handler failed\n");
		        return -1;
		    }

			/* Enabling the events. */
		    if (CSL_intcHwControl(hIntc_IPC[vector],CSL_INTC_CMD_EVTCLEAR, NULL) != CSL_SOK)
		    {
		        printf("Error: GEM-INTC CSL_INTC_CMD_EVTCLEAR command failed\n");
		        return -1;
		    }

			/* Enabling the events. */
		    if (CSL_intcHwControl(hIntc_IPC[vector],CSL_INTC_CMD_EVTENABLE, NULL) != CSL_SOK)
		    {
		        printf("Error: GEM-INTC CSL_INTC_CMD_EVTENABLE command failed\n");
		        return -1;
		    }
			coreVector[core]++;
		}
	}

    return 0;
}

void upp_intc_setup_my(int (*isr)(void *))
{
	//��ʼ����ʼ
	intcContext_uPP.eventhandlerRecord = EventHandler_uPP;		//�¼������¼ָ��
	intcContext_uPP.numEvtEntries = 50;						//�¼������Ŀ

    CSL_intcInit(&intcContext_uPP);							//��ʼ���ж������Ķ������������״̬CSL_SOK

    // Enable NMIsʹ�ܷǿ������ж�
    CSL_intcGlobalNmiEnable();

    //Enable global interruptsʹ��ȫ���ж�
    CSL_intcGlobalEnable(&intc_state_uPP);

	/***************** interrupt configration for UPP�ӿ�  **************************/
	/* open CPINTC0 to map the UPP completetion ISR event to the host interrupt */
	hnd_UPP = CSL_CPINTC_open(0);
	if (hnd_UPP == 0)
	{
		printf ("Error: Unable to open CPINTC-1\n");
		return;
	}
	glbCpintcHnd[2] = (CSL_CPINTC_RegsOvly)hnd_UPP;
	//��Ҫ����Ӧ���޸�UPP�������¼���ż�CPINTC���channel��
	CSL_CPINTC_mapSystemIntrToChannel (hnd_UPP, CSL_INTC0_RPINT, 9);
	CSL_CPINTC_enableSysInterrupt (hnd_UPP, CSL_INTC0_RPINT);
	CSL_CPINTC_enableHostInterrupt (hnd_UPP, 9);
	CSL_CPINTC_enableAllHostInterrupt(hnd_UPP);

	vectId_uPP = CSL_INTC_VECTID_4;

	hIntcUpp= CSL_intcOpen (&intcObjUpp, CSL_GEM_INTC0_OUT_9_PLUS_20_MUL_N, &vectId_uPP , NULL);

	gpioHandler.handler = (CSL_IntcEventHandler)&upp_isr;//�¼����ָ��
	gpioHandler.arg = 0;										//���ݸ������ľ��ָ��
	CSL_intcPlugEventHandler(hIntcUpp, &gpioHandler);					//�����¼��;����ӳ���ϵ

	CSL_intcHwControl(hIntcUpp,CSL_INTC_CMD_EVTCLEAR,NULL);

	CSL_intcHwControl(hIntcUpp, CSL_INTC_CMD_EVTENABLE, NULL);

	/***************** interrupt configration for UPP�ӿ�  **************************/
}

/*
 * =============================================================================
 *   @func  IntcInit
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      ��ʼ���ж�
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void IntcInit()
{
	//��ʼ����ʼ
	intcContext_uPP.eventhandlerRecord = EventHandler_uPP;		//�¼������¼ָ��
	intcContext_uPP.numEvtEntries = 50;						//�¼������Ŀ

	/* ��ʼ������,ǰ��ĳ�ʼ������ֻ��Ҫһ��,�����Ҫ�����жϴ���,ֱ������ж�ʸ��
	���¼��ż���,�����ٴγ�ʼ��,����Ḳ�ǵ�ǰ�������(�����¼������жϷ�������ӳ����)*/

	/* open CPINTC0 to map the EDMA completetion ISR event to the host interrupt */
	if(coreNum == 0)
	{
		hnd_IPC = CSL_CPINTC_open(0);//��CPINTC���0
		if (hnd_IPC == 0)
		{
			printf ("Error: Unable to open CPINTC-1\n");
			return;
		}
		glbCpintcHnd[0] = (CSL_CPINTC_RegsOvly)hnd_IPC;//ΪCPINTC0�Ĵ���ע�Ḳ�Ǵ洢��ӳ��
		//��Ҫ����Ӧ���޸�EDMA�������¼���ż�CPINTC���channel��
		CSL_CPINTC_mapSystemIntrToChannel (hnd_IPC, CSL_INTC0_GPINT23, 64);//64��ʲôͨ��������������
		CSL_CPINTC_enableSysInterrupt (hnd_IPC, CSL_INTC0_GPINT23);
		CSL_CPINTC_enableHostInterrupt (hnd_IPC, 64);
		CSL_CPINTC_enableAllHostInterrupt(hnd_IPC);
	}
	else
	{
		hnd_IPC = CSL_CPINTC_open(0);
		if (hnd_IPC == 0)
		{
			printf ("Error: Unable to open CPINTC-1\n");
			return;
		}
		glbCpintcHnd[0] = (CSL_CPINTC_RegsOvly)hnd_IPC;
		//��Ҫ����Ӧ���޸�EDMA�������¼���ż�CPINTC���channel��
		CSL_CPINTC_mapSystemIntrToChannel (hnd_IPC, CSL_INTC0_GPINT24, 63);
		CSL_CPINTC_enableSysInterrupt (hnd_IPC, CSL_INTC0_GPINT24);
		CSL_CPINTC_enableHostInterrupt (hnd_IPC, 63);
		CSL_CPINTC_enableAllHostInterrupt(hnd_IPC);
	}

    CSL_intcInit(&intcContext_uPP);							//��ʼ���ж������Ķ������������״̬CSL_SOK

    // Enable NMIsʹ�ܷǿ������ж�
    CSL_intcGlobalNmiEnable();

    //Enable global interruptsʹ��ȫ���ж�
    CSL_intcGlobalEnable(&intc_state_uPP);

	if(registerInterruptIPC() != 0)
	{
		printf("Error: registerInterruptIPC failed\n");
	}

	if(coreNum == 0)
	{
		/***************** interrupt configration for ��ͼ **************************/
		///////////////////////////��һ������ʱ���¼�ֱ����ΪEvent ID��INTC�������ж�������//////////////////////////////
		vectId_uPP = CSL_INTC_VECTID_8;
		/*���¼���(CSL_INTC_EVENTID_GPINT7)���ж�����(vectId_uPP)����intcObjEdma_uPP��eventId��vectId_uPP,
		���ҽ����жϺ��¼�֮���ӳ���ϵ(ͨ��������Ӧ��INTMUX�Ĵ���)*///���ж�����
		hIntcGpio= CSL_intcOpen (&intcObjGpio, CSL_GEM_TINT2L,&vectId_uPP , NULL);

		/* Bind ISR to Interrupt ���жϷ�����*/
		gpioHandler.handler = (CSL_IntcEventHandler)&HandleGPIO7RecImg_INT;	//Timer�¼����ָ��
		gpioHandler.arg = hIntcGpio;										//���ݸ������ľ��ָ��
		CSL_intcPlugEventHandler(hIntcGpio, &gpioHandler);					//�����¼��;����ӳ���ϵ

		CSL_intcHwControl(hIntcGpio,CSL_INTC_CMD_EVTCLEAR,NULL);
		/* Event Enable �¼�ʹ��*/
		CSL_intcHwControl(hIntcGpio, CSL_INTC_CMD_EVTENABLE, NULL);
		/***************** interrupt configration for ��ͼ **************************/
        ///////////////////////////�ڶ�����EDMACC_GINT�¼���Ϊsystem interruptͨ��CPINTCӳ�䵽host interrupt////////////
		/* open CPINTC0 to map the EDMA completetion ISR event to the host interrupt */
		hnd_EDMA_uPP = CSL_CPINTC_open(0);
		if (hnd_EDMA_uPP == 0)
		{
			printf ("Error: Unable to open CPINTC-1\n");
			return;
		}
		glbCpintcHnd[1] = (CSL_CPINTC_RegsOvly)hnd_EDMA_uPP;
		//��Ҫ����Ӧ���޸�EDMA�������¼���ż�CPINTC���channel��
		//tms320c6657.pdf��"EDMA�������¼����"��Ӧ"CIC0 Event Inputs��22��"��System Event Mapping��CIC0_OUT(8+20*n)��"8"Ϊhost interrupt
		CSL_CPINTC_mapSystemIntrToChannel (hnd_EDMA_uPP, CSL_INTC0_CPU_3_2_EDMACC_GINT, 8);//system interrupt maping  to host interrupt
		CSL_CPINTC_enableSysInterrupt (hnd_EDMA_uPP, CSL_INTC0_CPU_3_2_EDMACC_GINT);
		CSL_CPINTC_enableHostInterrupt (hnd_EDMA_uPP, 8);
		CSL_CPINTC_enableAllHostInterrupt(hnd_EDMA_uPP);

		/***************** interrupt configration for EDMA completed ***************/
		//////////////////////////////////////��������host interrupt��ת��ΪEvent ID�ţ������ж�������/////////////////////////
		/* Opening a intc handle for edma event */
		vectId_uPP = CSL_INTC_VECTID_7;
		//���ж��������,�����¼����ж�֮���ӳ���ϵ
		//CSL_GEM_INTC0_OUT_8_PLUS_20_MUL_N  ��CIC0_OUT(8+20*n)��8+20*nΪEvent ID
		hIntcEdma_uPP = CSL_intcOpen (&intcObjEdma_uPP, CSL_GEM_INTC0_OUT_8_PLUS_20_MUL_N, \
								  &vectId_uPP , NULL);

		/* Association of an EDMA event handler with the INTC routine ����EDMA�¼������INTC����*/
		EventRecord_uPP.handler = &eventEdmaHandler;//EDMA�¼����ָ��
		EventRecord_uPP.arg = (void*)(hModule_uPP);//hModule_uPP��EMDAͨ�����
		CSL_intcPlugEventHandler(hIntcEdma_uPP,&EventRecord_uPP);		//�����¼��;����ӳ���ϵ

		CSL_intcHwControl(hIntcEdma_uPP,CSL_INTC_CMD_EVTCLEAR,NULL);
		/* Enabling event edma ʹ��EDMA��ͼ����ж� */
		CSL_intcHwControl(hIntcEdma_uPP,CSL_INTC_CMD_EVTENABLE,NULL);

		/* Hook up the EDMA event with an completion code function handler */
		EdmaEventHook(CSL_EDMA3_CHA_GPINT0, ImgEDMARecCompleted_INT);//��ͼ����ж�
		EdmaEventHook(CSL_EDMA3_CHA_GPINT1, UartEDMARecGyroCompleted_INT);//������������������ж�
		EdmaEventHook(CSL_EDMA3_CHA_UTXEVT, UartEDMASendUppcCompleted_INT);//DSP����λ����������ж�
		EdmaEventHook(CSL_EDMA3_CHA_URXEVT, UartEDMARecUppcData_INT);//DSP������λ�������ж�
		EdmaEventHook(CSL_EDMA3_CHA_GPINT3, DDR3EdmaReadCompleted_INT);//DDR3��ȡ�����ж�
		/***************** interrupt configration for EDMA completed ***************/

		/***************** interrupt configration for ��������������**************************/
		vectId_uPP = CSL_INTC_VECTID_6;                                                                            ////////û��start
		/*���¼���(CSL_INTC_EVENTID_GPINT5)���ж�����(vectId_uPP)����intcObjEdma_uPP��eventId��vectId_uPP,
		���ҽ����жϺ��¼�֮���ӳ���ϵ(ͨ��������Ӧ��INTMUX�Ĵ���)*/
		hIntcGpio5= CSL_intcOpen (&intcObjGpio5, CSL_GEM_TINT2H,&vectId_uPP , NULL);

		/* Bind ISR to Interrupt */
		gpioHandler.handler = (CSL_IntcEventHandler)&HandleGPIO5RecGyro_INT;	//�¼����ָ��
		gpioHandler.arg = hIntcGpio5;											//���ݸ������ľ��ָ��
		CSL_intcPlugEventHandler(hIntcGpio5, &gpioHandler);						//�����¼��;����ӳ���ϵ

		CSL_intcHwControl(hIntcGpio5,CSL_INTC_CMD_EVTCLEAR,NULL);
		/* Event Enable */
		CSL_intcHwControl(hIntcGpio5, CSL_INTC_CMD_EVTENABLE, NULL);
		/***************** interrupt configration for �������������� **************************/

		/***************** interrupt configration for ������λ������**************************/
		vectId_uPP = CSL_INTC_VECTID_5;
		/*���¼���(CSL_INTC_EVENTID_GPINT4)���ж�����(vectId_uPP)����intcObjEdma_uPP��eventId��vectId_uPP,
		���ҽ����жϺ��¼�֮���ӳ���ϵ(ͨ��������Ӧ��INTMUX�Ĵ���)*/
		hIntcGpio4= CSL_intcOpen (&intcObjGpio4, CSL_GEM_TINT3L,&vectId_uPP , NULL);

		/* Bind ISR to Interrupt */
		gpioHandler.handler = (CSL_IntcEventHandler)&HandleGPIO4RecUppc_INT;//�¼����ָ��
		gpioHandler.arg = hIntcGpio4;										//���ݸ������ľ��ָ��
		CSL_intcPlugEventHandler(hIntcGpio4, &gpioHandler);					//�����¼��;����ӳ���ϵ

		CSL_intcHwControl(hIntcGpio4,CSL_INTC_CMD_EVTCLEAR,NULL);
		/* Event Enable */
		CSL_intcHwControl(hIntcGpio4, CSL_INTC_CMD_EVTENABLE, NULL);                        ////////û��end
		/***************** interrupt configration for ������λ������ **************************/

		/***************** interrupt configration for UPP�ӿ�  **************************/
		////////////////////////////////////////////////������FPGAͨ�ţ�����ͼ��//////////////////////////////////////////////////////////////////
		/* open CPINTC0 to map the UPP completetion ISR event to the host interrupt */
		hnd_UPP = CSL_CPINTC_open(0);
		if (hnd_UPP == 0)
		{
			printf ("Error: Unable to open CPINTC-1\n");
			return;
		}
		glbCpintcHnd[2] = (CSL_CPINTC_RegsOvly)hnd_UPP;
		//��Ҫ����Ӧ���޸�UPP�������¼���ż�CPINTC���channel��
		//CSL_INTC0_RPINTΪupp��system interrupt ��9ΪCIC0_OUT(9+20*n)�е�host interrupt
		CSL_CPINTC_mapSystemIntrToChannel (hnd_UPP, CSL_INTC0_RPINT, 9);
		CSL_CPINTC_enableSysInterrupt (hnd_UPP, CSL_INTC0_RPINT);
		CSL_CPINTC_enableHostInterrupt (hnd_UPP, 9);
		CSL_CPINTC_enableAllHostInterrupt(hnd_UPP);

		vectId_uPP = CSL_INTC_VECTID_4;
        //���ж���������host interruptת��Ϊevent id֮�����INTC��vectId_uPP
		hIntcUpp= CSL_intcOpen (&intcObjUpp, CSL_GEM_INTC0_OUT_9_PLUS_20_MUL_N, &vectId_uPP , NULL);

		gpioHandler.handler = (CSL_IntcEventHandler)&upp_isr;//�¼����ָ��
		gpioHandler.arg = 0;										//���ݸ������ľ��ָ��
		CSL_intcPlugEventHandler(hIntcUpp, &gpioHandler);					//�����¼��;����ӳ���ϵ

		CSL_intcHwControl(hIntcUpp,CSL_INTC_CMD_EVTCLEAR,NULL);

		CSL_intcHwControl(hIntcUpp, CSL_INTC_CMD_EVTENABLE, NULL);

		/***************** interrupt configration for UPP�ӿ�  **************************/
	}
}

/*
 * =============================================================================
 *   @func  EDMAInit
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      ��ʼ��EDMA
 *
 *   @return
 *      NONE
 *      ʹ��---Ӱ������1
 *      ͼ�����--ͨ��6��CSL_EDMA3_CHA_GPINT0��--Դ��ַ��0x70180000��EMIF16 CE0��,Ŀ���ַ��C1PL��qRel[COL*ROW]�����׵�ַ
 *      UART����--ͨ��5��CSL_EDMA3_CHA_UTXEVT��--Դ��ַ��C1PL��UART_SRC[32]�����׵�ַ��Ŀ���ַ��0x70000000
 *      UART����-ͨ��4��CSL_EDMA3_CHA_URXEVT��--Դ��ַ��UART1_FIFO(0x70080000)��Ŀ���ַ��C1PL��UART_UP_DATA[36]�����׵�ַ
 *      UART����PC����--ͨ��7��CSL_EDMA3_CHA_GPINT1��--Դ��ַ��UART1_FIFO(0x70080000)��Ŀ���ַ��C1PL��UART_DONE_DATA[33]�����׵�ַ
 *      ��DDR3����--ͨ��9��CSL_EDMA3_CHA_GPINT3��--Դ��ַ��C1PL��DDR3_DATA1[200]�����׵�ַ��Ŀ�ĵ�ַ��l2_global_address((Uint32) L2_memory)
 * =============================================================================
 */
void EDMAInit()
{
    CSL_Edma3ChannelAttr     chParam;//���ڴ�һ��EDMAͨ���Ĳ����ṹ��
    CSL_Edma3Context         edmaContext;
    CSL_Edma3QueryInfo       info; //EDMA������Ϣ
    CSL_Edma3CmdIntr         regionIntr;//EDMA����/��ѯ����ṹ��
                                                           //for issuing commands for Interrupt related APIs An object of this type is allocated by the user and its address is passed to the Control API
    CSL_Edma3CmdDrae         regionAccess;//EDMA����/��ѯ����ṹ�����ڲ�ѯQDMA�������ʹ������
    CSL_Status               status;

    /* EDMAģ���ʼ�� */
    CSL_edma3Init(&edmaContext); 			//��ʼ��edma�����Ķ������������״̬CSL_SOK

    /* EDMAģ�鼶����, �õ�EDMA�Ĵ�������׵�ַ,����edmaObj_uPP->regs,��󷵻ص�ָ��hModule_uPPʵ����ָ��edmaObj*/
    hModule_uPP = CSL_edma3Open(&edmaObj_uPP,CSL_EDMA3,NULL,&status);

    /* ��ѯģ����Ϣ,�õ�EDMA��������״̬,ʵ���Ͼ��ǰ�����ʶ��Ĵ�����PID����EDMA3CC���üĴ�����CCCFG����ֵ������info*/
    CSL_edma3GetHwStatus(hModule_uPP,CSL_EDMA3_QUERY_INFO, &info);

    if(coreNum == 0)
    {
		/* Setup the DRAE masks
		 * DRAE enable(Bits 0-15) for the shadow region 1.
		 */
		regionAccess.region = CSL_EDMA3_REGION_1 ;
		regionAccess.drae =   0xFFFFFFFF ;
		regionAccess.draeh =  0xFFFFFFFF ;
		/*ʹ��region����ļĴ�������,ʵ���Ͼ��ǰ�regionAccess��drae��draehд��*/
		CSL_edma3HwControl(hModule_uPP,CSL_EDMA3_CMD_DMAREGION_ENABLE,&regionAccess);

		/********************************Setup for Image receive******************************/
		//����ͼ������
		/* Channel open */
		chParam.regionNum = CSL_EDMA3_REGION_1;					//edma�����Ϊ1
		chParam.chaNum = CSL_EDMA3_CHA_GPINT0;					//edmaͨ����Ϊ6,GPIO�ж���Ϊ�¼�
		/*��EDMA��ͨ��,ʵ���Ͼ��ǰ�chParam��regionNum��chaNum����ChObjImgRec��region��chaNum,
		���Ұ�EDMA�Ĵ�������׵�ַ,����ChObjImgRec->regs,��󷵻ص�ָ��hChannel_img_recָ��ChObjImgRec*/
		hChannel_img_rec= CSL_edma3ChannelOpen(&ChObjImgRec, CSL_EDMA3, &chParam, &status);

		/* ������Ӧͨ���Ĳ����Ĵ����ĵ�ַ��hParamBasicImgRec*/
		hParamBasicImgRec= CSL_edma3GetParamHandle(hChannel_img_rec,CSL_EDMA3_CHA_GPINT0,&status);

		/* Edma�����������Edma parameter entry Setup */
		myParamSetupImgRec.option = CSL_EDMA3_OPT_MAKE(CSL_EDMA3_ITCCH_DIS, \
													   CSL_EDMA3_TCCH_DIS, \
													   CSL_EDMA3_ITCINT_DIS, \
													   CSL_EDMA3_TCINT_EN,\
													   CSL_EDMA3_CHA_GPINT0,\
													   CSL_EDMA3_TCC_NORMAL,\
													   CSL_EDMA3_FIFOWIDTH_NONE, \
													   CSL_EDMA3_STATIC_DIS, \
													   CSL_EDMA3_SYNC_A, \
													   CSL_EDMA3_ADDRMODE_INCR, \
													   CSL_EDMA3_ADDRMODE_INCR);//��opt��û����ͨ��������CSL_EDMA3_CHA_GPINT0
		myParamSetupImgRec.srcAddr = (Uint32)IMG_SOURCE_FIFO;		//ͼ������Դ��ַ
		myParamSetupImgRec.aCntbCnt = CSL_EDMA3_CNT_MAKE(63001,1);	//ʹ��������ַģʽ����251*251=63001�ֽ�
		myParamSetupImgRec.dstAddr = (Uint32)qRel;					//ʵʱͼ���ַ    "C1PL"�����ģ�
		myParamSetupImgRec.srcDstBidx = CSL_EDMA3_BIDX_MAKE(0,0);
		myParamSetupImgRec.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL,1);
		myParamSetupImgRec.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
		myParamSetupImgRec.cCnt = 1;

		/*ͨ������,ʵ�����ǽ�����ʹ�õ�ͨ����(�ܹ�64��)��ʹ�õĲ�����(�ܹ�256��)����ӳ���ϵ
		(ͨ������DCHMAP�Ĵ���)*/
		CSL_edma3HwChannelSetupParam (hChannel_img_rec, CSL_EDMA3_CHA_GPINT0);

		/*ѡ���¼������ȼ�����*/
		CSL_edma3HwChannelSetupQue(hChannel_img_rec, CSL_EDMA3_QUE_1);

		/*ͨ��ָ��CSL_Edma3ParamSetup��ָ������EDMA����*/
		CSL_edma3ParamSetup(hParamBasicImgRec,&myParamSetupImgRec);

		/********************************Setup for UART transmition******************************/
		//DSP������λ��
		/* Channel open */
		chParam.regionNum = CSL_EDMA3_REGION_1;
		chParam.chaNum = CSL_EDMA3_CHA_UTXEVT;				//5��ͨ��
		 /*��EDMA��ͨ��,ʵ���Ͼ��ǰ�chParam��regionNum��chaNum����ChObjUartTrans��region��chaNum,
		���Ұ�EDMA�Ĵ�������׵�ַ,����ChObjUartTrans->regs,��󷵻ص�ָ��hChannel_uart_transָ��ChObjUartTrans*/
		hChannel_uart_trans= CSL_edma3ChannelOpen(&ChObjUartTrans, CSL_EDMA3, &chParam, &status);

		/* ������Ӧͨ���Ĳ����Ĵ����ĵ�ַ��hParamBasicUartTrans*/
		hParamBasicUartTrans= CSL_edma3GetParamHandle(hChannel_uart_trans,CSL_EDMA3_CHA_UTXEVT,&status);

		/* Edma parameter entry Setup */
		myParamSetupUartTrans.option = CSL_EDMA3_OPT_MAKE(CSL_EDMA3_ITCCH_DIS, \
														  CSL_EDMA3_TCCH_DIS, \
										     			  CSL_EDMA3_ITCINT_DIS, \
						     							  CSL_EDMA3_TCINT_EN,\
														  CSL_EDMA3_CHA_UTXEVT,\
														  CSL_EDMA3_TCC_NORMAL,\
														  CSL_EDMA3_FIFOWIDTH_NONE, \
														  CSL_EDMA3_STATIC_DIS, \
														  CSL_EDMA3_SYNC_A, \
														  CSL_EDMA3_ADDRMODE_INCR, \
														  CSL_EDMA3_ADDRMODE_INCR);
		myParamSetupUartTrans.srcAddr = (Uint32)UART_SRC; 			//DSP������λ������Դ��ַ
		myParamSetupUartTrans.aCntbCnt = CSL_EDMA3_CNT_MAKE(128,1); //������ַģʽ����32*4�ֽ�
		myParamSetupUartTrans.dstAddr = (Uint32)UART_FIFO;			//DSP������λ������Ŀ�ĵ�ַ
		myParamSetupUartTrans.srcDstBidx = CSL_EDMA3_BIDX_MAKE(0,0);
		myParamSetupUartTrans.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL, 1);
		myParamSetupUartTrans.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
		myParamSetupUartTrans.cCnt = 1;

		/*ͨ������,ʵ�����ǽ�����ʹ�õ�ͨ����(�ܹ�64��)��ʹ�õĲ�����(�ܹ�256��)����ӳ���ϵ
		(ͨ������DCHMAP�Ĵ���)*/
		CSL_edma3HwChannelSetupParam (hChannel_uart_trans, CSL_EDMA3_CHA_UTXEVT);

		/*ѡ���¼������ȼ�����*/
		CSL_edma3HwChannelSetupQue(hChannel_uart_trans, CSL_EDMA3_QUE_1);

		/*����д��Ĵ���*/
		CSL_edma3ParamSetup(hParamBasicUartTrans,&myParamSetupUartTrans);

		/********************************Setup for Uart receive******************************/
		//��������������
		/* Channel open */
		chParam.regionNum = CSL_EDMA3_REGION_1;
		chParam.chaNum = CSL_EDMA3_CHA_URXEVT;					//4��ͨ��
		 /*��EDMA��ͨ��,ʵ���Ͼ��ǰ�chParam��regionNum��chaNum����ChObjImgRec��region��chaNum,
		���Ұ�EDMA�Ĵ�������׵�ַ,����ChObjImgRec->regs,��󷵻ص�ָ��hChannel_img_recָ��ChObjImgRec*/
		hChannel_uart_rec= CSL_edma3ChannelOpen(&ChObjUartRec, CSL_EDMA3, &chParam, &status);

		/* ������Ӧͨ���Ĳ����Ĵ����ĵ�ַ��hParamBasicImgRec*/
		hParamBasicUartRec= CSL_edma3GetParamHandle(hChannel_uart_rec,CSL_EDMA3_CHA_URXEVT,&status);

		/* Edma parameter entry Setup */
		myParamSetupUartRec.option = CSL_EDMA3_OPT_MAKE(CSL_EDMA3_ITCCH_DIS, \
													    CSL_EDMA3_TCCH_DIS, \
														CSL_EDMA3_ITCINT_DIS, \
														CSL_EDMA3_TCINT_EN,\
														CSL_EDMA3_CHA_URXEVT,\
														CSL_EDMA3_TCC_NORMAL,\
														CSL_EDMA3_FIFOWIDTH_NONE, \
														CSL_EDMA3_STATIC_DIS, \
														CSL_EDMA3_SYNC_A, \
														CSL_EDMA3_ADDRMODE_INCR, \
														CSL_EDMA3_ADDRMODE_INCR);
		myParamSetupUartRec.srcAddr = (Uint32)UART1_FIFO;         	//���ڽ�������������Դ��ַ
		myParamSetupUartRec.aCntbCnt = CSL_EDMA3_CNT_MAKE(144,1);   // ������ַģʽ����36*4�ֽ�
		myParamSetupUartRec.dstAddr = (Uint32)UART_UP_DATA;			//���ڽ�������������Ŀ�ĵ�ַ
		myParamSetupUartRec.srcDstBidx = CSL_EDMA3_BIDX_MAKE(0,0);
		myParamSetupUartRec.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL,  1);
		myParamSetupUartRec.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
		myParamSetupUartRec.cCnt = 1;

		/*ͨ������,ʵ�����ǽ�����ʹ�õ�ͨ����(�ܹ�64��)��ʹ�õĲ�����(�ܹ�256��)����ӳ���ϵ
		(ͨ������DCHMAP�Ĵ���)*/
		CSL_edma3HwChannelSetupParam (hChannel_uart_rec, CSL_EDMA3_CHA_URXEVT);

		/*ѡ���¼������ȼ�����*/
		CSL_edma3HwChannelSetupQue(hChannel_uart_rec, CSL_EDMA3_QUE_1);

		 /*������д��Ĵ���*/
		CSL_edma3ParamSetup(hParamBasicUartRec,&myParamSetupUartRec);

		/********************************Setup for Uart receive**************************************************/

		/********************************Setup for Uart receive pc data***************************************************/
		//DSP������λ������
		/* Channel open */
		chParam.regionNum = CSL_EDMA3_REGION_1;
		chParam.chaNum = CSL_EDMA3_CHA_GPINT1;			//7��ͨ��
		 /*��EDMA��ͨ��,ʵ���Ͼ��ǰ�chParam��regionNum��chaNum����ChObjImgRec��region��chaNum,
		���Ұ�EDMA�Ĵ�������׵�ַ,����ChObjImgRec->regs,��󷵻ص�ָ��hChannel_img_recָ��ChObjImgRec*/
		hChannel_uart_send= CSL_edma3ChannelOpen(&chobjUartSend, CSL_EDMA3, &chParam, &status);

		/* ������Ӧͨ���Ĳ����Ĵ����ĵ�ַ��hParamBasicImgRec*/
		hParamBasicUartSend= CSL_edma3GetParamHandle(hChannel_uart_send,CSL_EDMA3_CHA_GPINT1,&status);

		/* Edma parameter entry Setup */
		myParamSetupUartSend.option = CSL_EDMA3_OPT_MAKE(CSL_EDMA3_ITCCH_DIS, \
														 CSL_EDMA3_TCCH_DIS, \
														 CSL_EDMA3_ITCINT_DIS, \
														 CSL_EDMA3_TCINT_EN,\
														 CSL_EDMA3_CHA_GPINT1,\
														 CSL_EDMA3_TCC_NORMAL,\
														 CSL_EDMA3_FIFOWIDTH_NONE, \
														 CSL_EDMA3_STATIC_DIS, \
														 CSL_EDMA3_SYNC_A, \
														 CSL_EDMA3_ADDRMODE_INCR, \
														 CSL_EDMA3_ADDRMODE_INCR);
		myParamSetupUartSend.srcAddr = (Uint32)UART_FIFO;       	//PC������DSP������Դ��ַ
		myParamSetupUartSend.aCntbCnt = CSL_EDMA3_CNT_MAKE(144,1);  //������ַģʽ����36*4�ֽ�
		myParamSetupUartSend.dstAddr = (Uint32)UART_DONE_DATA;		// PC������DSP������Ŀ�ĵ�ַ
		myParamSetupUartSend.srcDstBidx = CSL_EDMA3_BIDX_MAKE(0,0);
		myParamSetupUartSend.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL,  1);
		myParamSetupUartSend.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
		myParamSetupUartSend.cCnt = 1;

		/*ͨ������,ʵ�����ǽ�����ʹ�õ�ͨ����(�ܹ�64��)��ʹ�õĲ�����(�ܹ�256��)����ӳ���ϵ
		(ͨ������DCHMAP�Ĵ���)*/
		CSL_edma3HwChannelSetupParam (hChannel_uart_send,CSL_EDMA3_CHA_GPINT1);

		/*ѡ���¼������ȼ�����*/
		CSL_edma3HwChannelSetupQue(hChannel_uart_send, CSL_EDMA3_QUE_1);

		 /*������д��Ĵ���*/
		CSL_edma3ParamSetup(hParamBasicUartSend,&myParamSetupUartSend);
		/********************************Setup for Uart send*****************************************************/

		/********************************Setup for DDR3 Data reading***************************************************/
		//DSP������λ������
		/* Channel open */
		chParam.regionNum = CSL_EDMA3_REGION_1;
		chParam.chaNum = CSL_EDMA3_CHA_GPINT3;			//9��ͨ��
		 /*��EDMA��ͨ��,ʵ���Ͼ��ǰ�chParam��regionNum��chaNum����ChObjImgRec��region��chaNum,
		���Ұ�EDMA�Ĵ�������׵�ַ,����ChObjImgRec->regs,��󷵻ص�ָ��hChannel_img_recָ��ChObjImgRec*/
		hChannel_DDR3_read= CSL_edma3ChannelOpen(&chobjDDR3Read, CSL_EDMA3, &chParam, &status);

		/* ������Ӧͨ���Ĳ����Ĵ����ĵ�ַ��hParamBasicImgRec*/
		hParamBasicDDR3Read= CSL_edma3GetParamHandle(hChannel_DDR3_read,CSL_EDMA3_CHA_GPINT3,&status);

		/* Edma parameter entry Setup */
		myParamSetupDDR3Read.option = CSL_EDMA3_OPT_MAKE(CSL_EDMA3_ITCCH_DIS, \
														 CSL_EDMA3_TCCH_DIS, \
														 CSL_EDMA3_ITCINT_DIS, \
														 CSL_EDMA3_TCINT_EN,\
														 CSL_EDMA3_CHA_GPINT3,\
														 CSL_EDMA3_TCC_NORMAL,\
														 CSL_EDMA3_FIFOWIDTH_NONE, \
														 CSL_EDMA3_STATIC_DIS, \
														 CSL_EDMA3_SYNC_A, \
														 CSL_EDMA3_ADDRMODE_INCR, \
														 CSL_EDMA3_ADDRMODE_INCR);
		myParamSetupDDR3Read.srcAddr = (Uint32)DDR3_DATA1;       	//PC������DSP������Դ��ַ
		myParamSetupDDR3Read.aCntbCnt = CSL_EDMA3_CNT_MAKE(144,1);  //������ַģʽ����36*4�ֽ�
		myParamSetupDDR3Read.dstAddr = (Uint32)l2_global_address((Uint32) L2_memory);		// PC������DSP������Ŀ�ĵ�ַ
		myParamSetupDDR3Read.srcDstBidx = CSL_EDMA3_BIDX_MAKE(0,0);
		myParamSetupDDR3Read.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL,  1);
		myParamSetupDDR3Read.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
		myParamSetupDDR3Read.cCnt = 1;

		/*ͨ������,ʵ�����ǽ�����ʹ�õ�ͨ����(�ܹ�64��)��ʹ�õĲ�����(�ܹ�256��)����ӳ���ϵ
		(ͨ������DCHMAP�Ĵ���)*/
		CSL_edma3HwChannelSetupParam (hChannel_DDR3_read, CSL_EDMA3_CHA_GPINT3);

		/*ѡ���¼������ȼ�����*/
		CSL_edma3HwChannelSetupQue(hChannel_DDR3_read, CSL_EDMA3_QUE_1);

		 /*������д��Ĵ���*/
		CSL_edma3ParamSetup(hParamBasicDDR3Read,&myParamSetupDDR3Read);
		/********************************Setup for DDR3 Data reading***************************************************/

		/* Enable interrupts ,ʹ����Ӧͨ���Ĵ�������ж�,��������4��ͨ��,����Ҫʹ��,
		�������˴���ͨ��,������Ӧ��λҲҪ׷����1*/
		regionIntr.region = CSL_EDMA3_REGION_1 ;
		//����ESR�Ĵ�������4��5��6��7��9��ͨ��λ��1
		regionIntr.intr = (1<<CSL_EDMA3_CHA_UTXEVT) | (1<<CSL_EDMA3_CHA_URXEVT) | (1<<CSL_EDMA3_CHA_GPINT3) | (1<<CSL_EDMA3_CHA_GPINT1) | (1<<CSL_EDMA3_CHA_GPINT0) ;

		CSL_edma3HwControl(hModule_uPP,CSL_EDMA3_CMD_INTR_ENABLE,&regionIntr);//ʹ��ͨ��
    }
    else
    {

    }
}

/*
 * =============================================================================
 *   @func  GpioInit
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      ��ʼ��gpio
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */

#define GPIOBANKNUM     (0)


/******************************************************************************
 *
 * Function:		gpioInit
 *
 * Description:		Initializes the GPIO peripheral
 *
 * Parameters:		void
 *
 * Return Value: 	void
 *
 *****************************************************************************/

void gpioInit(void)
{
    INT32S pinNum;
    CSL_GpioHandle  hGpio;

    // Open the CSL GPIO Module 0
    hGpio = CSL_GPIO_open (0);

	// Disable the GPIO global interrupts
	CSL_GPIO_bankInterruptDisable(hGpio, GPIOBANKNUM);

	// Clear all falling edge trigger and rising edge trigger
	for (pinNum = GPIO_0; pinNum <= GPIO_15; pinNum++) {
        CSL_GPIO_clearFallingEdgeDetect(hGpio, pinNum);
        CSL_GPIO_clearRisingEdgeDetect (hGpio, pinNum);
    }

	// Set all GPIO as input
    //	GPIOREGS->DIR = GPIOREGS->DIR & 0xffffffff;

	// Configure the GPIOs for NAND flash controller communication
	// Configure data bus as output
	gpioSetDataBusDirection(GPIO_OUT);

	// Configure the signal pins direction
	gpioSetDirection(DSP_FPGA_CMD0, GPIO_OUT );
	gpioSetDirection(DSP_FPGA_CMD1, GPIO_OUT );

	gpioSetDirection(DSP_FPGA_STROBE, GPIO_OUT );
	gpioSetDirection(FPGA_DSP_READY, GPIO_IN );
}

/******************************************************************************
 *
 * Function:		gpioSetDirection
 *
 * Description:		This function configures the specified GPIO's direction
 *
 * Parameters:		uiNumber - 	GPIO number to configure
 * 					direction - GPIO_OUT or GPIO_IN
 *
 * Return Value: 	void
 *
 *****************************************************************************/

void gpioSetDirection( INT32U uiNumber, GpioDirection direction )
{
    CSL_GpioHandle  hGpio;

    // Open the CSL GPIO Module 0
    hGpio = CSL_GPIO_open (0);

    if ( direction == GPIO_OUT ) {
        CSL_GPIO_setPinDirOutput(hGpio, uiNumber); // Set to OUTPUT
    }
    else {
        CSL_GPIO_setPinDirInput (hGpio, uiNumber); // Set to INPUT
    }
}

/******************************************************************************
 *
 * Function:		gpioSetDataBusDirection
 *
 * Description:		This function configures the GPIO[7:0]'s direction
 *
 * Parameters:		direction - GPIO_OUT or GPIO_IN
 *
 * Return Value: 	void
 *
 *****************************************************************************/

void gpioSetDataBusDirection( GpioDirection direction )
{
    INT32S pinNum;
    CSL_GpioHandle  hGpio;

    // Open the CSL GPIO Module 0
    hGpio = CSL_GPIO_open (0);

    if ( direction == GPIO_OUT ) {
        for (pinNum=GPIO_0; pinNum <=GPIO_7; pinNum++) {
            CSL_GPIO_setPinDirOutput(hGpio, pinNum); // Set to OUTPUT
        }
    }
    else {
        for (pinNum=GPIO_0; pinNum <=GPIO_7; pinNum++) {
            CSL_GPIO_setPinDirInput(hGpio, pinNum); // Set to INPUT
        }
    }
}



/* Set the desired DDR3 configuration -- assumes 66.67 MHz DDR3 clock input */
CSL_Status DDR3Init()
{

    CSL_Status status = CSL_SOK;
    volatile unsigned int loopCount;
    INT32U ddr3config, ddrPhyCtrl;
    INT8U ddrPHYReadLatency;
    EMIF4F_TIMING1_CONFIG sdram_tim1;
    EMIF4F_TIMING2_CONFIG sdram_tim2;
    EMIF4F_TIMING3_CONFIG sdram_tim3;
    EMIF4F_OUTPUT_IMP_CONFIG    zqcfg;
    EMIF4F_PWR_MGMT_CONFIG      pwrmgmtcfg;
    EMIF4F_SDRAM_CONFIG         sdramcfg;

    CSL_BootCfgUnlockKicker();

    /* Wait for PLL to lock = min 500 ref clock cycles.
       With refclk = 100MHz, = 5000 ns = 5us */
    platform_delaycycles(50000);

    /**************** 3.3 Leveling Register Configuration ********************/
    CSL_BootCfgGetDDRConfig(0, &ddr3config);
    ddr3config &= ~(0x007FE000);  // clear ctrl_slave_ratio field
    CSL_BootCfgSetDDRConfig(0, ddr3config);

    CSL_BootCfgGetDDRConfig(0, &ddr3config);
    ddr3config |= 0x00200000;     // set ctrl_slave_ratio to 0x100
    CSL_BootCfgSetDDRConfig(0, ddr3config);

    CSL_BootCfgGetDDRConfig(12, &ddr3config);
    ddr3config |= 0x08000000;    // Set invert_clkout = 1
    CSL_BootCfgSetDDRConfig(12, ddr3config);

    CSL_BootCfgGetDDRConfig(0, &ddr3config);
    ddr3config |= 0xF;            // set dll_lock_diff to 15
    CSL_BootCfgSetDDRConfig(0, ddr3config);

    CSL_BootCfgGetDDRConfig(23, &ddr3config);
    ddr3config |= 0x00000200;    // See section 4.2.1, set for partial automatic levelling
    CSL_BootCfgSetDDRConfig(23, ddr3config);

    /**************** 3.3 Partial Automatic Leveling ********************/
    ddr3config = 0x00;        CSL_BootCfgSetDDRConfig(2,  ddr3config);
    ddr3config = 0x00;        CSL_BootCfgSetDDRConfig(3,  ddr3config);
    ddr3config = 0x00;        CSL_BootCfgSetDDRConfig(4,  ddr3config);
    ddr3config = 0x00;        CSL_BootCfgSetDDRConfig(5,  ddr3config);
    ddr3config = 0x00000033;  CSL_BootCfgSetDDRConfig(6,  ddr3config);
    ddr3config = 0x0000003A;  CSL_BootCfgSetDDRConfig(7,  ddr3config);
    ddr3config = 0x0000002C;  CSL_BootCfgSetDDRConfig(8,  ddr3config);
    ddr3config = 0x0000002C;  CSL_BootCfgSetDDRConfig(9,  ddr3config);
    ddr3config = 0x0000001C;  CSL_BootCfgSetDDRConfig(10, ddr3config);

    ddr3config = 0x00;        CSL_BootCfgSetDDRConfig(14,  ddr3config);
    ddr3config = 0x00;        CSL_BootCfgSetDDRConfig(15,  ddr3config);
    ddr3config = 0x00;        CSL_BootCfgSetDDRConfig(16,  ddr3config);
    ddr3config = 0x00;        CSL_BootCfgSetDDRConfig(17,  ddr3config);
    ddr3config = 0x000000B7;  CSL_BootCfgSetDDRConfig(18,  ddr3config);
    ddr3config = 0x000000B1;  CSL_BootCfgSetDDRConfig(19,  ddr3config);
    ddr3config = 0x000000A4;  CSL_BootCfgSetDDRConfig(20,  ddr3config);
    ddr3config = 0x000000A4;  CSL_BootCfgSetDDRConfig(21,  ddr3config);
    ddr3config = 0x00000098;  CSL_BootCfgSetDDRConfig(22,  ddr3config);

    /*Do a PHY reset. Toggle DDR_PHY_CTRL_1 bit 15 0->1->0 */
    CSL_EMIF4F_GetPhyControl(&ddrPhyCtrl, &ddrPHYReadLatency);
    ddrPhyCtrl &= ~(0x00008000);
    CSL_EMIF4F_SetPhyControl(ddrPhyCtrl,  ddrPHYReadLatency);

    CSL_EMIF4F_GetPhyControl(&ddrPhyCtrl, &ddrPHYReadLatency);
    ddrPhyCtrl |= (0x00008000);
    CSL_EMIF4F_SetPhyControl(ddrPhyCtrl,  ddrPHYReadLatency);

    CSL_EMIF4F_GetPhyControl(&ddrPhyCtrl, &ddrPHYReadLatency);
    ddrPhyCtrl &= ~(0x00008000);
    CSL_EMIF4F_SetPhyControl(ddrPhyCtrl,  ddrPHYReadLatency);

    /***************** 3.4 Basic Controller and DRAM configuration ************/
    /* enable configuration */
    /*    hEmif->SDRAM_REF_CTRL    = 0x00006180; */
    CSL_EMIF4F_EnableInitRefresh();
    CSL_EMIF4F_SetRefreshRate(0x515C);

    sdram_tim1.t_wtr    = 4;
    sdram_tim1.t_rrd    = 1;
    sdram_tim1.t_rc     = 0x20;
    sdram_tim1.t_ras    = 0x17;
    sdram_tim1.t_wr     = 0x09;
    sdram_tim1.t_rcd    = 0x09;
    sdram_tim1.t_rp     = 0x09;
    CSL_EMIF4F_SetTiming1Config(&sdram_tim1);

    /*    hEmif->SDRAM_TIM_2   = 0x40877FEC; */
    sdram_tim2.t_cke    = 3;
    sdram_tim2.t_rtp    = 4;
    sdram_tim2.t_xsrd   = 0x1FF;
    sdram_tim2.t_xsnr   = 0x071;
    sdram_tim2.t_xp     = 3;
    sdram_tim2.t_odt    = 0;
    CSL_EMIF4F_SetTiming2Config (&sdram_tim2);

    /*    hEmif->SDRAM_TIM_3   = 0x55BF87FF; */
    sdram_tim3.t_rasMax     = 0xF;
    sdram_tim3.t_rfc        = 0x06A;
    sdram_tim3.t_tdqsckmax  = 0;
    sdram_tim3.zq_zqcs      = 0x3F;
    sdram_tim3.t_ckesr      = 4;
    sdram_tim3.t_csta       = 0x5;
    sdram_tim3.t_pdll_ul    = 0x5;
    CSL_EMIF4F_SetTiming3Config (&sdram_tim3);

    /*    hEmif->DDR_PHY_CTRL_1   = 0x0010010F; */
    ddrPHYReadLatency   = 0x0F;
    ddrPhyCtrl          = (0x0010010F);
    CSL_EMIF4F_SetPhyControl(ddrPhyCtrl,  ddrPHYReadLatency);

    /*    hEmif->ZQ_CONFIG        = 0x70074C1F; */
    zqcfg.zqRefInterval     = 0x4C1F;
    zqcfg.zqZQCLMult        = 3;
    zqcfg.zqZQCLInterval    = 1;
    zqcfg.zqSFEXITEn        = 1;
    zqcfg.zqDualCSEn        = 1;
    zqcfg.zqCS0En           = 1;
    zqcfg.zqCS1En           = 0;
    CSL_EMIF4F_SetOutputImpedanceConfig(&zqcfg);

    /*    hEmif->PWR_MGMT_CTRL    = 0x0; */
    pwrmgmtcfg.csTime           = 0;
    pwrmgmtcfg.srTime           = 0;
    pwrmgmtcfg.lpMode           = 0;
    pwrmgmtcfg.dpdEnable        = 0;
    pwrmgmtcfg.pdTime           = 0;
    CSL_EMIF4F_SetPowerMgmtConfig  (&pwrmgmtcfg);

    /* New value with DYN_ODT disabled and SDRAM_DRIVE = RZQ/7 */
    /*    hEmif->SDRAM_CONFIG     = 0x63077AB3; */
    CSL_EMIF4F_GetSDRAMConfig (&sdramcfg);
    sdramcfg.pageSize           = 2;
    sdramcfg.eBank              = 0;
    sdramcfg.iBank              = 3;
    sdramcfg.rowSize            = 5;
    sdramcfg.CASLatency         = 14;
    sdramcfg.narrowMode         = 1;
    sdramcfg.CASWriteLat        = 3;
    sdramcfg.SDRAMDrive         = 1;
    sdramcfg.disableDLL         = 0;
    sdramcfg.dynODT             = 2;
    sdramcfg.ddrDDQS            = 0;
    sdramcfg.ddrTerm            = 2;
    sdramcfg.iBankPos           = 0;
    sdramcfg.type               = 3;
    CSL_EMIF4F_SetSDRAMConfig (&sdramcfg);

    pll_delay(840336); /*Wait 600us for HW init to complete*/

    /* Refresh rate = (7.8*666MHz] */
    /*    hEmif->SDRAM_REF_CTRL   = 0x00001450;     */
    CSL_EMIF4F_SetRefreshRate(0x0000144F);

    /***************** 4.2.1 Partial automatic leveling ************/
    /*    hEmif->RDWR_LVL_RMP_CTRL      =  0x80000000; */
    CSL_EMIF4F_SetLevelingRampControlInfo(1, 0, 0, 0, 0);

    /* Trigger full leveling - This ignores read DQS leveling result and uses ratio forced value */
    /*    hEmif->RDWR_LVL_CTRL          =  0x80000000; */
    CSL_EMIF4F_SetLevelingControlInfo(1, 0, 0, 0, 0);

    /************************************************************
      Wait for min 1048576 DDR clock cycles for leveling to complete
      = 1048576 * 1.5ns = 1572864ns = 1.57ms.
      Actual time = ~10-15 ms
     **************************************************************/
    pll_delay(4201680); //Wait 3ms for leveling to complete

    return (status);
}
