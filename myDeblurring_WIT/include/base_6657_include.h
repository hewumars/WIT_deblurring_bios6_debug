/*
 * base_6657_include.h
 *
 *  Created on: 2015-11-15
 *  Author: HeWu
 */

#ifndef BASE_6657_INCLUDE_H_
#define BASE_6657_INCLUDE_H_

#define CSL_EDMA3                       (2)

#define IMG_SOURCE_FIFO 	0x70180000      //EMIF16 CE0数据空间，支持NAND、NOR或SRAM存储器

void IntcInit();

void EDMAInit();

void upp_intc_setup_my(int (*isr)(void *));

#endif /* BASE_6657_INCLUDE_H_ */
