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
 *      ����EDMA��ͼ�¼����жϷ������ISR
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
    
    /* ���жϹ���Ĵ���IPR�������ж�ʱ��1�� regionIntr�ṹ����������״̬*/
    regionIntr.region = CSL_EDMA3_REGION_1;
    CSL_edma3GetHwStatus(hModule,CSL_EDMA3_QUERY_INTRPEND, &regionIntr);
    //regionIntr.intr || regionIntr.intrh�κ�1bit��1���������ж�
    while (regionIntr.intr || regionIntr.intrh) {
        intr    = regionIntr.intr;
        intrh = regionIntr.intrh;
        tcc   = 0;
        
        while (intr) {
            maskVal = 1 << tcc;
            if (intr & maskVal) {
            	//���Ҵ�����ɴ���TCC��TCC��IPR��Ӧλ��ֱ��ӳ��ģ����ж����ĸ��¼���ִ����Ӧ���Ӻ���
            	//5�����Ӻ���ImgEDMARecCompleted_INT��UartEDMARecGyroCompleted_INT��UartEDMASendUppcCompleted_INT
            	//UartEDMARecUppcData_INT��DDR3EdmaReadCompleted_INT
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
