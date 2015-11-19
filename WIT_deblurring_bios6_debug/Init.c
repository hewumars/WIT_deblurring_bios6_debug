/*
 * Init.c
 *
 *  Created on: 2015-11-16
 *      Author: HeWu
 */


#include "EDMA3_LLD_Init.h"
#include "Init.h"

#include "cdatatype.h"

#include <ti/csl/csl_cpIntc.h>
#include <ti/csl/csl_cpIntcAux.h>
#include <ti/csl/src/intc/csl_intc.h>
#include "Intc_ISR.h"

#include <ti/csl/csl_edma3.h>
#include "EDMA3.h"//EDMA3ͨ����
#include "edmaCommon.h"

#include "upp_6657.h"
#include "upp_common.h"


#define ROW      128		//!origin image's height
#define COL      128		//!origin image's width



/**********************************************************************************/

extern INT32U                				 coreNum;
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

volatile short irqRaised1 = 0;
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
	printf("IntcInit end\n\t");
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
    printf("EDMAInit end\n\t");
}


/*
    option is       106000--0000 0000 0001 0000 0110 0000 0000 0000
	srcAddr is   70180000
	aCntbCnt is      1F619
	dstAddr is       81BB60
	srcDstBidx is 0
	linkBcntrld is     1FFFF
	srcDstCidx is 0
	cCnt is 1
	������ʮ������
	//�������ѳ�ʼ������д�ˡ���
*/

//����sample_c6657_cfg.c��,����֪��Ϊʲô�������ֵ�����������������
extern const unsigned int numEdma3Instances;

/**
 * DSP instance number on which the executable is running. Its value is
 * determined by reading the processor specific register DNUM.
 */
unsigned int dsp_num_tmp;
/* To find out the DSP# */
extern unsigned short determineProcId();
extern EDMA3_DRV_InstanceInitConfig sampleInstInitConfig[][EDMA3_MAX_REGIONS];
extern EDMA3_RM_InstanceInitConfig defInstInitConfig [][EDMA3_MAX_REGIONS];
/* External Global Configuration Structure *///�����ж�EDMA3��ģʽ���ã�region������tcc�����ȣ�ֻ�Ƕ�ȡEDMA3Ӳ����Դ��
extern EDMA3_DRV_GblConfigParams sampleEdma3GblCfgParams[];
/**
 *  \brief   This function determines if testing on a EDMA3 instance will be bypassed.
 *           When there are no EDMA channels allocated for the core from the given EDMA3
 *           instance, testing shall be bypassed.
 *  ��������������EDMA3������ڲ��Խ�����·��
 *
 *  \return  TRUE if bypass; FALSE if testing will done.
 */
unsigned int bypassCore(unsigned int edmaInstNum)
{
	unsigned int i, bypassFlag = 1;

#ifndef EDMA3_DRV_USE_DEF_RM_CFG
    EDMA3_DRV_InstanceInitConfig *instanceConfig = NULL;
#else
    EDMA3_RM_InstanceInitConfig  *rmInstInitCfg = NULL;
#endif

    /* DSP instance number *///������
    dsp_num_tmp = determineProcId();

#ifndef EDMA3_DRV_USE_DEF_RM_CFG
	/* configuration structure for the Driver */
	instanceConfig = &sampleInstInitConfig[edmaInstNum][dsp_num_tmp];
	for (i = 0; i < EDMA3_MAX_DMA_CHAN_DWRDS; i++)
	{
	    if(instanceConfig->ownDmaChannels[i])//EDMA���ӵ�е�ͨ����
			bypassFlag = 0;
	}
#else
    /* configuration structure for the Driver */
	rmInstInitCfg = &defInstInitConfig[edmaInstNum][dsp_num_tmp];
	for (i = 0; i < EDMA3_MAX_DMA_CHAN_DWRDS; i++)
	{
	    if(rmInstInitCfg->ownDmaChannels[i])
			bypassFlag = 0;
	}
#endif

	return (bypassFlag);
}

