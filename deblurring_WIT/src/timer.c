#ifndef _TIMER_C_
#define _TIMER_C_

/******************************************************************************
* Copyright (c) 2008,���пƼ���ѧͼ����1008ʵ����
*   by yfj  All rights reserved.
*
* �ļ����ƣ�Timer_Study.c
* �ļ���ʶ��Դ�ļ�
* ժ Ҫ������TMS320C6414�Ķ�ʱ��Timer�ĳ����������Լ�����
*
* ��ǰ�汾��1.1
* �� �ߣ����ῡ
* ������ڣ�2008��12��20��
*
* ȡ���汾��1.0
* ԭ���� ��������
* ������ڣ�2008��5��10��
******************************************************************************/
#include "Timer.h"
/*************************************************************************
 * �������ƣ� TimerStart
 * ��	 ��:
 *		timerNum		-ʹ�õ�DSP��timer��
 * �� �� ֵ:  void
 * ˵	 ��:  ����Timer��ʹ���ڲ�ʱ��
 * ע	 �⣺
 ************************************************************************/
void TimerStart(int timerNum)
{
	// ��ʼ��Timer������CTL��PRD��CNT�Ĵ�����ֵΪ0
	TIMER_RESET(timerNum);
	
	// ����PRD�Ĵ���Ϊ���ֵ��2e32-1	
	*(volatile unsigned int *)(TIMER_PERIOD_ADDR(timerNum))  = 0xFFFFFFFF;
	
	// ����CTL�Ĵ���������Timer
	*(volatile unsigned int *)(TIMER_CTRL_ADDR(timerNum)) = 
				(0<<TSTAT)			// N_R ָʾTimer��״̬
				+ (1<<CLKSRC)		// Y_W Timer��ʱ��Դ��1��ʾ�ڲ�ʱ�Ӳ���
				+ (0<<C_P)			// Y_W Timer���Ϊʱ�ӻ�������
				+ (1<<HLD)			// Y_W 1��ʾ���������0��ʾ��ֹ����
				+ (1<<GO) 			// Y_W ��������
			 	+ (0<<PWID);		// N_W ����������
	return;				
}


/*************************************************************************
 * �������ƣ� TimerClose
 * ��	 ��:
 *		timerNum		-ʹ�õ�DSP��timer��
 * �� �� ֵ:  void
 * ˵	 ��:  �ر�Timer
 * ע	 �⣺
 ************************************************************************/
void TimerClose(int timerNum)
{
	// ����CTL�Ĵ���������Timer
	*(volatile unsigned int *)(TIMER_CTRL_ADDR(timerNum)) = 
				  (0<<HLD)			// Y_W 1��ʾ���������0��ʾ��ֹ����
				+ (0<<GO); 			// Y_W �رռ���
	return;				
}

/*************************************************************************
 * �������ƣ� TimerCntToUs
 * ��	 ��:
 *		count		-����ֵ
 * �� �� ֵ:  float
 * ˵	 ��:  ��Timer�ļ���ֵͨ��DSPʱ��Ƶ��ת��΢��
 * ע	 �⣺ count�ķ�ΧΪ2^32-1
 ************************************************************************/
float TimerCntToUSecond(unsigned int count)                               
{
 	return ( count / (unsigned int)INTER_CLK_US_FREQ);
}

/*************************************************************************
 * �������ƣ� DelayMSec
 * ��	 ��:
 *		timerNum	-ʹ�õ�DSP��timer��		
 *		mSec		-Ҫ�ӳٵĺ���
 * �� �� ֵ:  void
 * ˵	 ��:  ʹ��Timer����΢�뼶���ӳ�
 * ע	 �⣺ mSecӦС��57266ms
 ************************************************************************/
void DelayMSecond(int timerNum , float mSec)                                                  
{
	unsigned int timeStart = 0;
	unsigned int timeCount = 0;
	
	// �ж��Ƿ�ѡ������ȷ��timer��(0\1\2)
	if (timerNum>2 || timerNum<0)
	{
		return;
	}
	
	// ����mSec��������Ҫ�ļ���ֵ
	timeCount = (unsigned int)(mSec * INTER_CLK_MS_FREQ);

	// ����timer
	TimerStart(timerNum);
	timeStart = TIMER_READ(timerNum);
	
	// �ӳٵȴ�
	while ((TIMER_READ(timerNum) - timeStart) < timeCount)
	{
		;
	}
	
	TimerClose(timerNum);
	return;
}
/*************************************************************************
 * �������ƣ� DelayMSec
 * ��	 ��:
 *		timerNum	-ʹ�õ�DSP��timer��		
 *		mSec		-Ҫ�ӳٵĺ���
 * �� �� ֵ:  void
 * ˵	 ��:  ʹ��Timer����΢�뼶���ӳ�
 * ע	 �⣺ mSecӦС��57266ms
 ************************************************************************/
