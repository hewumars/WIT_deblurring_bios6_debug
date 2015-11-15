/*
 * Init.c
 *
 *  Created on: 2013-3-8
 *      Author: Administrator
 */

#include <stdio.h>
#include <math.h>
#include <ti/csl/csl_types.h>
#include <ti/csl/csl_edma3.h>
#include <ti/csl/src/intc/csl_intc.h>
#include <ti/csl/soc.h>
#include <ti/csl/csl_gpio.h>
#include <ti/csl/csl_gpioAux.h>
#include <ti/csl/cslr_gpio.h>
#include <ti/csl/cslr_device.h>
#include <ti/csl/csl_chipAux.h>
#include <ti/csl/csl_emif4f.h>
#include <ti/csl/csl_emif4fAux.h>
#include <ti/csl/csl_bootcfgAux.h>
#include <ti/csl/csl_cpIntc.h>
#include <ti/csl/csl_cpIntcAux.h>
#include "EDMA3.h"
#include "edmaCommon.h"

#include "cdatatype.h"
#include "Intc_ISR.h"
#include "base_6657_include.h"
#include "upp_6657.h"
#include "upp_common.h"


#define ROW      128		//!origin image's height
#define COL      128		//!origin image's width



/**********************************************************************************/

extern INT32U                 				 coreNum;
extern INT8U  								qRel[ROW*COL];

//!Intc declaration
CSL_IntcContext                 			intcContext_uPP;
CSL_IntcGlobalEnableState       		intc_state_uPP;
CSL_IntcEventHandlerRecord      	EventHandler_uPP[30];
CSL_IntcParam                   			vectId_uPP;


CSL_IntcObj     								intcObjUpp;
CSL_IntcHandle 							hIntcUpp;

CSL_IntcEventHandlerRecord 		gpioHandler;		//!handle for gpio interrupt
CSL_IntcObj                     				intcObjEdma_uPP;
CSL_IntcHandle                 			 hIntcEdma_uPP;

CSL_IntcEventHandlerRecord      EventRecord_uPP;	//!handle for edma completed


CSL_Edma3Handle					  hModule_uPP;		//!Edma declaration
CSL_Edma3Obj							  edmaObj_uPP;

CSL_Edma3ChannelHandle		  hChannel_img_rec;

CSL_Edma3ParamHandle     		  hParamBasicImgRec;

CSL_Edma3ParamSetup      		  myParamSetupImgRec;

CSL_Edma3ChannelObj      		  ChObjImgRec;

/*******************************************/
CSL_CPINTC_RegsOvly   			  glbCpintcHnd[3];
CSL_CPINTC_Handle 			      hnd_EDMA_uPP;

/********************* UPP **********************/
CSL_CPINTC_Handle 				  hnd_UPP=0;


/*****************************************************************************************************/

//����uPP���ж�
void upp_intc_setup_my(int (*isr)(void *))
{
	//��ʼ����ʼ
	intcContext_uPP.eventhandlerRecord = EventHandler_uPP;		//�¼������¼ָ��
	intcContext_uPP.numEvtEntries = 50;						//�¼������Ŀ

    CSL_intcInit(&intcContext_uPP);							//��ʼ���ж������Ķ������������״̬CSL_SOK

    // Enable NMIsʹ�ܷǿ������ж�
    CSL_intcGlobalNmiEnable();

    //Enable global interruptsʹ��ȫ���ж�
    CSL_intcGlobalEnable(&intc_state_uPP);

	/***************** interrupt configration for UPP�ӿ�  **************************/
	/* open CPINTC0 to map the UPP completetion ISR event to the host interrupt */
	hnd_UPP = CSL_CPINTC_open(0);
	if (hnd_UPP == 0)
	{
		printf ("Error: Unable to open CPINTC-1\n");
		return;
	}
	glbCpintcHnd[2] = (CSL_CPINTC_RegsOvly)hnd_UPP;
	//��Ҫ����Ӧ���޸�UPP�������¼���ż�CPINTC���channel��
	CSL_CPINTC_mapSystemIntrToChannel (hnd_UPP, CSL_INTC0_RPINT, 9);
	CSL_CPINTC_enableSysInterrupt (hnd_UPP, CSL_INTC0_RPINT);
	CSL_CPINTC_enableHostInterrupt (hnd_UPP, 9);
	CSL_CPINTC_enableAllHostInterrupt(hnd_UPP);

	vectId_uPP = CSL_INTC_VECTID_4;

	hIntcUpp= CSL_intcOpen (&intcObjUpp, CSL_GEM_INTC0_OUT_9_PLUS_20_MUL_N, &vectId_uPP , NULL);

	gpioHandler.handler = (CSL_IntcEventHandler)&upp_isr;//�¼����ָ��
	gpioHandler.arg = 0;										//���ݸ������ľ��ָ��
	CSL_intcPlugEventHandler(hIntcUpp, &gpioHandler);					//�����¼��;����ӳ���ϵ

	CSL_intcHwControl(hIntcUpp,CSL_INTC_CMD_EVTCLEAR,NULL);

	CSL_intcHwControl(hIntcUpp, CSL_INTC_CMD_EVTENABLE, NULL);

	/***************** interrupt configration for UPP�ӿ�  **************************/
}

