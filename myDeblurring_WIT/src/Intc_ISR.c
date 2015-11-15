/*
 * Intc_ISR.c
 *
 *  Created on: 2013-3-11
 *      Author: Administrator
 */
#include <ti/csl/csl_edma3.h>
#include <ti/csl/src/intc/csl_intc.h>
#include <ti/csl/soc.h>
#include <ti/csl/cslr_device.h>

#include <ti/csl/csl_types.h>

#include "cdib.h"
#include "base_6657_include.h"


extern CSL_Edma3ChannelHandle   hChannel_img_rec;
extern CSL_Edma3ChannelHandle   hChannel_uart_trans;
extern CSL_Edma3ChannelHandle   hChannel_uart_rec;
extern CSL_Edma3ChannelHandle   hChannel_mcbsp_tx;
extern CSL_Edma3ChannelHandle   hChannel_mcbsp_rx;
extern CSL_Edma3ChannelHandle   hChannel_uart_send;

extern CSL_Edma3ChannelHandle   hChannel_DDR3_read;

extern CSL_Edma3ParamHandle     hParamBasicImgRec;
extern CSL_Edma3ParamHandle     hParamBasicUartRec;
extern CSL_Edma3ParamHandle     hParamBasicUartTrans;
extern CSL_Edma3ParamHandle     hParamBasicUartRec;
extern CSL_Edma3ParamHandle     hParamBasicMcbspTx;
extern CSL_Edma3ParamHandle     hParamBasicMcbspRx;
extern CSL_Edma3ParamHandle     hParamBasicUartSend;

extern CSL_Edma3ParamHandle     hParamBasicDDR3Read;

extern CSL_Edma3ParamSetup      myParamSetupImgRec;
extern CSL_Edma3ParamSetup      myParamSetupUartTrans;
extern CSL_Edma3ParamSetup      myParamSetupUartRec;
extern CSL_Edma3ParamSetup      myParamSetupMcbspTx;
extern CSL_Edma3ParamSetup      myParamSetupMcbspRx;
extern CSL_Edma3ParamSetup      myParamSetupUartSend;

extern CSL_Edma3ParamSetup      myParamSetupDDR3Read;


extern volatile INT32U 	imgCompleted; 					//!The image receive completed flag
extern volatile INT32U 	UPUARTCompleted;
extern volatile INT8U  	algrithmCompleted; 				//!The algrithm process completed flag
extern volatile INT32U 	last_x_disp,last_y_disp;
extern volatile Int32	pitching_angle,azimuth_angle;		//!俯仰角,方位角
extern volatile Int8 	pitching[3],azimuth[3],height[4];	//!俯仰角,方位角,高度字符串
extern volatile Int8  	gycount;						//!接收陀螺数据的计数器
extern volatile Int8   	CheckSum; 							//!校验和
extern volatile INT8U  	CheckSum1;							//!校验和

extern point0 			dbglorudep_v;
extern volatile Int8  	suanfamode; 						//!选用不同的算法模式，默认为桥梁2
extern volatile	int 	count; 							//!陀螺和算法处理数据的同步

extern INT32U UART_SRC[32];									//!DSP发送给上位机数据首地址

extern INT8U UART_DATA_IN_BYTE[32];							//!DSP发送给上位机数据

extern INT32U UART_UP_DATA[36];								//!陀螺仪数据

extern INT8U UART_UP_DATA_IN_BYTE[36];							//!缓存5帧陀螺仪数据

extern INT8U UART_UP_DATA_IN_BYTE_1[36];

extern INT8U UART_UP_DATA_IN_BYTE1[36];

extern INT8U UART_UP_DATA_IN_BYTE2[36];

extern INT8U UART_UP_DATA_IN_BYTE3[36];

extern INT8U UART_UP_DATA_IN_BYTE4[36];

extern INT8U UART_UP_DATA_IN_BYTE5[36];

