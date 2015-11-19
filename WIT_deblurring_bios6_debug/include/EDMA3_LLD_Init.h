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


/*ACNT��BCNT��CCNT���ֵ*/
#define MAX_ACOUNT		(128u)
#define MAX_BCOUNT		(128u)
#define MAX_CCOUNT		(1u)

/*���������ߴ�*/
#define MAX_BUFFER_SIZE		(MAX_ACOUNT * MAX_BCOUNT * MAX_CCOUNT)

/*ʹ��/����cache*/
#define EDMA3_ENABLE_DCACHE		(1u)

/*OPTλ����*/
#define OPT_SYNCDIM_SHIFT		(0x00000002u)//A/ABͬ��
#define OPT_TCC_MASK				(0x0003F000u)
#define OPT_TCC_SHIFT				(0x0000000Cu)//������ɴ���
#define OPT_ITCINTEN_SHIFT		(0x00000015u)//�ڲ���������ж�ʹ��
#define OPT_TCINTEN_SHIFT		(0x00000014u)//��������ж�ʹ��

/*EDMA3�������������EDMA3����API����*/
extern EDMA3_DRV_Handle hEdma[];

extern void callback1(unsigned int tcc, EDMA3_RM_TccStatus status, void *appData);
extern void callback2(unsigned int tcc, EDMA3_RM_TccStatus status, void *appData);

extern signed char* getGlobalAddr(signed char * addr);

/*ͨ��1������ɷ��ű���*/
extern volatile short irqRaised1;
/*ͨ��2������ɷ��ű���*/
extern volatile short irqRaised2;

/*EDMA���ͨ��ʵ����*/
#define MAX_NUM_EDMA_INSTANCES		5

#define GLOBAL_ADDR(addr)		(getGlobalAddr(addr))

/**
 * 	���ܣ�EDMA3��ʼ��
 * 	������acnt ÿ�������ֽ���
 * 	         bcnt ÿ֡��������
 * 	         ccnt ÿ���֡��
 * 	         syncType ͬ�����ͣ�A/ABͬ����
 * 	���أ�EDMA3_DRV_SOK or EDMA3_DRV �������
 * 	ʹ��˵����
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
