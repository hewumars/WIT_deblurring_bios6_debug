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
#include "EDMA3.h"//EDMA3通道号
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

//配置uPP的中断
void upp_intc_setup_my(int (*isr)(void *))
{
	//初始化开始
	intcContext_uPP.eventhandlerRecord = EventHandler_uPP;		//事件句柄记录指针
	intcContext_uPP.numEvtEntries = 50;						//事件入口数目

    CSL_intcInit(&intcContext_uPP);							//初始化中断上下文对象变量，返回状态CSL_SOK

    // Enable NMIs使能非可屏蔽中断
    CSL_intcGlobalNmiEnable();

    //Enable global interrupts使能全局中断
    CSL_intcGlobalEnable(&intc_state_uPP);

	/***************** interrupt configration for UPP接口  **************************/
	/* open CPINTC0 to map the UPP completetion ISR event to the host interrupt */
	hnd_UPP = CSL_CPINTC_open(0);
	if (hnd_UPP == 0)
	{
		printf ("Error: Unable to open CPINTC-1\n");
		return;
	}
	glbCpintcHnd[2] = (CSL_CPINTC_RegsOvly)hnd_UPP;
	//需要根据应用修改UPP产生的事件编号及CPINTC输出channel号
	CSL_CPINTC_mapSystemIntrToChannel (hnd_UPP, CSL_INTC0_RPINT, 9);
	CSL_CPINTC_enableSysInterrupt (hnd_UPP, CSL_INTC0_RPINT);
	CSL_CPINTC_enableHostInterrupt (hnd_UPP, 9);
	CSL_CPINTC_enableAllHostInterrupt(hnd_UPP);

	vectId_uPP = CSL_INTC_VECTID_4;

	hIntcUpp= CSL_intcOpen (&intcObjUpp, CSL_GEM_INTC0_OUT_9_PLUS_20_MUL_N, &vectId_uPP , NULL);

	gpioHandler.handler = (CSL_IntcEventHandler)&upp_isr;//事件句柄指针
	gpioHandler.arg = 0;										//传递给参数的句柄指针
	CSL_intcPlugEventHandler(hIntcUpp, &gpioHandler);					//建立事件和句柄的映射关系

	CSL_intcHwControl(hIntcUpp,CSL_INTC_CMD_EVTCLEAR,NULL);

	CSL_intcHwControl(hIntcUpp, CSL_INTC_CMD_EVTENABLE, NULL);

	/***************** interrupt configration for UPP接口  **************************/
}