extern INT32U 					UART_DONE_DATA[33];
extern INT8U 					UART_DONE1_DATA[32];		//!DSP接收上位机数据拷贝
/*
 * =============================================================================
 *   @func  ImgEDMARecCompleted_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      This is the interrupt service routine for edma receive a frame of image completed interrupt
 *
 *   @return
 *      NONE
 *
 * =============================================================================
*/
void ImgEDMARecCompleted_INT(void)
{
	//重新加载EDMA通道入口参数
    CSL_edma3ParamSetup(hParamBasicImgRec,&myParamSetupImgRec);
    imgCompleted = 1;
}

/*
 * =============================================================================
 *   @func  UartEDMASendUppcCompleted_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      This is the interrupt service routine for edma transmit a packet of UART data completed interrupt
 *		DSP给上位机传输数据完成中断
 *   @return
 *      NONE
 *
 * =============================================================================
*/
void UartEDMASendUppcCompleted_INT(void)
{
	//重新加载EDMA通道入口参数
    CSL_edma3ParamSetup(hParamBasicUartTrans,&myParamSetupUartTrans);
}

/*
 * =============================================================================
 *   @func  UartEDMARecGyroCompleted_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *		DSP接收陀螺数据完成中断，对陀螺仪数据更新
 *   @return
 *      NONE
 *
 * =============================================================================
*/
void UartEDMARecGyroCompleted_INT(void)
{
	int i;

	gycount++;

	//重新加载EDMA通道入口参数
	CSL_edma3ParamSetup(hParamBasicUartRec,&myParamSetupUartRec);

	if( gycount == 1 )
	{
  		for ( i = 0; i < 36; ++i )
			UART_UP_DATA_IN_BYTE_1[i] = (INT8U)UART_UP_DATA[i];

		if(count == 5)
		count=0;

		count++;

		if(count ==1)
		{
			for(i=0;i<36;i++)
				UART_UP_DATA_IN_BYTE1[i] = UART_UP_DATA_IN_BYTE_1[i];
		}

		if(count ==2)
		{
			for(i=0;i<36;i++)
				UART_UP_DATA_IN_BYTE2[i] = UART_UP_DATA_IN_BYTE_1[i];
		}

		if(count ==3)
		{
			for(i=0;i<36;i++)
				UART_UP_DATA_IN_BYTE3[i] = UART_UP_DATA_IN_BYTE_1[i];
		}

		if(count ==4)
		{
			for(i=0;i<36;i++)
				UART_UP_DATA_IN_BYTE4[i] = UART_UP_DATA_IN_BYTE_1[i];
		}

		if(count ==5)
		{
			for(i=0;i<36;i++)
				UART_UP_DATA_IN_BYTE5[i] = UART_UP_DATA_IN_BYTE_1[i];
		}
	}
}

/*
 * =============================================================================
 *   @func  UartEDMARecUppcData_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *		DSP接收上位机数据完成中断，重新加载不同算法和相应参数
 *   @return
 *      NONE
 *
 * =============================================================================
*/
void UartEDMARecUppcData_INT()
{
	int i;

	//重新加载EDMA通道入口参数
	CSL_edma3ParamSetup(hParamBasicUartSend,&myParamSetupUartSend);

	for ( i = 1; i < 33;++i)
		UART_DONE1_DATA[i-1] = UART_DONE_DATA[i];

	CheckSum1=0;

	for ( i = 2; i < 31;++i)
		CheckSum1 += UART_DONE1_DATA[i];

	if(UART_DONE1_DATA[0] ==0xAA&&\
		UART_DONE1_DATA[1] == 0x55&&\
		UART_DONE1_DATA[2] ==0x1C&&\
		UART_DONE1_DATA[3] == 0xA2&&\
		UART_DONE1_DATA[31] == CheckSum1)
	{
		if(UART_DONE1_DATA[4] ==0x11&&UART_DONE1_DATA[5]==0x11)
		{
		 	suanfamode =1;
//			GetAlgData(a1mbRef,a1dbRef,A1FlyParaArray);
		}

		if(UART_DONE1_DATA[4] ==0x22&&UART_DONE1_DATA[5]==0x22)
		{
     		         suanfamode =2;
//			GetAlgData(b1mbRef,b1dbRef,B1FlyParaArray);
		}

		if(UART_DONE1_DATA[4] ==0x33&&UART_DONE1_DATA[5]==0x33)
		{
			suanfamode = 3;
//			GetAlgData(b2mbRef,b2dbRef,B2FlyParaArray);
		}

		if(UART_DONE1_DATA[4] ==0x44&&UART_DONE1_DATA[5]==0x44)
		{
			suanfamode = 4;
//			GetAlgData(b3mbRef,b3dbRef,B3FlyParaArray);
		}
	}

}

