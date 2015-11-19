/*  ============================================================================
 *   Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005
 *
 *   Use of this software is controlled by the terms and conditions found in the
 *   license agreement under which this software has been supplied.
 *   ===========================================================================
 */

/** ============================================================================
 *
 *   @file  edmaIntDispatcher.c
 *
 *   @path  $(CSLPATH)\example\edma\edma_interrupt\src
 *
 *   @desc This is utility function used by edma as Interrupt dispather 
 *
 * ============================================================================
 */

#include <ti/csl/csl_edma3.h>

#include "edmacommon.h"

/* Global Edma Tcc handler table */
#pragma DATA_SECTION(TccHandlerTable,".testMem");
EdmaTccHandler TccHandlerTable[64];

/*
 * =============================================================================
 *   @func  eventEdmaHandler
 *  
 *   @arg
 *      handle        - Edma module handle
 *
 *   @desc
 *      This is the interrupt handler routine for edma interrupt
 *      就是EDMA收图事件的中断服务程序ISR
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void eventEdmaHandler (
    void        *handle
)
{
    CSL_Edma3Handle     hModule = (CSL_Edma3Handle)handle;
    CSL_BitMask32       maskVal;
    CSL_Edma3CmdIntr    regionIntr;
    Uint32              tcc;
    Uint32              intr;
    Uint32              intrh;
    
    /* 读中断挂起寄存器IPR（产生中断时置1） regionIntr结构体用来接收状态*/
    regionIntr.region = CSL_EDMA3_REGION_1;
    CSL_edma3GetHwStatus(hModule,CSL_EDMA3_QUERY_INTRPEND, &regionIntr);
    //regionIntr.intr || regionIntr.intrh任何1bit置1，代表有中断
    while (regionIntr.intr || regionIntr.intrh) {
        intr    = regionIntr.intr;
        intrh = regionIntr.intrh;
        tcc   = 0;
        
        while (intr) {
            maskVal = 1 << tcc;
            if (intr & maskVal) {
            	//查找传输完成代码TCC（TCC与IPR相应位是直接映射的），判断是哪个事件并执行相应钩子函数
            	//5个钩子函数ImgEDMARecCompleted_INT、UartEDMARecGyroCompleted_INT、UartEDMASendUppcCompleted_INT
            	//UartEDMARecUppcData_INT、DDR3EdmaReadCompleted_INT
                InvokeHandle(tcc);
                intr &= ~maskVal;
            }
            tcc++;      
        }       
        
        tcc = 0;
        while (intrh) {
            maskVal = 1 << tcc;
            if (intrh & maskVal) {
                InvokeHandle((tcc+32));
                intrh &= ~maskVal;
            }       
            tcc++;
        }
        
        CSL_edma3HwControl(hModule,CSL_EDMA3_CMD_INTRPEND_CLEAR,&regionIntr);       
        CSL_edma3GetHwStatus(hModule,CSL_EDMA3_QUERY_INTRPEND,&regionIntr);         
    }           
}

/*
 * =============================================================================
 *   @func  EdmaEventHook
 *  
 *   @arg
 *      tcc        - Tcc number
 *      fxn        - Pointer to function which points to edma isr
 *
 *   @desc
 *      This is the interrupt handler routine for edma interrupt
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void EdmaEventHook (
    Uint16            tcc, 
    EdmaTccHandler    fxn
)
{
    TccHandlerTable[tcc] = (fxn);
}