/*
 * =============================================================================
 *   @func  IntcInit
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      初始化中断
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void IntcInit()
{
	/*初始化开始*/
	intcContext_uPP.eventhandlerRecord = EventHandler_uPP;		//事件句柄记录指针
	intcContext_uPP.numEvtEntries = 50;						//事件入口数目

	/* 初始化结束,前面的初始化过程只需要一次,如果需要增加中断处理,直接添加中断矢量
	和事件号即可,无需再次初始化,否则会覆盖掉前面的配置(包括事件和其中断服务程序的映射表等)*/

   	/*初始化中断上下文对象变量，返回状态CSL_SOK*/
	 CSL_intcInit(&intcContext_uPP);
    /*使能非可屏蔽中断*/
    CSL_intcGlobalNmiEnable();
    /*使能全局中断*/
    CSL_intcGlobalEnable(&intc_state_uPP);

	if(coreNum == 0)
	{

		/************************ 1.中断配置-----收图 **************************/
        ///////////////////////////第一步：EDMACC_GINT事件作为system interrupt通过CPINTC映射到host interrupt////////////
		/* open CPINTC0 to map the EDMA completetion ISR event to the host interrupt */
		hnd_EDMA_uPP = CSL_CPINTC_open(0);
		if (hnd_EDMA_uPP == 0)
		{
			printf ("Error: Unable to open CPINTC-1\n");
			return;
		}
		glbCpintcHnd[1] = (CSL_CPINTC_RegsOvly)hnd_EDMA_uPP;
		//需要根据应用修改EDMA产生的事件编号及CPINTC输出channel号
		//tms320c6657.pdf中"EDMA产生的事件编号"对应"CIC0 Event Inputs的22号"，System Event Mapping的CIC0_OUT(8+20*n)的"8"为host interrupt
		CSL_CPINTC_mapSystemIntrToChannel (hnd_EDMA_uPP, CSL_INTC0_CPU_3_2_EDMACC_GINT, 8);//system interrupt maping  to host interrupt
		CSL_CPINTC_enableSysInterrupt (hnd_EDMA_uPP, CSL_INTC0_CPU_3_2_EDMACC_GINT);
		CSL_CPINTC_enableHostInterrupt (hnd_EDMA_uPP, 8);
		CSL_CPINTC_enableAllHostInterrupt(hnd_EDMA_uPP);

		/***************** interrupt configration for EDMA completed ***************/
		//////////////////////////////////////第二步：host interrupt号转换为Event ID号，并绑定中断向量号/////////////////////////
		/* Opening a intc handle for edma event */
		vectId_uPP = CSL_INTC_VECTID_7;
		//打开中断向量句柄,建立事件与中断之间的映射关系
		//CSL_GEM_INTC0_OUT_8_PLUS_20_MUL_N  即CIC0_OUT(8+20*n)中8+20*n为Event ID
		hIntcEdma_uPP = CSL_intcOpen (&intcObjEdma_uPP, CSL_GEM_INTC0_OUT_8_PLUS_20_MUL_N, \
								  &vectId_uPP , NULL);

		/* Association of an EDMA event handler with the INTC routine 关联EDMA事件句柄到INTC程序*/
		EventRecord_uPP.handler = &eventEdmaHandler;//EDMA事件句柄指针
		EventRecord_uPP.arg = (void*)(hModule_uPP);//hModule_uPP是EMDA通道句柄
		CSL_intcPlugEventHandler(hIntcEdma_uPP,&EventRecord_uPP);		//建立事件和句柄的映射关系

		CSL_intcHwControl(hIntcEdma_uPP,CSL_INTC_CMD_EVTCLEAR,NULL);
		/* Enabling event edma 使能EDMA收图完成中断 */
		CSL_intcHwControl(hIntcEdma_uPP,CSL_INTC_CMD_EVTENABLE,NULL);

		/* Hook up the EDMA event with an completion code function handler */
		EdmaEventHook(CSL_EDMA3_CHA_GPINT0, ImgEDMARecCompleted_INT);//收图完成中断
		/***************** interrupt configration for EDMA completed ***************/

		/*****************2.中断配置-----UPP接口  **************************/
		////////////////////////////////////////////////用来与FPGA通信，接收图像//////////////////////////////////////////////////////////////////
		/* open CPINTC0 to map the UPP completetion ISR event to the host interrupt */
		hnd_UPP = CSL_CPINTC_open(0);
		if (hnd_UPP == 0)
		{
			printf ("Error: Unable to open CPINTC-1\n");
			return;
		}
		glbCpintcHnd[2] = (CSL_CPINTC_RegsOvly)hnd_UPP;
		//需要根据应用修改UPP产生的事件编号及CPINTC输出channel号
		//CSL_INTC0_RPINT为upp的system interrupt ，9为CIC0_OUT(9+20*n)中的host interrupt
		CSL_CPINTC_mapSystemIntrToChannel (hnd_UPP, CSL_INTC0_RPINT, 9);
		CSL_CPINTC_enableSysInterrupt (hnd_UPP, CSL_INTC0_RPINT);
		CSL_CPINTC_enableHostInterrupt (hnd_UPP, 9);
		CSL_CPINTC_enableAllHostInterrupt(hnd_UPP);

		vectId_uPP = CSL_INTC_VECTID_4;
        //绑定中断向量，即host interrupt转换为event id之后进入INTC绑定vectId_uPP
		hIntcUpp= CSL_intcOpen (&intcObjUpp, CSL_GEM_INTC0_OUT_9_PLUS_20_MUL_N, &vectId_uPP , NULL);

		gpioHandler.handler = (CSL_IntcEventHandler)&upp_isr;//事件句柄指针
		gpioHandler.arg = 0;										//传递给参数的句柄指针
		CSL_intcPlugEventHandler(hIntcUpp, &gpioHandler);					//建立事件和句柄的映射关系

		CSL_intcHwControl(hIntcUpp,CSL_INTC_CMD_EVTCLEAR,NULL);

		CSL_intcHwControl(hIntcUpp, CSL_INTC_CMD_EVTENABLE, NULL);

		/***************** interrupt configration for UPP接口  **************************/
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
 *      初始化EDMA
 *
 *   @return
 *      NONE
 *      使用---影子区域1
 *      图像接收--通道6（CSL_EDMA3_CHA_GPINT0）--源地址：0x70180000（EMIF16 CE0）,目标地址：C1PL段qRel[COL*ROW]数组首地址
 * =============================================================================
 */
void EDMAInit()
{
    CSL_Edma3ChannelAttr     chParam;//用于打开一个EDMA通道的参数结构体
    CSL_Edma3Context         edmaContext;
    CSL_Edma3QueryInfo       info; //EDMA控制信息
    CSL_Edma3CmdIntr         regionIntr;//EDMA控制/查询命令结构体
                                                           //for issuing commands for Interrupt related APIs An object of this type is allocated by the user and its address is passed to the Control API
    CSL_Edma3CmdDrae         regionAccess;//EDMA控制/查询命令结构体用于查询QDMA区域访问使能属性
    CSL_Status               status;

    /* EDMA模块初始化 */
    CSL_edma3Init(&edmaContext); 			//初始化edma上下文对象变量，返回状态CSL_SOK

    /* EDMA模块级开启, 得到EDMA寄存器组的首地址,赋给edmaObj_uPP->regs,最后返回的指针hModule_uPP实际上指向edmaObj*/
    hModule_uPP = CSL_edma3Open(&edmaObj_uPP,CSL_EDMA3,NULL,&status);

    /* 查询模块信息,得到EDMA控制器的状态,实际上就是把外设识别寄存器（PID）和EDMA3CC配置寄存器（CCCFG）的值读出到info*/
    CSL_edma3GetHwStatus(hModule_uPP,CSL_EDMA3_QUERY_INFO, &info);

    if(coreNum == 0)
    {
		/* Setup the DRAE masks
		 * DRAE enable(Bits 0-15) for the shadow region 1.
		 */
		regionAccess.region = CSL_EDMA3_REGION_1 ;
		regionAccess.drae =   0xFFFFFFFF ;
		regionAccess.draeh =  0xFFFFFFFF ;
		/*使能region区域的寄存器访问,实际上就是把regionAccess的drae和draeh写入*/
		CSL_edma3HwControl(hModule_uPP,CSL_EDMA3_CMD_DMAREGION_ENABLE,&regionAccess);

		/********************************Setup for Image receive******************************/
		//接收图像数据
		/* Channel open */
		chParam.regionNum = CSL_EDMA3_REGION_1;					//edma区域号为1
		chParam.chaNum = CSL_EDMA3_CHA_GPINT0;					//edma通道号为6,GPIO中断作为事件
		/*打开EDMA的通道,实际上就是把chParam的regionNum和chaNum赋给ChObjImgRec的region和chaNum,
		并且把EDMA寄存器组的首地址,赋给ChObjImgRec->regs,最后返回的指针hChannel_img_rec指向ChObjImgRec*/
		hChannel_img_rec= CSL_edma3ChannelOpen(&ChObjImgRec, CSL_EDMA3, &chParam, &status);

		/* 返回相应通道的参数寄存器的地址到hParamBasicImgRec*/
		hParamBasicImgRec= CSL_edma3GetParamHandle(hChannel_img_rec,CSL_EDMA3_CHA_GPINT0,&status);

		/* Edma参数入口设置Edma parameter entry Setup */
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
													   CSL_EDMA3_ADDRMODE_INCR);//在opt中没看到通道号设置CSL_EDMA3_CHA_GPINT0
		myParamSetupImgRec.srcAddr = (Uint32)IMG_SOURCE_FIFO;		//图像数据源地址
		myParamSetupImgRec.aCntbCnt = CSL_EDMA3_CNT_MAKE(63001,1);	//使用增量地址模式传输251*251=63001字节
		myParamSetupImgRec.dstAddr = (Uint32)qRel;					//实时图像地址    "C1PL"段在哪？
		myParamSetupImgRec.srcDstBidx = CSL_EDMA3_BIDX_MAKE(0,0);
		myParamSetupImgRec.linkBcntrld = CSL_EDMA3_LINKBCNTRLD_MAKE (CSL_EDMA3_LINK_NULL,1);
		myParamSetupImgRec.srcDstCidx = CSL_EDMA3_CIDX_MAKE(0,0);
		myParamSetupImgRec.cCnt = 1;


		/*通道建立,实际上是将传输使用的通道号(总共64个)和使用的参数号(总共256组)建立映射关系
		(通过设置DCHMAP寄存器)*/
		CSL_edma3HwChannelSetupParam (hChannel_img_rec, CSL_EDMA3_CHA_GPINT0);

		/*选择事件的优先级队列*/
		CSL_edma3HwChannelSetupQue(hChannel_img_rec, CSL_EDMA3_QUE_1);

		/*通过指向CSL_Edma3ParamSetup的指针配置EDMA参数*/
		CSL_edma3ParamSetup(hParamBasicImgRec,&myParamSetupImgRec);

		/* Enable interrupts ,使能相应通道的传输完成中断,本例中有4个通道,都需要使能,
		若增加了传输通道,这里相应的位也要追加置1*/
		regionIntr.region = CSL_EDMA3_REGION_1 ;
		//设置ESR寄存器，将4、5、6、7、9号通道位置1
		regionIntr.intr = (1<<CSL_EDMA3_CHA_GPINT0) ;

		CSL_edma3HwControl(hModule_uPP,CSL_EDMA3_CMD_INTR_ENABLE,&regionIntr);//使能通道
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
	以上是十六进制
	//明天来把初始化部分写了。。
*/

//都在sample_c6657_cfg.c中,不是知道为什么更改这个值，不会产生多个句柄。
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
/* External Global Configuration Structure *///里面有对EDMA3的模式设置，region数量、tcc数量等，只是读取EDMA3硬件资源数
extern EDMA3_DRV_GblConfigParams sampleEdma3GblCfgParams[];
/**
 *  \brief   This function determines if testing on a EDMA3 instance will be bypassed.
 *           When there are no EDMA channels allocated for the core from the given EDMA3
 *           instance, testing shall be bypassed.
 *  函数决定如果这个EDMA3句柄正在测试将被旁路。
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

    /* DSP instance number *///核数量
    dsp_num_tmp = determineProcId();

#ifndef EDMA3_DRV_USE_DEF_RM_CFG
	/* configuration structure for the Driver */
	instanceConfig = &sampleInstInitConfig[edmaInstNum][dsp_num_tmp];
	for (i = 0; i < EDMA3_MAX_DMA_CHAN_DWRDS; i++)
	{
	    if(instanceConfig->ownDmaChannels[i])//EDMA句柄拥有的通道数
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

    for (i = 0; i < numEdma3Instances; i++)//因为numEdma3Instances在sample_c6657_cfg.c中定义为1，在此extern时，并未修改，所以只产生一个句柄。
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

    unsigned int chId = 0;//通道ID
    unsigned int tcc = 0;//发送完成代码对应中断挂起寄存器

    unsigned int count;//传输总字节数（acnt*bcnt*ccnt）
    unsigned int Istestpassed = 0u;
    unsigned int numenabled = 0;
    unsigned int BRCnt = 0;
    int srcbidx = 0, desbidx = 0;//源、目的bcnt索引
    int srccidx = 0, descidx = 0;//源、目的ccnt索引




//这里报错错误代码-1
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



    //设置重装次数
    BRCnt = 1;

    //设置每帧的src/dst更新索引
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
    //设置tcc和chId
    tcc = EDMA3_DRV_TCC_ANY;
    //chId = EDMA3_DRV_HW_CHANNEL_EVENT_6;//对应CSL_EDMA3_CHA_GPINT0
    chId = EDMA3_DRV_DMA_CHANNEL_ANY;

    if(result == EDMA3_DRV_SOK)
    {
    	result = EDMA3_DRV_requestChannel(hEdma, &chId, &tcc, (EDMA3_RM_EventQueue)0, &callback1,NULL);
    }//这一步无效参数错误。

    if(result == EDMA3_DRV_SOK)
    {
    	//图像源地址传输到目标地址
    	paramSet.srcAddr = (unsigned int)(IMG_SOURCE_FIFO);
    	paramSet.destAddr = (unsigned int)(qRel);

    	//数据地址更新索引
    	paramSet.srcBIdx = srcbidx;
    	paramSet.destBIdx = desbidx;
    	paramSet.srcCIdx = srccidx;
    	paramSet.destCIdx = descidx;

    	/*
    	 * 每个数组有acnt个字节
    	 * 每个帧有bcnt个数组
    	 * 每个块有ccnt个帧
    	 */
    	paramSet.aCnt = acnt;
    	paramSet.bCnt = bcnt;
    	paramSet.cCnt = ccnt;

    	//PaRAM集重载次数
    	paramSet.bCntReload = BRCnt;

    	paramSet.linkAddr = 0xFFFFu;

    	//源、目标地址都设置成增量模式
    	paramSet.opt &= 0xFFFFFFFCu;
    	//设置TCC，从EDMA3_DRV_requestChannel()由RM资源管理器分配
    	paramSet.opt |= ((tcc << OPT_TCC_SHIFT) & OPT_TCC_MASK);

    	//禁用ITCINTEN中断、使能TCINTEN中断
    	paramSet.opt &= ~(1 << OPT_ITCINTEN_SHIFT);
    	paramSet.opt |= (1 << OPT_TCINTEN_SHIFT);

    	//设置同步传输模式
    	if(syncType == EDMA3_DRV_SYNC_A){
    		paramSet.opt &= 0xFFFFFFFBu;
    	}else{
    		//AB同步传输模式
    		paramSet.opt |= (1 << OPT_SYNCDIM_SHIFT);
    	}

    	//将paramSet结构体写入PaRAM集，设置完成
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


