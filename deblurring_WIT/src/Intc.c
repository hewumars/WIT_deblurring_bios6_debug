/*
 * Intc.c
 *
 *  Created on: 2014-1-3
 *      Author: Administrator
 */

#include <csl_intc.h>

#include <csl_cpIntc.h>
#include <csl_cpIntcAux.h>

#include <ti\csl\csl_edma3.h>
#include "EDMA3.h"
#include "edmacommon.h"
#include "preDefine.h"
#include "regs.h"
#include "base_6657.h"

#define	IPRH	(0x02740000+0x106C)
#define	ICRH	(0x02740000+0x1074)

extern unsigned short	RecFlag;
extern unsigned short	SendFlag;

extern unsigned short	McBSP_src[BUFFER_SIZE];
extern unsigned short	McBSP_dst[BUFFER_SIZE];

//!Intc declaration
CSL_IntcContext                 intcContext_McBSP;
CSL_IntcGlobalEnableState       intc_state_McBSP;
CSL_IntcEventHandlerRecord      EventHandler_McBSP[30];
CSL_IntcParam                   vectId_McBSP;


CSL_IntcEventHandlerRecord      EventRecord_McBSP;		//!handle for edma completed
CSL_IntcObj                     intcObjEdma_McBSP;
CSL_IntcHandle                  hIntcEdma_McBSP;

CSL_CPINTC_Handle 		hnd_EDMA_McBSP;

extern const unsigned char McBSPx_EDMA_Ch[2];	//McBSPĬ��ͨ��
extern const unsigned char McBSPr_EDMA_Ch[2];


unsigned char		McBSP_TO_DSP2=0;


extern CSL_Edma3ParamHandle     hParamBasicMcBSP0Rec;
extern CSL_Edma3ParamHandle     hParamBasicMcBSP0Trans;

extern CSL_Edma3ParamSetup      myParamSetupMcBSP0Trans;
extern CSL_Edma3ParamSetup      myParamSetupMcBSP0Rec;

extern CSL_Edma3Handle          hModule_EDMA_McBSP;



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


void McBSP_trans_isr()
{
	//���¼���EDMAͨ����ڲ���
    CSL_edma3ParamSetup(hParamBasicMcBSP0Trans,&myParamSetupMcBSP0Trans);
}

void McBSP_intc_setup()
{
	intcContext_McBSP.eventhandlerRecord = EventHandler_McBSP;		//�¼������¼ָ��
	intcContext_McBSP.numEvtEntries = 50;						//�¼������Ŀ


	/* open CPINTC0 to map the EDMA completetion ISR event to the host interrupt */
    hnd_EDMA_McBSP = CSL_CPINTC_open(0);//???????���ģ�
	if (hnd_EDMA_McBSP == 0)
	{
		printf ("Error: Unable to open CPINTC-1\n");
		return;
	}
	//��Ҫ����Ӧ���޸�EDMA�������¼���ż�CPINTC���channel��
	CSL_CPINTC_mapSystemIntrToChannel (hnd_EDMA_McBSP, CSL_INTC0_CPU_3_2_TPCCINT1, 10);
	CSL_CPINTC_enableSysInterrupt (hnd_EDMA_McBSP, CSL_INTC0_CPU_3_2_TPCCINT1);
	CSL_CPINTC_enableHostInterrupt (hnd_EDMA_McBSP, 10);
	CSL_CPINTC_enableAllHostInterrupt(hnd_EDMA_McBSP);

	/***************** interrupt configration for EDMA completed ***************/
	/* Opening a intc handle for edma event */
	vectId_McBSP = CSL_INTC_VECTID_11;
	//���ж��������,�����¼����ж�֮���ӳ���ϵ
	hIntcEdma_McBSP = CSL_intcOpen (&intcObjEdma_McBSP, CSL_GEM_INTC0_OUT_8_PLUS_20_MUL_N, \
							  &vectId_McBSP , NULL);

	/* Association of an EDMA event handler with the INTC routine */
	EventRecord_McBSP.handler = &eventEdmaHandler;
	EventRecord_McBSP.arg = (void*)(hModule_EDMA_McBSP);
	CSL_intcPlugEventHandler(hIntcEdma_McBSP,&EventRecord_McBSP);		//�����¼��;����ӳ���ϵ

	CSL_intcHwControl(hIntcEdma_McBSP,CSL_INTC_CMD_EVTCLEAR,NULL);
	/* Enabling event edma ʹ��EDMA��ͼ����ж� */
	CSL_intcHwControl(hIntcEdma_McBSP,CSL_INTC_CMD_EVTENABLE,NULL);

	/* Hook up the EDMA event with an completion code function handler */
	EdmaEventHook(CSL_EDMA3CC2_REVT0_MCBSP_A, EDMA_isr);
	EdmaEventHook(CSL_EDMA3CC2_XEVT0_MCBSP_A, EDMA_isr);
}

void McBSP_rec_isr()
{
	//���¼���EDMAͨ����ڲ���
    CSL_edma3ParamSetup(hParamBasicMcBSP0Rec,&myParamSetupMcBSP0Rec);
}