void echo()
    {
    EDMA3_DRV_Result edmaResult = EDMA3_DRV_SOK;
	unsigned int i, bypass;
	EDMA3_DRV_Handle hEdma[MAX_NUM_EDMA_INSTANCES];

    memset(hEdma,0,sizeof(hEdma));


    if(numEdma3Instances > MAX_NUM_EDMA_INSTANCES)
    {
        printf("Error numEdma3Instances:%d > MAX_NUM_EDMA_INSTANCES: %d\n", numEdma3Instances, MAX_NUM_EDMA_INSTANCES);
        return;
    }

    for (i = 0; i < numEdma3Instances; i++)//��ΪnumEdma3Instances��sample_c6657_cfg.c�ж���Ϊ1���ڴ�externʱ����δ�޸ģ�����ֻ����һ�������
    {
        bypass = bypassCore(i);
        if(sampleEdma3GblCfgParams[i].numRegions > 1)
        {
            /* For multi core test init and de-init only once per test
             * for a core.
             */
            if(bypass)
		    {
		        printf("Bypassing init for Core %d on EDMA3 instance %d\n", dsp_num_tmp, i);
                continue;
		    }

            hEdma[i] = edma3init(i, &edmaResult);
	        if (hEdma[i])
	        {
	            printf("edma3init() Passed\n");
	        }
	        else
	        {
	            printf("edma3init() Failed, error code: %d\n", edmaResult);
	        }
        }
    }



		for (i = 0; i < numEdma3Instances; i++)
	    {

            bypass = bypassCore(i);
			if(bypass)
		        {
		        printf("Bypass Core %d on EDMA3 instance %d\n", dsp_num_tmp, i);
		        }
			else
			{
                if(sampleEdma3GblCfgParams[i].numRegions == 1)
                {
                    /* Single Region Config Do Init and Deinit test for each iteration */
                    hEdma[i] = edma3init(i, &edmaResult);

	                if (hEdma[i])
		        {
		        printf("edma3init() Passed\n");
		        }
		    else
		        {
		        printf("edma3init() Failed, error code: %d\n", edmaResult);
		        }
                }


		        if (edmaResult == EDMA3_DRV_SOK)
		            {
				    printf("\nStart -> EDMA3 Test memory to memory copy on Instance %d\n",i);

			        edmaResult = wh_edma3_lld_init(hEdma[i],128u,128u,1u,EDMA3_DRV_SYNC_A);

		            if (EDMA3_DRV_SOK != edmaResult)
		               {
		                /* Report EDMA Error */
		                printf("edma3MemToMemCpytest() FAILED!!!!!!!!!!!!!!!!\n");
		                return;
		               }
		            else
		               {
		                printf("edma3MemToMemCpytest() Passed\n");
		               }

		            printf("\nEnd -> EDMA3 Test memory to memory copy\n\n");
		         }

                if(sampleEdma3GblCfgParams[i].numRegions == 1)
                {
                    /* Single Region Config Do deinit */
                    /* De-init EDMA3 */
	                if (hEdma[i])
	                {
		                edmaResult = edma3deinit(i, hEdma[i]);
		                if (edmaResult != EDMA3_DRV_SOK)
			                {
			                printf("edma3deinit() Failed, error code: %d\n", edmaResult);
			                }
		                else
			                {
			                printf("edma3deinit() Passed\n");
			                }
                    }
                }
            }

		}



    for (i = 0; i < numEdma3Instances; i++)
    {
        if(sampleEdma3GblCfgParams[i].numRegions > 1)
        {
            if(bypass)
		    {
		        printf("Bypassing de-init for Core %d on EDMA3 instance %d\n", dsp_num_tmp, i);
                continue;
		    }

            /* Multi core Do deinit */
            /* De-init EDMA3 */
	        if (hEdma[i])
	        {
		        edmaResult = edma3deinit(i, hEdma[i]);
		        if (edmaResult != EDMA3_DRV_SOK)
			        {
			        printf("edma3deinit() Failed, error code: %d\n", edmaResult);
			        }
		        else
			        {
			        printf("edma3deinit() Passed\n");
			        }
            }
        }
    }

    return;
    }
EDMA3_DRV_Result wh_edma3_lld_init(
									EDMA3_DRV_Handle hEdma,
									unsigned int acnt,
									unsigned int bcnt,
									unsigned int ccnt,
									EDMA3_DRV_SyncType syncType)
{



	EDMA3_DRV_Result result = EDMA3_DRV_SOK;
    EDMA3_DRV_PaRAMRegs paramSet = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};//12*4byte

    unsigned int chId = 0;//ͨ��ID
    unsigned int tcc = 0;//������ɴ����Ӧ�жϹ���Ĵ���

    unsigned int count;//�������ֽ�����acnt*bcnt*ccnt��
    unsigned int Istestpassed = 0u;
    unsigned int numenabled = 0;
    unsigned int BRCnt = 0;
    int srcbidx = 0, desbidx = 0;//Դ��Ŀ��bcnt����
    int srccidx = 0, descidx = 0;//Դ��Ŀ��ccnt����




