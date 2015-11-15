/*
 * main.c
 */

#include <ti/csl/csl_chip.h>
#include "cdatatype.h"
#include "base_6657_include.h"
#include "upp_6657.h"
#include "KeyStone_common.h"


#define GPIOBANKNUM     (0)

#define ROW      128								//!origin image's height
#define COL      128								//!origin image's width

volatile INT32U 	imgCompleted; 					//!The image receive completed flag
volatile INT8U  	algrithmCompleted; 				//!The algrithm process completed flag

//!input image data
#pragma	DATA_SECTION(qRel,"C1PL");
INT8U  qRel[COL*ROW];

INT32U                  		coreNum;

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
