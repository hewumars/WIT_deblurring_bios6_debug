/*
 * base_6657.h
 *
 *  Created on: 2014-1-11
 *      Author: Administrator
 */

#ifndef BASE_6657_H_
#define BASE_6657_H_

typedef void (*EdmaTccHandler)(void);

void EDMA_isr();

void eventEdmaHandler (void *handle);

void mcbsp_init(unsigned int ch, unsigned int ClkGdv, int size);

void EDMAInit_McBSP();

void McBSP_intc_setup();

#endif /* BASE_6657_H_ */
