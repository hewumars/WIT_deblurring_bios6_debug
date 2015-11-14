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
 *      初始化EDMA
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
    CSL_edma3Init(&edmaContext); 			//初始化edma上下文对象变量，返回状态CSL_SOK

    /* Edma Module Level Open, 得到EDMA寄存器组的首地址,赋给edmaObj_McBSP->regs,最后返回的指针hModule_EDMA_McBSP实际上指向edmaObj*/
    hModule_EDMA_McBSP = CSL_edma3Open(&edmaObj_McBSP,CSL_EDMA3,NULL,&status);

    /* Query Module Info ,得到EDMA控制器的状态,实际上就是把PID和CCCFG寄存器的值读出到info*/
    CSL_edma3GetHwStatus(hModule_EDMA_McBSP,CSL_EDMA3_QUERY_INFO, &info);

	/* Setup the DRAE masks
	 * DRAE enable(Bits 0-15) for the shadow region 1.
	 */
	regionAccess.region = CSL_EDMA3_REGION_1 ;
	regionAccess.drae =   0xFFFFFFFF ;
	regionAccess.draeh =  0xFFFFFFFF ;
	/*使能region区域的寄存器访问,实际上就是把regionAccess的drae和draeh写入*/
	CSL_edma3HwControl(hModule_EDMA_McBSP,CSL_EDMA3_CMD_DMAREGION_ENABLE,&regionAccess);

	/********************************Setup for McBSP0 transmition******************************/
	//DSP发送上位机
	/* Channel open */
	chParam.regionNum = CSL_EDMA3_REGION_1;
	chParam.chaNum = CSL_EDMA3CC2_XEVT0_MCBSP_A;				//37号通道
	 /*打开EDMA的通道,实际上就是把chParam的regionNum和chaNum赋给ChObjUartTrans的region和chaNum,
	并且把EDMA寄存器组的首地址,赋给ChObjUartTrans->regs,最后返回的指针hChannel_uart_trans指向ChObjUartTrans*/
	hChannel_McBSP0_trans= CSL_edma3ChannelOpen(&ChObjMcBSP0Trans, CSL_EDMA3, &chParam, &status);

	intrEn[1] = (1<<(CSL_EDMA3CC2_XEVT0_MCBSP_A-32));
	CSL_edma3HwChannelControl(hChannel_McBSP0_trans, CSL_EDMA3_CMD_CHANNEL_ENABLE, intrEn);

	/* 返回相应通道的参数寄存器的地址到hParamBasicUartTrans*/
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
	myParamSetupMcBSP0Trans.srcAddr = (Uint32)l2_global_address((Uint32)McBSP_src); 			//DSP发送上位机数据源地址
	myParamSetupMcBSP0Trans.aCntbCnt = CSL_EDMA3_CNT_MAKE(2,DMA_BUFFER_SIZE); //增量地址模式传输32*4字节
	myParamSetupMcBSP0Trans.dstAddr = (Uint32)McBSP_WRITE_ADDR(0);			//DSP发送上位机数据目的地址
	myParamSetupMcBSP0Trans.srcDstBidx = CSL_EDMA3_BIDX_MAKE(2,0);
	myParamSetupMcBSP0Trans.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL, 1);
	myParamSetupMcBSP0Trans.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
	myParamSetupMcBSP0Trans.cCnt = 1;

	/*通道建立,实际上是将传输使用的通道号(总共64个)和使用的参数号(总共256组)建立映射关系
	(通过设置DCHMAP寄存器)*/
	CSL_edma3HwChannelSetupParam (hChannel_McBSP0_trans, 2);//CSL_EDMA3_CHA_MCBSP0_XEVT);
	/*选择事件的优先级队列*/
	CSL_edma3HwChannelSetupQue(hChannel_McBSP0_trans, CSL_EDMA3_QUE_2);
	CSL_edma3MapEventQueueToTC(hModule_EDMA_McBSP, CSL_EDMA3_QUE_2, 2);
	/*参组写入寄存器*/
	CSL_edma3ParamSetup(hParamBasicMcBSP0Trans,&myParamSetupMcBSP0Trans);
	/********************************Setup for McBSP0 transmition******************************/

	/********************************Setup for McBSP0 receive******************************/
	//接收陀螺仪数据
	/* Channel open */
	chParam.regionNum = CSL_EDMA3_REGION_1;
	chParam.chaNum = CSL_EDMA3CC2_REVT0_MCBSP_A;					//36号通道
	 /*打开EDMA的通道,实际上就是把chParam的regionNum和chaNum赋给ChObjImgRec的region和chaNum,
	并且把EDMA寄存器组的首地址,赋给ChObjImgRec->regs,最后返回的指针hChannel_img_rec指向ChObjImgRec*/
	hChannel_McBSP0_rec= CSL_edma3ChannelOpen(&ChObjMcBSP0Rec, CSL_EDMA3, &chParam, &status);

	intrEn[1] = (1<<(CSL_EDMA3CC2_REVT0_MCBSP_A-32));
	CSL_edma3HwChannelControl(hChannel_McBSP0_rec, CSL_EDMA3_CMD_CHANNEL_ENABLE, intrEn);
	/* 返回相应通道的参数寄存器的地址到hParamBasicImgRec*/
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
	myParamSetupMcBSP0Rec.srcAddr = (Uint32)McBSP_READ_ADDR(0);         	//串口接收陀螺仪数据源地址
	myParamSetupMcBSP0Rec.aCntbCnt = CSL_EDMA3_CNT_MAKE(2,DMA_BUFFER_SIZE);   // 增量地址模式传输36*4字节
	myParamSetupMcBSP0Rec.dstAddr = (Uint32)l2_global_address((Uint32)McBSP_dst);			//串口接收陀螺仪数据目的地址
	myParamSetupMcBSP0Rec.srcDstBidx = CSL_EDMA3_BIDX_MAKE(0,2);
	myParamSetupMcBSP0Rec.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL,  1);
	myParamSetupMcBSP0Rec.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
	myParamSetupMcBSP0Rec.cCnt = 1;

	/*通道建立,实际上是将传输使用的通道号(总共64个)和使用的参数号(总共256组)建立映射关系
	(通过设置DCHMAP寄存器)*/
	CSL_edma3HwChannelSetupParam (hChannel_McBSP0_rec, 3);//CSL_EDMA3_CHA_MCBSP0_REVT);

	/*选择事件的优先级队列*/
	CSL_edma3HwChannelSetupQue(hChannel_McBSP0_rec, CSL_EDMA3_QUE_2);
	CSL_edma3MapEventQueueToTC(hModule_EDMA_McBSP, CSL_EDMA3_QUE_2, 2);

	 /*参数组写入寄存器*/
	CSL_edma3ParamSetup(hParamBasicMcBSP0Rec,&myParamSetupMcBSP0Rec);

	/********************************Setup for McBSP0 receive**************************************************/
	/* Enable interrupts ,使能相应通道的传输完成中断,本例中有4个通道,都需要使能,
	若增加了传输通道,这里相应的位也要追加置1*/
	regionIntr.region = CSL_EDMA3_REGION_1 ;
	//设置ESR寄存器，将4、5、6、7、9号通道位置1
	regionIntr.intrh = (1<<(CSL_EDMA3CC2_REVT0_MCBSP_A - 32)) | (1<<(CSL_EDMA3CC2_XEVT0_MCBSP_A - 32)) ;

	CSL_edma3HwControl(hModule_EDMA_McBSP,CSL_EDMA3_CMD_INTR_ENABLE,&regionIntr);//使能通道
}