/*
 * =============================================================================
 *   @func  DDR3EdmaReadCompleted_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *		读取DDR3数据完成中断，重新加载不同算法和相应参数
 *   @return
 *      NONE
 *
 * =============================================================================
*/
void DDR3EdmaReadCompleted_INT()
{
	//重新加载EDMA通道入口参数
	CSL_edma3ParamSetup(hParamBasicDDR3Read,&myParamSetupDDR3Read);
}


/*
 * =============================================================================
 *   @func  HandleGPIO7RecImg_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      DSP收图中断，并加载字幕
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void HandleGPIO7RecImg_INT ( void *arg  )
{
	if(algrithmCompleted)//算法处理完成，EDMA开始接收图像
	{
		//使能相应EDMA通道传输
	    CSL_edma3HwChannelControl(hChannel_img_rec,CSL_EDMA3_CMD_CHANNEL_SET,NULL);
	}
	  	gycount = 0;

	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((6 << 28) | (last_y_disp << 18) | (last_x_disp << 8));//目标框
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((6 << 28) | (last_y_disp << 18) | (last_x_disp << 8));

	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((4 << 28) | (27 << 18) | (azimuth_angle << 8));//方位游标
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((4 << 28) | (27 << 18) | (azimuth_angle << 8));
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((5 << 28) | (pitching_angle << 18) | (465 << 8));//俯仰游
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((5 << 28) | (pitching_angle << 18) | (465 << 8));

	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (195 << 8) | azimuth[0]);//方位角
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (195 << 8) | azimuth[0]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (210 << 8) | azimuth[1]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (210 << 8) | azimuth[1]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (225 << 8) | azimuth[2]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (225 << 8) | azimuth[2]);

	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (65 << 18) | (440 << 8) | pitching[0]);//俯仰角
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (65 << 18) | (440 << 8) | pitching[0]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (65 << 18) | (455 << 8) | pitching[1]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (65 << 18) | (455 << 8) | pitching[1]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (65 << 18) | (470 << 8) | pitching[2]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (65 << 18) | (470 << 8) | pitching[2]);

	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (440 << 8) | height[0]);//高度
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (440 << 8) | height[0]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (455 << 8) | height[1]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (455 << 8) | height[1]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (470 << 8) | height[2]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (470 << 8) | height[2]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (485 << 8) | height[3]);
	*((volatile unsigned int *)CAPTION_REG) = (unsigned int)((1 << 28) | (10 << 18) | (485 << 8) | height[3]);
}

/*
 * =============================================================================
 *   @func  HandleGPIO5RecGyro_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      DSP接收陀螺仪数据中断
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void HandleGPIO5RecGyro_INT ( void *arg )
{
	//使能相应EDMA通道传输
   	CSL_edma3HwChannelControl(hChannel_uart_rec,CSL_EDMA3_CMD_CHANNEL_SET,NULL);
}


/*
 * =============================================================================
 *   @func  HandleGPIO4RecUppc_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      DSP接收上位机数据中断
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void HandleGPIO4RecUppc_INT( void *arg )
{
	//使能相应EDMA通道传输
	CSL_edma3HwChannelControl( hChannel_uart_send,CSL_EDMA3_CMD_CHANNEL_SET,NULL);
}





