/*
 * base_6657_include.h
 *
 *  Created on: 2013-3-11
 *      Author: Administrator
 */

#ifndef BASE_6657_INCLUDE_H_
#define BASE_6657_INCLUDE_H_

#define CSL_EDMA3                       (2)

#define MAX_CORE_NUM					(2)



//#define L2_memory	0x00840000


#define CAPTION_REG 		0x70200000
#define IMG_SOURCE_FIFO 	0x70180000      //EMIF16 CE0数据空间，支持NAND、NOR或SRAM存储器
#define UART_FIFO			0x70000000
#define UART1_FIFO			0x70080000

#define UART2_FIFO 			0x70090000


void IntcInit();

void EDMAInit();

void gpioInit(void);

CSL_Status DDR3Init();

void upp_intc_setup_my(int (*isr)(void *));

#endif /* BASE_6657_INCLUDE_H_ */
