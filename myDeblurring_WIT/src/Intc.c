/*
 * Intc.c
 *
 *  Created on: 2014-1-3
 *      Author: Administrator
 */

#include <ti/csl/src/intc/csl_intc.h>

#include <ti/csl/csl_cpIntc.h>
#include <ti/csl/csl_cpIntcAux.h>


#include "EDMA3.h"
#include "edmacommon.h"

#include "regs.h"


#define	IPRH	(0x02740000+0x106C)   //中断挂起
#define	ICRH	(0x02740000+0x1074)   //中断清零


extern unsigned short	SendFlag;



void EDMA_isr()
{
	CSL_CPINTC_Handle   hnd;
	Uint32  rawStatus=0;

    if(*(Uint32 *)IPRH >> 5 & 1)
    {
    	REG_WRITE(ICRH,1<<5);
    	SendFlag = 1;
    }

	hnd = CSL_CPINTC_open(0);
	CSL_CPINTC_getRawInterruptStatus(hnd, 0, &rawStatus);
	CSL_CPINTC_clearSysInterrupt(hnd,(CSL_CPINTCSystemInterrupt)  rawStatus);
	*((volatile unsigned int *)(0x02600280)) = rawStatus;
	CSL_CPINTC_getRawInterruptStatus(hnd, 1, &rawStatus);
	CSL_CPINTC_clearSysInterrupt(hnd,(CSL_CPINTCSystemInterrupt)  rawStatus);
	*((volatile unsigned int *)(0x02600284)) = rawStatus;
}


