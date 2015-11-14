/*
 * EDMA.c
 *
 *  Created on: 2014-1-3
 *      Author: Administrator
 */

#include <ti\csl\csl_edma3.h>
#include <ti\csl\csl_edma3Aux.h>

//#include "include\EDMA3.h"

#include "McBSP.h"
#include "preDefine.h"
#include <csl_chip.h>

#define CSL_EDMA3                       (2)


CSL_Edma3Handle          hModule_EDMA_McBSP;                   //!Edma declaration
CSL_Edma3Obj             edmaObj_McBSP;


extern CSL_Edma3ChannelHandle   hChannel_McBSP0_trans;
CSL_Edma3ChannelHandle   hChannel_McBSP0_rec;




CSL_Edma3ParamHandle     hParamBasicMcBSP0Rec;
CSL_Edma3ParamHandle     hParamBasicMcBSP0Trans;

CSL_Edma3ParamSetup      myParamSetupMcBSP0Trans;
CSL_Edma3ParamSetup      myParamSetupMcBSP0Rec;



CSL_Edma3ChannelObj      ChObjMcBSP0Trans;
CSL_Edma3ChannelObj      ChObjMcBSP0Rec;



extern unsigned short	McBSP_src[BUFFER_SIZE];
extern unsigned short	McBSP_dst[BUFFER_SIZE];

/*******************************************/



static uint32_t l2_global_address (uint32_t addr)
{
	uint32_t coreNum;

	/* Get the core number. */
	coreNum = CSL_chipReadReg (CSL_CHIP_DNUM);

	/* Compute the global address. */
	return (addr + (0x10000000 + (coreNum * 0x1000000)));
}


