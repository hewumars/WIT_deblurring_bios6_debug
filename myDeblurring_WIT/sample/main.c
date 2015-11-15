/*
 * main.c
 */
#include <ti/csl/csl_types.h>
#include <ti/csl/csl_edma3.h>
#include <ti/csl/csl_chip.h>
#include <ti/csl/src/intc/csl_intc.h>
#include <ti/csl/csl_cacheAux.h>
#include "cdib.h"
#include "base_6657_include.h"
#include "IPC.h"
#include "upp_6657.h"
#include "evmc665x_gpio.h"
#include "KeyStone_common.h"

#include <ti/csl/csl_gpio.h>
#include <ti/csl/csl_gpioAux.h>
#include <ti/csl/cslr_gpio.h>
#include <ti/csl/csl_cpIntc.h>
#include <ti/csl/csl_cpIntcAux.h>

#define GPIOBANKNUM     (0)

#define ROW      128								//!origin image's height
#define COL      128								//!origin image's width

//! Global varable for control
volatile INT32U imgCompleted = 0; 					//!The image receive completed flag
volatile INT32U UPUARTCompleted = 0;
volatile INT8U  algrithmCompleted = 1; 				//!The algrithm process completed flag
volatile INT32U last_x_disp,last_y_disp;
volatile Int32 	pitching_angle,azimuth_angle;		//!俯仰角,方位角
volatile Int8 	pitching[3],azimuth[3],height[4];	//!俯仰角,方位角,高度字符串
volatile Int8   gycount = 0;						//!接收陀螺数据的计数器
volatile Int8   CheckSum; 							//!校验和
volatile INT8U  CheckSum1;							//!校验和

//! Global varable for algrithm
point0 			dbglorudep_v;
volatile Int8  	suanfamode = 3;
volatile		int count = 0;

//!input image data
#pragma	DATA_SECTION(qRel,"C1PL");
INT8U  qRel[COL*ROW];

#pragma DATA_SECTION(UART_SRC,"C1PL");
INT32U UART_SRC[32];									//!DSP发送给上位机数据首地址
#pragma DATA_SECTION(UART_DATA_IN_BYTE,"C1PL");
INT8U UART_DATA_IN_BYTE[32];							//!DSP发送给上位机数据
#pragma DATA_SECTION(UART_UP_DATA,"C1PL");
INT32U UART_UP_DATA[36];								//!陀螺仪数据
#pragma DATA_SECTION(UART_UP_DATA_IN_BYTE,"C1PL");
INT8U UART_UP_DATA_IN_BYTE[36];							//!缓存5帧陀螺仪数据
#pragma DATA_SECTION(UART_UP_DATA_IN_BYTE_1,"C1PL");
INT8U UART_UP_DATA_IN_BYTE_1[36];
#pragma DATA_SECTION(UART_UP_DATA_IN_BYTE1,"C1PL");
INT8U UART_UP_DATA_IN_BYTE1[36];
#pragma DATA_SECTION(UART_UP_DATA_IN_BYTE2,"C1PL");
INT8U UART_UP_DATA_IN_BYTE2[36];
#pragma DATA_SECTION(UART_UP_DATA_IN_BYTE3,"C1PL");
INT8U UART_UP_DATA_IN_BYTE3[36];
#pragma DATA_SECTION(UART_UP_DATA_IN_BYTE4,"C1PL");
INT8U UART_UP_DATA_IN_BYTE4[36];
#pragma DATA_SECTION(UART_UP_DATA_IN_BYTE5,"C1PL");
INT8U UART_UP_DATA_IN_BYTE5[36];

#pragma DATA_SECTION(DDR3_DATA1,"C1PL");
INT32U DDR3_DATA1[200];

#pragma DATA_SECTION(L2_memory,"C1PL");
INT32U L2_memory[200];


#pragma DATA_SECTION(UART_DONE_DATA,"C1PL");
INT32U UART_DONE_DATA[33];								//!DSP接收上位机数据拷贝

#pragma DATA_SECTION(UART_DONE1_DATA,"C1PL");
INT8U UART_DONE1_DATA[32];								//!DSP接收上位机数据拷贝

extern volatile uint32_t ipcgr_value;

INT32U                  		coreNum;

extern CSL_Edma3ChannelHandle   hChannel_DDR3_read;
extern CSL_Edma3ChannelHandle   hChannel_uart_trans;

extern CSL_Edma3ChannelHandle   hChannel_UPP;

#define IPR_glb		((INT32U *)(0x02740000+0x00001068))
#define IPRH_glb	((INT32U *)(0x02740000+0x0000106C))

#define IPR_R0		((INT32U *)(0x02740000+0x00002068))
#define IPRH_R0		((INT32U *)(0x02740000+0x0000206C))

#define ESR_glb		((INT32U *)(0x02740000+0x00001010))
#define ESRH_glb	((INT32U *)(0x02740000+0x00001014))

#define ESR_R0		((INT32U *)(0x02740000+0x00002010))
#define ESRH_R0		((INT32U *)(0x02740000+0x00002014))

volatile uint32_t	IPCGR1_value_b[100];
volatile uint32_t	IPCAR1_value_b[100];

volatile uint32_t	IPCGR1_value_f[100];
volatile uint32_t	IPCAR1_value_f[100];

volatile uint32_t	ReceiveCore[25];

volatile uint32_t	InterruptCore[25];

volatile uint32_t	SetCore[25];

void main(void)
{
    /* Get the core number. */
	coreNum = CSL_chipReadReg (CSL_CHIP_DNUM);

	KeyStone_main_PLL_init (10, 1);
	if(coreNum == 0)
		EDMAInit();

	IntcInit();

	deblurring_WIT_process();

	while(1);
}