/*
 * =============================================================================
 *   @func  IntcInit
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      ��ʼ���ж�
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void IntcInit()
{
	/*��ʼ����ʼ*/
	intcContext_uPP.eventhandlerRecord = EventHandler_uPP;		//�¼������¼ָ��
	intcContext_uPP.numEvtEntries = 50;						//�¼������Ŀ

	/* ��ʼ������,ǰ��ĳ�ʼ������ֻ��Ҫһ��,�����Ҫ�����жϴ���,ֱ������ж�ʸ��
	���¼��ż���,�����ٴγ�ʼ��,����Ḳ�ǵ�ǰ�������(�����¼������жϷ�������ӳ����)*/

   	/*��ʼ���ж������Ķ������������״̬CSL_SOK*/
	 CSL_intcInit(&intcContext_uPP);
    /*ʹ�ܷǿ������ж�*/
    CSL_intcGlobalNmiEnable();
    /*ʹ��ȫ���ж�*/
    CSL_intcGlobalEnable(&intc_state_uPP);

	if(coreNum == 0)
	{

		/************************ 1.�ж�����-----��ͼ **************************/
        ///////////////////////////��һ����EDMACC_GINT�¼���Ϊsystem interruptͨ��CPINTCӳ�䵽host interrupt////////////
		/* open CPINTC0 to map the EDMA completetion ISR event to the host interrupt */
		hnd_EDMA_uPP = CSL_CPINTC_open(0);
		if (hnd_EDMA_uPP == 0)
		{
			printf ("Error: Unable to open CPINTC-1\n");
			return;
		}
		glbCpintcHnd[1] = (CSL_CPINTC_RegsOvly)hnd_EDMA_uPP;
		//��Ҫ����Ӧ���޸�EDMA�������¼���ż�CPINTC���channel��
		//tms320c6657.pdf��"EDMA�������¼����"��Ӧ"CIC0 Event Inputs��22��"��System Event Mapping��CIC0_OUT(8+20*n)��"8"Ϊhost interrupt
		CSL_CPINTC_mapSystemIntrToChannel (hnd_EDMA_uPP, CSL_INTC0_CPU_3_2_EDMACC_GINT, 8);//system interrupt maping  to host interrupt
		CSL_CPINTC_enableSysInterrupt (hnd_EDMA_uPP, CSL_INTC0_CPU_3_2_EDMACC_GINT);
		CSL_CPINTC_enableHostInterrupt (hnd_EDMA_uPP, 8);
		CSL_CPINTC_enableAllHostInterrupt(hnd_EDMA_uPP);

		/***************** interrupt configration for EDMA completed ***************/
		//////////////////////////////////////�ڶ�����host interrupt��ת��ΪEvent ID�ţ������ж�������/////////////////////////
		/* Opening a intc handle for edma event */
		vectId_uPP = CSL_INTC_VECTID_7;
		//���ж��������,�����¼����ж�֮���ӳ���ϵ
		//CSL_GEM_INTC0_OUT_8_PLUS_20_MUL_N  ��CIC0_OUT(8+20*n)��8+20*nΪEvent ID
		hIntcEdma_uPP = CSL_intcOpen (&intcObjEdma_uPP, CSL_GEM_INTC0_OUT_8_PLUS_20_MUL_N, \
								  &vectId_uPP , NULL);

		/* Association of an EDMA event handler with the INTC routine ����EDMA�¼������INTC����*/
		EventRecord_uPP.handler = &eventEdmaHandler;//EDMA�¼����ָ��
		EventRecord_uPP.arg = (void*)(hModule_uPP);//hModule_uPP��EMDAͨ�����
		CSL_intcPlugEventHandler(hIntcEdma_uPP,&EventRecord_uPP);		//�����¼��;����ӳ���ϵ

		CSL_intcHwControl(hIntcEdma_uPP,CSL_INTC_CMD_EVTCLEAR,NULL);
		/* Enabling event edma ʹ��EDMA��ͼ����ж� */
		CSL_intcHwControl(hIntcEdma_uPP,CSL_INTC_CMD_EVTENABLE,NULL);

		/* Hook up the EDMA event with an completion code function handler */
		EdmaEventHook(CSL_EDMA3_CHA_GPINT0, ImgEDMARecCompleted_INT);//��ͼ����ж�
		/***************** interrupt configration for EDMA completed ***************/

		/*****************2.�ж�����-----UPP�ӿ�  **************************/
		////////////////////////////////////////////////������FPGAͨ�ţ�����ͼ��//////////////////////////////////////////////////////////////////
		/* open CPINTC0 to map the UPP completetion ISR event to the host interrupt */
		hnd_UPP = CSL_CPINTC_open(0);
		if (hnd_UPP == 0)
		{
			printf ("Error: Unable to open CPINTC-1\n");
			return;
		}
		glbCpintcHnd[2] = (CSL_CPINTC_RegsOvly)hnd_UPP;
		//��Ҫ����Ӧ���޸�UPP�������¼���ż�CPINTC���channel��
		//CSL_INTC0_RPINTΪupp��system interrupt ��9ΪCIC0_OUT(9+20*n)�е�host interrupt
		CSL_CPINTC_mapSystemIntrToChannel (hnd_UPP, CSL_INTC0_RPINT, 9);
		CSL_CPINTC_enableSysInterrupt (hnd_UPP, CSL_INTC0_RPINT);
		CSL_CPINTC_enableHostInterrupt (hnd_UPP, 9);
		CSL_CPINTC_enableAllHostInterrupt(hnd_UPP);

		vectId_uPP = CSL_INTC_VECTID_4;
        //���ж���������host interruptת��Ϊevent id֮�����INTC��vectId_uPP
		hIntcUpp= CSL_intcOpen (&intcObjUpp, CSL_GEM_INTC0_OUT_9_PLUS_20_MUL_N, &vectId_uPP , NULL);

		gpioHandler.handler = (CSL_IntcEventHandler)&upp_isr;//�¼����ָ��
		gpioHandler.arg = 0;										//���ݸ������ľ��ָ��
		CSL_intcPlugEventHandler(hIntcUpp, &gpioHandler);					//�����¼��;����ӳ���ϵ

		CSL_intcHwControl(hIntcUpp,CSL_INTC_CMD_EVTCLEAR,NULL);

		CSL_intcHwControl(hIntcUpp, CSL_INTC_CMD_EVTENABLE, NULL);

		/***************** interrupt configration for UPP�ӿ�  **************************/
	}
}