void DelayUSecond(int timerNum , int  uSec)                                                  
{
	unsigned int timeStart = 0;
	unsigned int timeCount = 0;
	
	// �ж��Ƿ�ѡ������ȷ��timer��(0\1\2)
	if (timerNum>2 || timerNum<0)
	{
		return;
	}
	
	// ����mSec��������Ҫ�ļ���ֵ
	timeCount = (unsigned int)(uSec * INTER_CLK_US_FREQ);

	// ����timer
	TimerStart(timerNum);
	timeStart = TIMER_READ(timerNum);
	
	// �ӳٵȴ�
	while ((TIMER_READ(timerNum) - timeStart) < timeCount)
	{
		;
	}
	
	TimerClose(timerNum);
	return;
} 
/*************************************************************************
 * �������ƣ� TimerInterrupt
 * ��	 ��:
 *		timerNum	-ʹ�õ�DSP��timer��		
 *		mSec		-Ҫ�����жϵĺ�����
 * �� �� ֵ:  void
 * ˵	 ��:  ʹ��Timerÿ��mSec�������һ���ж�
 * ע	 �⣺ ֻ��timer1���Բ�����Ӧ���ж�
 ************************************************************************/
void TimerInt_Microsecend(int timerNum, int mSec)
{
	unsigned int timeCount = 0;

   	// �ж��Ƿ�ѡ������ȷ��timer��(0\1\2)
	if (timerNum>2 || timerNum<0)
	{
		return;
	}
	
	// ��ʼ��Timer������CTL��PRD��CNT�Ĵ�����ֵΪ0
	TIMER_RESET(timerNum);
	
	// ����mSec��������Ҫ�ļ���ֵ
	timeCount = (unsigned int)(mSec * INTER_CLK_MS_FREQ);
		
	// ����PRD�Ĵ���ΪtimeCountֵ	
	*(volatile unsigned int *)(TIMER_PERIOD_ADDR(timerNum)) = timeCount;
	
	// ����CTL�Ĵ���������Timer
	*(volatile unsigned int *)(TIMER_CTRL_ADDR(timerNum)) = 
				 (1<<CLKSRC)		// Y_W Timer��ʱ��Դ��1��ʾ�ڲ�ʱ�Ӳ���
				+ (0<<C_P)			// Y_W Timer���Ϊʱ�ӻ�������
				+ (1<<HLD)			// Y_W 1��ʾ���������0��ʾ��ֹ����
				+ (1<<GO); 			// Y_W ��������
	return;	
}

/*************************************************************************
 * �������ƣ� TestTime
 * ��	 ��:
 *		timerNum	-ʹ�õ�DSP��timer��		
 *		mSec		-Ҫ�����жϵĺ�����
 * �� �� ֵ:  void
 * ˵	 ��:  ���ڲ��Ժ������е�ʱ��
 * ע	 �⣺ 
 ************************************************************************/
void TestTime(float *maxTime, float *minTime, float *averTime, void *pFunction())
{
	unsigned int startCnt = 0, endCnt = 0, timeCnt = 0;
	float testTimes[100], total = 0.0;

	*maxTime = 0;
	*minTime = 0xFFFFFFFF;
	
	while (timeCnt<100)
	{
		TimerStart(2);
		startCnt = TIMER_READ(2);		
		
		// ���ܺ���
		*pFunction();
		
		endCnt = TIMER_READ(2);
		testTimes[timeCnt] = TimerCntToUSecond(endCnt - startCnt);
		
		// �������Сֵ
		if(testTimes[timeCnt] > *maxTime)
		{
			*maxTime = testTimes[timeCnt];
		}		
		if(testTimes[timeCnt] < *minTime)
		{
			*minTime = testTimes[timeCnt];
		}
		
		total += testTimes[timeCnt];
		
		timeCnt++;		
	}
	
	*averTime = total / 100;
	
	return;
}
/************************************************************************************************/

#endif
