#ifndef _TIMER_C_
#define _TIMER_C_

/******************************************************************************
* Copyright (c) 2008,华中科技大学图像所1008实验室
*   by yfj  All rights reserved.
*
* 文件名称：Timer_Study.c
* 文件标识：源文件
* 摘 要：关于TMS320C6414的定时器Timer的常见的配置以及操作
*
* 当前版本：1.1
* 作 者：阳丰俊
* 完成日期：2008年12月20日
*
* 取代版本：1.0
* 原作者 ：贺永刚
* 完成日期：2008年5月10日
******************************************************************************/
#include "Timer.h"
/*************************************************************************
 * 函数名称： TimerStart
 * 参	 数:
 *		timerNum		-使用的DSP的timer号
 * 返 回 值:  void
 * 说	 明:  启动Timer，使用内部时钟
 * 注	 意：
 ************************************************************************/
void TimerStart(int timerNum)
{
	// 初始化Timer，即置CTL、PRD、CNT寄存器的值为0
	TIMER_RESET(timerNum);
	
	// 配置PRD寄存器为最大值，2e32-1	
	*(volatile unsigned int *)(TIMER_PERIOD_ADDR(timerNum))  = 0xFFFFFFFF;
	
	// 配置CTL寄存器，启动Timer
	*(volatile unsigned int *)(TIMER_CTRL_ADDR(timerNum)) = 
				(0<<TSTAT)			// N_R 指示Timer的状态
				+ (1<<CLKSRC)		// Y_W Timer的时钟源，1表示内部时钟产生
				+ (0<<C_P)			// Y_W Timer输出为时钟还是脉冲
				+ (1<<HLD)			// Y_W 1表示允许计数，0表示禁止计数
				+ (1<<GO) 			// Y_W 启动计数
			 	+ (0<<PWID);		// N_W 定义脉冲宽度
	return;				
}


/*************************************************************************
 * 函数名称： TimerClose
 * 参	 数:
 *		timerNum		-使用的DSP的timer号
 * 返 回 值:  void
 * 说	 明:  关闭Timer
 * 注	 意：
 ************************************************************************/
void TimerClose(int timerNum)
{
	// 配置CTL寄存器，启动Timer
	*(volatile unsigned int *)(TIMER_CTRL_ADDR(timerNum)) = 
				  (0<<HLD)			// Y_W 1表示允许计数，0表示禁止计数
				+ (0<<GO); 			// Y_W 关闭计数
	return;				
}

/*************************************************************************
 * 函数名称： TimerCntToUs
 * 参	 数:
 *		count		-计数值
 * 返 回 值:  float
 * 说	 明:  将Timer的计数值通过DSP时钟频率转化微秒
 * 注	 意： count的范围为2^32-1
 ************************************************************************/
float TimerCntToUSecond(unsigned int count)                               
{
 	return ( count / (unsigned int)INTER_CLK_US_FREQ);
}

/*************************************************************************
 * 函数名称： DelayMSec
 * 参	 数:
 *		timerNum	-使用的DSP的timer号		
 *		mSec		-要延迟的毫秒
 * 返 回 值:  void
 * 说	 明:  使用Timer进行微秒级的延迟
 * 注	 意： mSec应小于57266ms
 ************************************************************************/
void DelayMSecond(int timerNum , float mSec)                                                  
{
	unsigned int timeStart = 0;
	unsigned int timeCount = 0;
	
	// 判断是否选择了正确的timer号(0\1\2)
	if (timerNum>2 || timerNum<0)
	{
		return;
	}
	
	// 计算mSec毫秒下需要的计数值
	timeCount = (unsigned int)(mSec * INTER_CLK_MS_FREQ);

	// 启动timer
	TimerStart(timerNum);
	timeStart = TIMER_READ(timerNum);
	
	// 延迟等待
	while ((TIMER_READ(timerNum) - timeStart) < timeCount)
	{
		;
	}
	
	TimerClose(timerNum);
	return;
}
/*************************************************************************
 * 函数名称： DelayMSec
 * 参	 数:
 *		timerNum	-使用的DSP的timer号		
 *		mSec		-要延迟的毫秒
 * 返 回 值:  void
 * 说	 明:  使用Timer进行微秒级的延迟
 * 注	 意： mSec应小于57266ms
 ************************************************************************/
void DelayUSecond(int timerNum , int  uSec)                                                  
{
	unsigned int timeStart = 0;
	unsigned int timeCount = 0;
	
	// 判断是否选择了正确的timer号(0\1\2)
	if (timerNum>2 || timerNum<0)
	{
		return;
	}
	
	// 计算mSec毫秒下需要的计数值
	timeCount = (unsigned int)(uSec * INTER_CLK_US_FREQ);

	// 启动timer
	TimerStart(timerNum);
	timeStart = TIMER_READ(timerNum);
	
	// 延迟等待
	while ((TIMER_READ(timerNum) - timeStart) < timeCount)
	{
		;
	}
	
	TimerClose(timerNum);
	return;
} 
/*************************************************************************
 * 函数名称： TimerInterrupt
 * 参	 数:
 *		timerNum	-使用的DSP的timer号		
 *		mSec		-要产生中断的毫秒间隔
 * 返 回 值:  void
 * 说	 明:  使用Timer每隔mSec毫秒产生一个中断
 * 注	 意： 只有timer1可以产生相应的中断
 ************************************************************************/
void TimerInt_Microsecend(int timerNum, int mSec)
{
	unsigned int timeCount = 0;

   	// 判断是否选择了正确的timer号(0\1\2)
	if (timerNum>2 || timerNum<0)
	{
		return;
	}
	
	// 初始化Timer，即置CTL、PRD、CNT寄存器的值为0
	TIMER_RESET(timerNum);
	
	// 计算mSec毫秒下需要的计数值
	timeCount = (unsigned int)(mSec * INTER_CLK_MS_FREQ);
		
	// 配置PRD寄存器为timeCount值	
	*(volatile unsigned int *)(TIMER_PERIOD_ADDR(timerNum)) = timeCount;
	
	// 配置CTL寄存器，启动Timer
	*(volatile unsigned int *)(TIMER_CTRL_ADDR(timerNum)) = 
				 (1<<CLKSRC)		// Y_W Timer的时钟源，1表示内部时钟产生
				+ (0<<C_P)			// Y_W Timer输出为时钟还是脉冲
				+ (1<<HLD)			// Y_W 1表示允许计数，0表示禁止计数
				+ (1<<GO); 			// Y_W 启动计数
	return;	
}

/*************************************************************************
 * 函数名称： TestTime
 * 参	 数:
 *		timerNum	-使用的DSP的timer号		
 *		mSec		-要产生中断的毫秒间隔
 * 返 回 值:  void
 * 说	 明:  用于测试函数运行的时间
 * 注	 意： 
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
		
		// 功能函数
		*pFunction();
		
		endCnt = TIMER_READ(2);
		testTimes[timeCnt] = TimerCntToUSecond(endCnt - startCnt);
		
		// 求最大最小值
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
