/*
 * base_6657_include.h
 *
 *  Created on: 2015-11-15
 *  Author: HeWu
 */

#ifndef BASE_6657_INCLUDE_H_
#define BASE_6657_INCLUDE_H_
#include "cdatatype.h"

#include <ti/csl/csl_cpIntc.h>
#include <ti/csl/csl_cpIntcAux.h>
#include <ti/csl/src/intc/csl_intc.h>
#include "Intc_ISR.h"

#include <ti/csl/csl_edma3.h>
#include "EDMA3.h"//EDMA3Í¨µÀºÅ
#include "edmaCommon.h"

#include "upp_6657.h"
#include "upp_common.h"



#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>

#include <ti/sysbios/knl/Task.h>

extern Void taskFxn(UArg a0, UArg a1);

void IntcInit();

void EDMAInit();

void upp_intc_setup_my(int (*isr)(void *));

#endif /* BASE_6657_INCLUDE_H_ */
