/*
 * EDMA3_LLD_Init.h
 *
 *  Created on: 2015-11-16
 *      Author: HeWu
 */

#ifndef EDMA3_LLD_INIT_H_
#define EDMA3_LLD_INIT_H_

#include <stdio.h>
#include <string.h>
#include <xdc/std.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sdo/edma3/drv/sample/bios6_edma3_drv_sample.h>

#ifdef __cplusplus
extern "C"{
#endif


/*ACNT、BCNT、CCNT最大值*/
#define MAX_ACOUNT		(128u)
#define MAX_BCOUNT		(128u)
#define MAX_CCOUNT		(1u)

/*缓冲区最大尺寸*/
#define MAX_BUFFER_SIZE		(MAX_ACOUNT * MAX_BCOUNT * MAX_CCOUNT)

/*使能/禁用cache*/
#define EDMA3_ENABLE_DCACHE		(1u)

/*OPT位域定义*/
#define OPT_SYNCDIM_SHIFT		(0x00000002u)//A/AB同步
#define OPT_TCC_MASK				(0x0003F000u)
#define OPT_TCC_SHIFT				(0x0000000Cu)//传输完成代码
#define OPT_ITCINTEN_SHIFT		(0x00000015u)//内部传输完成中断使能
#define OPT_TCINTEN_SHIFT		(0x00000014u)//传输完成中断使能

/*EDMA3句柄，用于所有EDMA3驱动API调用*/
extern EDMA3_DRV_Handle hEdma[];

extern void callback1(unsigned int tcc, EDMA3_RM_TccStatus status, void *appData);
extern void callback2(unsigned int tcc, EDMA3_RM_TccStatus status, void *appData);

extern signed char* getGlobalAddr(signed char * addr);

/*通道1传输完成符号变量*/
extern volatile short irqRaised1;
/*通道2传输完成符号变量*/
extern volatile short irqRaised2;

/*EDMA最大通道实例数*/
#define MAX_NUM_EDMA_INSTANCES		5

#define GLOBAL_ADDR(addr)		(getGlobalAddr(addr))

/**
 * 	功能：EDMA3初始化
 * 	参数：acnt 每数组中字节数
 * 	         bcnt 每帧中数组数
 * 	         ccnt 每块的帧数
 * 	         syncType 同步类型（A/AB同步）
 * 	返回：EDMA3_DRV_SOK or EDMA3_DRV 错误代码
 * 	使用说明：
 * */
EDMA3_DRV_Result wh_edma3_lld_init(
									EDMA3_DRV_Handle hEdma,
									unsigned int acnt,
									unsigned int bcnt,
									unsigned int ccnt,
									EDMA3_DRV_SyncType syncType);
void echo();
unsigned int bypassCore(unsigned int edmaInstNum);

#ifdef __cplusplus
}
#endif




#endif /* EDMA3_LLD_INIT_H_ */