/*
 * =============================================================================
 *   @func  EDMAInit
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      ��ʼ��EDMA
 *
 *   @return
 *      NONE
 *      ʹ��---Ӱ������1
 *      ͼ�����--ͨ��6��CSL_EDMA3_CHA_GPINT0��--Դ��ַ��0x70180000��EMIF16 CE0��,Ŀ���ַ��C1PL��qRel[COL*ROW]�����׵�ַ
 * =============================================================================
 */
void EDMAInit()
{
    CSL_Edma3ChannelAttr     chParam;//���ڴ�һ��EDMAͨ���Ĳ����ṹ��
    CSL_Edma3Context         edmaContext;
    CSL_Edma3QueryInfo       info; //EDMA������Ϣ
    CSL_Edma3CmdIntr         regionIntr;//EDMA����/��ѯ����ṹ��
                                                           //for issuing commands for Interrupt related APIs An object of this type is allocated by the user and its address is passed to the Control API
    CSL_Edma3CmdDrae         regionAccess;//EDMA����/��ѯ����ṹ�����ڲ�ѯQDMA�������ʹ������
    CSL_Status               status;

    /* EDMAģ���ʼ�� */
    CSL_edma3Init(&edmaContext); 			//��ʼ��edma�����Ķ������������״̬CSL_SOK

    /* EDMAģ�鼶����, �õ�EDMA�Ĵ�������׵�ַ,����edmaObj_uPP->regs,��󷵻ص�ָ��hModule_uPPʵ����ָ��edmaObj*/
    hModule_uPP = CSL_edma3Open(&edmaObj_uPP,CSL_EDMA3,NULL,&status);

    /* ��ѯģ����Ϣ,�õ�EDMA��������״̬,ʵ���Ͼ��ǰ�����ʶ��Ĵ�����PID����EDMA3CC���üĴ�����CCCFG����ֵ������info*/
    CSL_edma3GetHwStatus(hModule_uPP,CSL_EDMA3_QUERY_INFO, &info);

    if(coreNum == 0)
    {
		/* Setup the DRAE masks
		 * DRAE enable(Bits 0-15) for the shadow region 1.
		 */
		regionAccess.region = CSL_EDMA3_REGION_1 ;
		regionAccess.drae =   0xFFFFFFFF ;
		regionAccess.draeh =  0xFFFFFFFF ;
		/*ʹ��region����ļĴ�������,ʵ���Ͼ��ǰ�regionAccess��drae��draehд��*/
		CSL_edma3HwControl(hModule_uPP,CSL_EDMA3_CMD_DMAREGION_ENABLE,&regionAccess);

		/********************************Setup for Image receive******************************/
		//����ͼ������
		/* Channel open */
		chParam.regionNum = CSL_EDMA3_REGION_1;					//edma�����Ϊ1
		chParam.chaNum = CSL_EDMA3_CHA_GPINT0;					//edmaͨ����Ϊ6,GPIO�ж���Ϊ�¼�
		/*��EDMA��ͨ��,ʵ���Ͼ��ǰ�chParam��regionNum��chaNum����ChObjImgRec��region��chaNum,
		���Ұ�EDMA�Ĵ�������׵�ַ,����ChObjImgRec->regs,��󷵻ص�ָ��hChannel_img_recָ��ChObjImgRec*/
		hChannel_img_rec= CSL_edma3ChannelOpen(&ChObjImgRec, CSL_EDMA3, &chParam, &status);

		/* ������Ӧͨ���Ĳ����Ĵ����ĵ�ַ��hParamBasicImgRec*/
		hParamBasicImgRec= CSL_edma3GetParamHandle(hChannel_img_rec,CSL_EDMA3_CHA_GPINT0,&status);

		/* Edma�����������Edma parameter entry Setup */
		myParamSetupImgRec.option = CSL_EDMA3_OPT_MAKE(CSL_EDMA3_ITCCH_DIS, \
													   CSL_EDMA3_TCCH_DIS, \
													   CSL_EDMA3_ITCINT_DIS, \
													   CSL_EDMA3_TCINT_EN,\
													   CSL_EDMA3_CHA_GPINT0,\
													   CSL_EDMA3_TCC_NORMAL,\
													   CSL_EDMA3_FIFOWIDTH_NONE, \
													   CSL_EDMA3_STATIC_DIS, \
													   CSL_EDMA3_SYNC_A, \
													   CSL_EDMA3_ADDRMODE_INCR, \
													   CSL_EDMA3_ADDRMODE_INCR);//��opt��û����ͨ��������CSL_EDMA3_CHA_GPINT0
		myParamSetupImgRec.srcAddr = (Uint32)IMG_SOURCE_FIFO;		//ͼ������Դ��ַ
		myParamSetupImgRec.aCntbCnt = CSL_EDMA3_CNT_MAKE(63001,1);	//ʹ��������ַģʽ����251*251=63001�ֽ�
		myParamSetupImgRec.dstAddr = (Uint32)qRel;					//ʵʱͼ���ַ    "C1PL"�����ģ�
		myParamSetupImgRec.srcDstBidx = CSL_EDMA3_BIDX_MAKE(0,0);
		myParamSetupImgRec.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL,1);
		myParamSetupImgRec.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
		myParamSetupImgRec.cCnt = 1;

		/*ͨ������,ʵ�����ǽ�����ʹ�õ�ͨ����(�ܹ�64��)��ʹ�õĲ�����(�ܹ�256��)����ӳ���ϵ
		(ͨ������DCHMAP�Ĵ���)*/
		CSL_edma3HwChannelSetupParam (hChannel_img_rec, CSL_EDMA3_CHA_GPINT0);

		/*ѡ���¼������ȼ�����*/
		CSL_edma3HwChannelSetupQue(hChannel_img_rec, CSL_EDMA3_QUE_1);

		/*ͨ��ָ��CSL_Edma3ParamSetup��ָ������EDMA����*/
		CSL_edma3ParamSetup(hParamBasicImgRec,&myParamSetupImgRec);

		/* Enable interrupts ,ʹ����Ӧͨ���Ĵ�������ж�,��������4��ͨ��,����Ҫʹ��,
		�������˴���ͨ��,������Ӧ��λҲҪ׷����1*/
		regionIntr.region = CSL_EDMA3_REGION_1 ;
		//����ESR�Ĵ�������4��5��6��7��9��ͨ��λ��1
		regionIntr.intr = (1<<CSL_EDMA3_CHA_GPINT0) ;

		CSL_edma3HwControl(hModule_uPP,CSL_EDMA3_CMD_INTR_ENABLE,&regionIntr);//ʹ��ͨ��
    }
    else
    {

    }
}






