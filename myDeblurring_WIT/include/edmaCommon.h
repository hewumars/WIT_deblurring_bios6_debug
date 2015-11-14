/*  ============================================================================
 *   Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005
 *
 *   Use of this software is controlled by the terms and conditions found in the
 *   license agreement under which this software has been supplied.
 *   ===========================================================================
 */

/** ============================================================================
 *
 *   @file  edmaCommon.h
 *
 *   @path  $(CSLPATH)\example\edma\edma_interrupt\inc
 *
 *   @desc  Header file for EDMA interrupt example
 *
 * =============================================================================
 */
 
#ifndef _EDMACOMMON_H_
#define _EDMACOMMON_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Macro for tcc handler */
#define InvokeHandle(num)       TccHandlerTable[num]()
typedef void (*EdmaTccHandler)(void);

/* Funtion which registers individual event handlers in a table */
void EdmaEventHook(Uint16 ,EdmaTccHandler);

/* Forward declaration */
void eventEdmaHandler();
void eventGlobalEdmaHandler();

#ifdef __cplusplus
}
#endif

#endif  /* _EDMACOMMON_H_ */
