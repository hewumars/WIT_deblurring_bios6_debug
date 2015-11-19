/*
 * main.c
 */
#include <Init.h>
#include <ti/csl/csl_chip.h>
#include "cdatatype.h"
#include "upp_6657.h"
#include "KeyStone_common.h"
#include "EDMA3_LLD_Init.h"
#define GPIOBANKNUM     (0)

#define ROW      128								//!origin image's height
#define COL      128								//!origin image's width

volatile INT32U 	imgCompleted; 					//!The image receive completed flag
volatile INT8U  	algrithmCompleted; 				//!The algrithm process completed flag

//!input image data
#pragma	DATA_SECTION(qRel,"C1PL");
INT8U  qRel[COL*ROW];

INT32U                  		coreNum;

Void taskFxn(UArg a0, UArg a1)
{
    System_printf("enter taskFxn()\n");

    EDMAInit();
	IntcInit();
	//wh_edma3_lld_init(128u, 128u, 1u,EDMA3_DRV_SYNC_A);
	echo();
	deblurring_WIT_process();
    Task_sleep(10);

    System_printf("exit taskFxn()\n");
}
void main(void)
{
	    Task_Handle task;
	    Task_Params taskParams;
	    Error_Block eb;
	    /* Get the core number. */
		coreNum = CSL_chipReadReg (CSL_CHIP_DNUM);

		System_printf("enter main()\n");
	    Error_init(&eb);

		//KeyStone_main_PLL_init (10, 1);

		if(coreNum == 0){
		    task = Task_create(taskFxn, NULL, &eb);
		    if (task == NULL) {
		    	System_printf("taskFxn handler = %x \n\t",task);
		        System_printf("taskFxn() failed!\n");
		        BIOS_exit(0);
		    }
		}



	    BIOS_start();     /* enable interrupts and start SYS/BIOS */





	while(1);
}
