/** 
 *   @file  Interrupt.h
 *
 *   @brief  
 *      Header file with data structure and API declarations for Interrupt Configuration.
 * 
 *  \par
 *  ============================================================================
 *  @n   (C) Copyright 2010, Texas Instruments, Inc.
 *  @n   Use of this software is controlled by the terms and conditions found 
 *  @n   in the license agreement under which this software has been supplied.
 *  ===========================================================================
 *  \par
 */
#ifndef _INTERRUPT_H
#define _INTERRUPT_H

/* RTS include */
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif


typedef struct
{
	uint32_t inst;    // 0: CPINTC0, 1: CPINTC1, 2: CPINTC2
	uint32_t event;   // system events ID
	uint32_t channel; // channel
}cpintcCfg;

typedef struct
{ 
	uint32_t core;        // CoreID
	uint32_t event;       // INTC event
	CSL_IntcVectId vect;  // Core interrupt vector
	CSL_IntcEventHandler isr;
}interruptCfg;


#ifdef __cplusplus
}
#endif
						
#endif  /* __INTERRUPT_H__ */