/*
 * =============================================================================
 *   @func  EDMAInit_McBSP
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      ��ʼ��EDMA
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void EDMAInit_McBSP()
{
    CSL_Edma3ChannelAttr     chParam;
    CSL_Edma3Context         edmaContext;
    CSL_Edma3QueryInfo       info;
    CSL_Edma3CmdIntr         regionIntr;
    CSL_Edma3CmdDrae         regionAccess;
    CSL_Status               status;

    Uint32 intrEn[2] = {0,0};

    /* Edma Module Initialization */
    CSL_edma3Init(&edmaContext); 			//��ʼ��edma�����Ķ������������״̬CSL_SOK

    /* Edma Module Level Open, �õ�EDMA�Ĵ�������׵�ַ,����edmaObj_McBSP->regs,��󷵻ص�ָ��hModule_EDMA_McBSPʵ����ָ��edmaObj*/
    hModule_EDMA_McBSP = CSL_edma3Open(&edmaObj_McBSP,CSL_EDMA3,NULL,&status);

    /* Query Module Info ,�õ�EDMA��������״̬,ʵ���Ͼ��ǰ�PID��CCCFG�Ĵ�����ֵ������info*/
    CSL_edma3GetHwStatus(hModule_EDMA_McBSP,CSL_EDMA3_QUERY_INFO, &info);

	/* Setup the DRAE masks
	 * DRAE enable(Bits 0-15) for the shadow region 1.
	 */
	regionAccess.region = CSL_EDMA3_REGION_1 ;
	regionAccess.drae =   0xFFFFFFFF ;
	regionAccess.draeh =  0xFFFFFFFF ;
	/*ʹ��region����ļĴ�������,ʵ���Ͼ��ǰ�regionAccess��drae��draehд��*/
	CSL_edma3HwControl(hModule_EDMA_McBSP,CSL_EDMA3_CMD_DMAREGION_ENABLE,&regionAccess);

	/********************************Setup for McBSP0 transmition******************************/
	//DSP������λ��
	/* Channel open */
	chParam.regionNum = CSL_EDMA3_REGION_1;
	chParam.chaNum = CSL_EDMA3CC2_XEVT0_MCBSP_A;				//37��ͨ��
	 /*��EDMA��ͨ��,ʵ���Ͼ��ǰ�chParam��regionNum��chaNum����ChObjUartTrans��region��chaNum,
	���Ұ�EDMA�Ĵ�������׵�ַ,����ChObjUartTrans->regs,��󷵻ص�ָ��hChannel_uart_transָ��ChObjUartTrans*/
	hChannel_McBSP0_trans= CSL_edma3ChannelOpen(&ChObjMcBSP0Trans, CSL_EDMA3, &chParam, &status);

	intrEn[1] = (1<<(CSL_EDMA3CC2_XEVT0_MCBSP_A-32));
	CSL_edma3HwChannelControl(hChannel_McBSP0_trans, CSL_EDMA3_CMD_CHANNEL_ENABLE, intrEn);

	/* ������Ӧͨ���Ĳ����Ĵ����ĵ�ַ��hParamBasicUartTrans*/
	hParamBasicMcBSP0Trans= CSL_edma3GetParamHandle(hChannel_McBSP0_trans,2,&status);

	/* Edma parameter entry Setup */
	myParamSetupMcBSP0Trans.option = CSL_EDMA3_OPT_MAKE(CSL_EDMA3_ITCCH_DIS, \
														CSL_EDMA3_TCCH_DIS, \
														CSL_EDMA3_ITCINT_DIS, \
														CSL_EDMA3_TCINT_EN,\
														CSL_EDMA3CC2_XEVT0_MCBSP_A,\
														CSL_EDMA3_TCC_NORMAL,\
														CSL_EDMA3_FIFOWIDTH_NONE, \
														CSL_EDMA3_STATIC_DIS, \
														CSL_EDMA3_SYNC_A, \
														CSL_EDMA3_ADDRMODE_INCR, \
														CSL_EDMA3_ADDRMODE_INCR);
	myParamSetupMcBSP0Trans.srcAddr = (Uint32)l2_global_address((Uint32)McBSP_src); 			//DSP������λ������Դ��ַ
	myParamSetupMcBSP0Trans.aCntbCnt = CSL_EDMA3_CNT_MAKE(2,DMA_BUFFER_SIZE); //������ַģʽ����32*4�ֽ�
	myParamSetupMcBSP0Trans.dstAddr = (Uint32)McBSP_WRITE_ADDR(0);			//DSP������λ������Ŀ�ĵ�ַ
	myParamSetupMcBSP0Trans.srcDstBidx = CSL_EDMA3_BIDX_MAKE(2,0);
	myParamSetupMcBSP0Trans.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL, 1);
	myParamSetupMcBSP0Trans.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
	myParamSetupMcBSP0Trans.cCnt = 1;

	/*ͨ������,ʵ�����ǽ�����ʹ�õ�ͨ����(�ܹ�64��)��ʹ�õĲ�����(�ܹ�256��)����ӳ���ϵ
	(ͨ������DCHMAP�Ĵ���)*/
	CSL_edma3HwChannelSetupParam (hChannel_McBSP0_trans, 2);//CSL_EDMA3_CHA_MCBSP0_XEVT);
	/*ѡ���¼������ȼ�����*/
	CSL_edma3HwChannelSetupQue(hChannel_McBSP0_trans, CSL_EDMA3_QUE_2);
	CSL_edma3MapEventQueueToTC(hModule_EDMA_McBSP, CSL_EDMA3_QUE_2, 2);
	/*����д��Ĵ���*/
	CSL_edma3ParamSetup(hParamBasicMcBSP0Trans,&myParamSetupMcBSP0Trans);
	/********************************Setup for McBSP0 transmition******************************/

	/********************************Setup for McBSP0 receive******************************/
	//��������������
	/* Channel open */
	chParam.regionNum = CSL_EDMA3_REGION_1;
	chParam.chaNum = CSL_EDMA3CC2_REVT0_MCBSP_A;					//36��ͨ��
	 /*��EDMA��ͨ��,ʵ���Ͼ��ǰ�chParam��regionNum��chaNum����ChObjImgRec��region��chaNum,
	���Ұ�EDMA�Ĵ�������׵�ַ,����ChObjImgRec->regs,��󷵻ص�ָ��hChannel_img_recָ��ChObjImgRec*/
	hChannel_McBSP0_rec= CSL_edma3ChannelOpen(&ChObjMcBSP0Rec, CSL_EDMA3, &chParam, &status);

	intrEn[1] = (1<<(CSL_EDMA3CC2_REVT0_MCBSP_A-32));
	CSL_edma3HwChannelControl(hChannel_McBSP0_rec, CSL_EDMA3_CMD_CHANNEL_ENABLE, intrEn);
	/* ������Ӧͨ���Ĳ����Ĵ����ĵ�ַ��hParamBasicImgRec*/
	hParamBasicMcBSP0Rec= CSL_edma3GetParamHandle(hChannel_McBSP0_rec,3,&status);
	/* Edma parameter entry Setup */
	myParamSetupMcBSP0Rec.option = CSL_EDMA3_OPT_MAKE(CSL_EDMA3_ITCCH_DIS, \
													  CSL_EDMA3_TCCH_DIS, \
													  CSL_EDMA3_ITCINT_EN, \
													  CSL_EDMA3_TCINT_EN,\
													  CSL_EDMA3CC2_REVT0_MCBSP_A,\
													  CSL_EDMA3_TCC_NORMAL,\
													  CSL_EDMA3_FIFOWIDTH_NONE, \
													  CSL_EDMA3_STATIC_DIS, \
													  CSL_EDMA3_SYNC_A, \
													  CSL_EDMA3_ADDRMODE_INCR, \
													  CSL_EDMA3_ADDRMODE_INCR);
	myParamSetupMcBSP0Rec.srcAddr = (Uint32)McBSP_READ_ADDR(0);         	//���ڽ�������������Դ��ַ
	myParamSetupMcBSP0Rec.aCntbCnt = CSL_EDMA3_CNT_MAKE(2,DMA_BUFFER_SIZE);   // ������ַģʽ����36*4�ֽ�
	myParamSetupMcBSP0Rec.dstAddr = (Uint32)l2_global_address((Uint32)McBSP_dst);			//���ڽ�������������Ŀ�ĵ�ַ
	myParamSetupMcBSP0Rec.srcDstBidx = CSL_EDMA3_BIDX_MAKE(0,2);
	myParamSetupMcBSP0Rec.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL,  1);
	myParamSetupMcBSP0Rec.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
	myParamSetupMcBSP0Rec.cCnt = 1;

	/*ͨ������,ʵ�����ǽ�����ʹ�õ�ͨ����(�ܹ�64��)��ʹ�õĲ�����(�ܹ�256��)����ӳ���ϵ
	(ͨ������DCHMAP�Ĵ���)*/
	CSL_edma3HwChannelSetupParam (hChannel_McBSP0_rec, 3);//CSL_EDMA3_CHA_MCBSP0_REVT);

	/*ѡ���¼������ȼ�����*/
	CSL_edma3HwChannelSetupQue(hChannel_McBSP0_rec, CSL_EDMA3_QUE_2);
	CSL_edma3MapEventQueueToTC(hModule_EDMA_McBSP, CSL_EDMA3_QUE_2, 2);

	 /*������д��Ĵ���*/
	CSL_edma3ParamSetup(hParamBasicMcBSP0Rec,&myParamSetupMcBSP0Rec);

	/********************************Setup for McBSP0 receive**************************************************/
	/* Enable interrupts ,ʹ����Ӧͨ���Ĵ�������ж�,��������4��ͨ��,����Ҫʹ��,
	�������˴���ͨ��,������Ӧ��λҲҪ׷����1*/
	regionIntr.region = CSL_EDMA3_REGION_1 ;
	//����ESR�Ĵ�������4��5��6��7��9��ͨ��λ��1
	regionIntr.intrh = (1<<(CSL_EDMA3CC2_REVT0_MCBSP_A - 32)) | (1<<(CSL_EDMA3CC2_XEVT0_MCBSP_A - 32)) ;

	CSL_edma3HwControl(hModule_EDMA_McBSP,CSL_EDMA3_CMD_INTR_ENABLE,&regionIntr);//ʹ��ͨ��
}