//���ﱨ��������-1
//#ifdef EDMA3_ENABLE_DCACHE
//    if (result == EDMA3_DRV_SOK)
//        {
//        result = Edma3_CacheFlush((unsigned int)IMG_SOURCE_FIFO, (acnt*bcnt*ccnt));
//        }
//
//    if (result == EDMA3_DRV_SOK)
//        {
//        result = Edma3_CacheFlush((unsigned int)qRel, (acnt*bcnt*ccnt));
//        }
//#endif



    //������װ����
    BRCnt = 1;

    //����ÿ֡��src/dst��������
    srcbidx = (int)acnt;
    desbidx = (int)bcnt;
    if(syncType == EDMA3_DRV_SYNC_A)
    	{
    		srccidx = (int)acnt;
    		descidx = (int)acnt;
    	}
    else
    	{
			srccidx = ((int)acnt * (int)bcnt);
			descidx = ((int)acnt * (int)bcnt);
    	}
    //����tcc��chId
    tcc = EDMA3_DRV_TCC_ANY;
    //chId = EDMA3_DRV_HW_CHANNEL_EVENT_6;//��ӦCSL_EDMA3_CHA_GPINT0
    chId = EDMA3_DRV_DMA_CHANNEL_ANY;

    if(result == EDMA3_DRV_SOK)
    {
    	result = EDMA3_DRV_requestChannel(hEdma, &chId, &tcc, (EDMA3_RM_EventQueue)0, &callback1,NULL);
    }//��һ����Ч��������

    if(result == EDMA3_DRV_SOK)
    {
    	//ͼ��Դ��ַ���䵽Ŀ���ַ
    	paramSet.srcAddr = (unsigned int)(IMG_SOURCE_FIFO);
    	paramSet.destAddr = (unsigned int)(qRel);

    	//���ݵ�ַ��������
    	paramSet.srcBIdx = srcbidx;
    	paramSet.destBIdx = desbidx;
    	paramSet.srcCIdx = srccidx;
    	paramSet.destCIdx = descidx;

    	/*
    	 * ÿ��������acnt���ֽ�
    	 * ÿ��֡��bcnt������
    	 * ÿ������ccnt��֡
    	 */
    	paramSet.aCnt = acnt;
    	paramSet.bCnt = bcnt;
    	paramSet.cCnt = ccnt;

    	//PaRAM�����ش���
    	paramSet.bCntReload = BRCnt;

    	paramSet.linkAddr = 0xFFFFu;

    	//Դ��Ŀ���ַ�����ó�����ģʽ
    	paramSet.opt &= 0xFFFFFFFCu;
    	//����TCC����EDMA3_DRV_requestChannel()��RM��Դ����������
    	paramSet.opt |= ((tcc << OPT_TCC_SHIFT) & OPT_TCC_MASK);

    	//����ITCINTEN�жϡ�ʹ��TCINTEN�ж�
    	paramSet.opt &= ~(1 << OPT_ITCINTEN_SHIFT);
    	paramSet.opt |= (1 << OPT_TCINTEN_SHIFT);

    	//����ͬ������ģʽ
    	if(syncType == EDMA3_DRV_SYNC_A){
    		paramSet.opt &= 0xFFFFFFFBu;
    	}else{
    		//ABͬ������ģʽ
    		paramSet.opt |= (1 << OPT_SYNCDIM_SHIFT);
    	}

    	//��paramSet�ṹ��д��PaRAM�����������
    	result = EDMA3_DRV_setPaRAM(hEdma, chId, &paramSet);
        printf("paramSet.opt is %d \n\t", paramSet.opt);
    }
    return result;
}

 //Callback function 1
void callback1 (unsigned int tcc, EDMA3_RM_TccStatus status,
                        void *appData)
    {
    (void)tcc;
    (void)appData;

    switch (status)
        {
        case EDMA3_RM_XFER_COMPLETE:
             //Transfer completed successfully
            irqRaised1 = 1;
            break;
        case EDMA3_RM_E_CC_DMA_EVT_MISS:
             //Transfer resulted in DMA event miss error.
            irqRaised1 = -1;
            break;
        case EDMA3_RM_E_CC_QDMA_EVT_MISS:
             //Transfer resulted in QDMA event miss error.
            irqRaised1 = -2;
            break;
        default:
            break;
        }
    }


