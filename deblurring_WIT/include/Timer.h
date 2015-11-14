/******************************************************************************
* Copyright (c) 2008,���пƼ���ѧͼ����1008ʵ����
*   by yfj  All rights reserved.
*
* �ļ����ƣ�Timer_Study.h
* �ļ���ʶ��ͷ�ļ�
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

#ifndef _TIMER_H_
#define _TIMER_H_

#include "Regs.h"
/**************************** TIMER REGISTERS *********************************/

#define TIMER_BASE_ADDR 0x01940000			//TIMER0 ����ʼλ��

//������ʱ���ռ����0x40000,����32λ�Ĵ���λ�����0x100000
#define TIMER_CTRL_ADDR(chan) (TIMER_BASE_ADDR + ((chan>>1) * 0x100000) + ((chan) * 0x40000))
#define TIMER_PERIOD_ADDR(chan) (TIMER_BASE_ADDR + ((chan>>1) * 0x100000) + ((chan) * 0x40000) + 4)
#define TIMER_COUNTER_ADDR(chan) (TIMER_BASE_ADDR + ((chan>>1) * 0x100000) + ((chan) * 0x40000) + 8)

//TIMER �ĵ�ַ
#define TIMER0_CTRL_ADDR      TIMER_CTRL_ADDR(0)
#define TIMER0_PERIOD_ADDR    TIMER_PERIOD_ADDR(0)
#define TIMER0_COUNTER_ADDR   TIMER_COUNTER_ADDR(0)

#define TIMER1_CTRL_ADDR      TIMER_CTRL_ADDR(1)
#define TIMER1_PERIOD_ADDR    TIMER_PERIOD_ADDR(1)
#define TIMER1_COUNTER_ADDR   TIMER_COUNTER_ADDR(1)

#define TIMER2_CTRL_ADDR      TIMER_CTRL_ADDR(2)
#define TIMER2_PERIOD_ADDR    TIMER_PERIOD_ADDR(2)
#define TIMER2_COUNTER_ADDR   TIMER_COUNTER_ADDR(2)

//TIMER ��ֵ
#define TIMER0_CTRL     *(volatile unsigned int *)(TIMER0_CTRL_ADDR)
#define TIMER0_PERIOD   *(volatile unsigned int *)(TIMER0_PERIOD_ADDR)
#define TIMER0_COUNTER  *(volatile unsigned int *)(TIMER0_COUNTER_ADDR)

#define TIMER1_CTRL     *(volatile unsigned int *)(TIMER1_CTRL_ADDR)
#define TIMER1_PERIOD   *(volatile unsigned int *)(TIMER1_PERIOD_ADDR)
#define TIMER1_COUNTER  *(volatile unsigned int *)(TIMER1_COUNTER_ADDR)

#define TIMER2_CTRL     *(volatile unsigned int *)(TIMER2_CTRL_ADDR)
#define TIMER2_PERIOD   *(volatile unsigned int *)(TIMER2_PERIOD_ADDR)
#define TIMER2_COUNTER  *(volatile unsigned int *)(TIMER2_COUNTER_ADDR)

/* Timer Control Register Bitfield */
#define FUNC     0					//TOUT �ܽŹ���:
#define INVOUT   1					//TOUT ��ս����
#define DATOUT   2					//�������
#define DATIN    3					//��������
#define PWID     4					//
#define GO       6					//���ü�������������������
#define HLD      7					//����������:(0ֹͣ���������ֵ�ǰ 1׼�����)
#define C_P      8					//ʱ��/����ģʽ:(0ʱ��  1����)
#define CLKSRC   9					//��ʱ������ʱ��Դ
#define INVINP   10					//��ʱ��ת��������
#define TSTAT    11					//��ʱ��״̬

#define TIMER_PULSE_MODE     0		//����ģʽ
#define TIMER_CLOCK_MODE     1		//ʱ��ģʽ

/*---------------------------------------------------------------------------*/
/* TIMER_RESET - reset timer to conditions defined by device reset           */
/*---------------------------------------------------------------------------*/
#define TIMER_RESET(chan) \
        { 	(*(unsigned int *)(TIMER_CTRL_ADDR(chan)) = 0);       \
          (*(unsigned int *)(TIMER_PERIOD_ADDR(chan)) = 0);     \
          (*(unsigned int *)(TIMER_COUNTER_ADDR(chan)) = 0);    \
        }

/*---------------------------------------------------------------------------*/
/* TIMER_INIT - initialize timer registers    ��ʼ��                         */
/*---------------------------------------------------------------------------*/
#define TIMER_INIT(chan,ctrl,per,cnt) \
        { (*(unsigned int *)(TIMER_CTRL_ADDR(chan))    = ctrl); \
          (*(unsigned int *)(TIMER_PERIOD_ADDR(chan))  = per);  \
          (*(unsigned int *)(TIMER_COUNTER_ADDR(chan)) = cnt);  \
        }

/*---------------------------------------------------------------------------*/
/* TIMER_START - Sets both GO and HOLD bits in Timer Control Register which  */
/*               resets the Timer Counter Register and enables counting on   */
/*               on the next clock.  (GO bit autoclears)				     */
/*---------------------------------------------------------------------------*/
#define TIMER_START(chan) \
        REG_WRITE(TIMER_CTRL_ADDR(chan),(REG_READ(TIMER_CTRL_ADDR(chan)) | 0xc0))

/*---------------------------------------------------------------------------*/
/* TIMER_STOP - Asserts (clears) the HOLD bit in the Timer Control Register  */
/*---------------------------------------------------------------------------*/
#define TIMER_STOP(chan) \
        RESET_BIT(TIMER_CTRL_ADDR(chan),HLD)

/*---------------------------------------------------------------------------*/
/* TIMER_RESUME - Negates (sets) the HOLD bit to resume counting without     */
/*                resetting the counter register                             */
/*---------------------------------------------------------------------------*/
#define TIMER_RESUME(chan) \
        SET_BIT(TIMER_CTRL_ADDR(chan),HLD)

/*---------------------------------------------------------------------------*/
/* TIMER_READ - reads value of Timer Counter Register                      */
/*---------------------------------------------------------------------------*/
#define TIMER_READ(chan) \
        (REG_READ(TIMER_COUNTER_ADDR(chan)))

/*---------------------------------------------------------------------------*/
/* TIMER_GET_COUNT - reads value of Timer Counter Register                   */
/*---------------------------------------------------------------------------*/
#define TIMER_GET_COUNT(chan) \
        (REG_READ(TIMER_COUNTER_ADDR(chan)))

/*---------------------------------------------------------------------------*/
/* TIMER_SET_COUNT - reads value of Timer Counter Register                   */
/*---------------------------------------------------------------------------*/
#define TIMER_SET_COUNT(chan,val) \
        (REG_WRITE(TIMER_COUNTER_ADDR(chan),val))
/*---------------------------------------------------------------------------*/

//
/*---------------------------------------------------------------------------*/
/* TIMER_MODE_SELECT - selects between PULSE and CLOCK modes                 */
/*---------------------------------------------------------------------------*/
#define TIMER_MODE_SELECT(chan,mode) \
        (mode == TIMER_CLOCK_MODE) ? SET_BIT(TIMER_CTRL_ADDR(chan),C_P) \
         RESET_BIT(TIMER_CTRL_ADDR(chan),C_P)

/*---------------------------------------------------------------------------*/
/* TIMER_CLK_INTERNAL - sets CLKSRC to select CPU clock/8 as timer clock     */
/*---------------------------------------------------------------------------*/
#define TIMER_CLK_INTERNAL(chan) \
        SET_BIT(TIMER_CTRL_ADDR(chan),CLKSRC)

/*---------------------------------------------------------------------------*/
/* TIMER_CLK_EXTERNAL - clears CLKSRC to select TINP as timer clock          */
/*---------------------------------------------------------------------------*/
#define TIMER_CLK_EXTERNAL(chan) \
        RESET_BIT(TIMER_CTRL_ADDR(chan),CLKSRC)

/*---------------------------------------------------------------------------*/
/* TOUT_ENABLE - configures TOUT as general purpose output pin.              */
/*                                                                           */
/*---------------------------------------------------------------------------*/
#define TOUT_ENABLE(chan) \
        RESET_BIT(TIMER_CTRL_ADDR(chan),FUNC)

/*---------------------------------------------------------------------------*/
/* TOUT_DISABLE - configures TOUT as a timer pin; reflects value of TSTAT    */
/*                conditioned by INVOUT                                      */
/*---------------------------------------------------------------------------*/
#define TOUT_DISABLE(chan) \
        SET_BIT(TIMER_CTRL_ADDR(chan),FUNC)

/*---------------------------------------------------------------------------*/
/* TOUT_VAL - assigns val to TOUT pin when TOUT is enabled as general purpose*/
/*            output                                                         */
/*---------------------------------------------------------------------------*/
#define TOUT_VAL(chan,val) \
        ASSIGN_BIT_VAL(TIMER_CTRL_ADDR(chan),DATOUT,val)

/*---------------------------------------------------------------------------*/
/* TOUT_ASSERT - assigns 1 to TOUT pin when TOUT is enabled as general       */
/*               purpose output                                              */
/*---------------------------------------------------------------------------*/
#define TOUT_ASSERT(chan) \
        SET_BIT(TIMER_CTRL_ADDR(chan),DATOUT)

/*---------------------------------------------------------------------------*/
/* TOUT_NEGATE - assigns 0 to TOUT pin when TOUT is enabled as general       */
/*            purpose output                                                 */
/*---------------------------------------------------------------------------*/
#define TOUT_NEGATE(chan) \
        RESET_BIT(TIMER_CTRL_ADDR(chan),DATOUT)

/*---------------------------------------------------------------------------*/
/* TINP_GET - returns value on TINP input pin                                */
/*---------------------------------------------------------------------------*/
#define TINP_GET(chan) \
        GET_BIT(TIMER_CTRL_ADDR(chan),DATIN)

/*---------------------------------------------------------------------------*/
/* TIMER_AVAILABLE - checks timer for availability; returns TRUE or FALSE    */
/*---------------------------------------------------------------------------*/
#define TIMER_AVAILABLE(chan) \
        (GET_BIT(TIMER_CTRL_ADDR(chan),HLD) ? 0 : 1)

/*---------------------------------------------------------------------------*/
/* TIMER_SET_PERIOD - sets value of Timer Period Register                    */
/*---------------------------------------------------------------------------*/
#define TIMER_SET_PERIOD(chan,val) \
        (REG_WRITE(TIMER_PERIOD_ADDR(chan),val))

/*---------------------------------------------------------------------------*/
/* TIMER_GET_PERIOD - returns value of Timer Period Register                 */
/*---------------------------------------------------------------------------*/
#define TIMER_GET_PERIOD(chan) \
        (REG_READ(TIMER_PERIOD_ADDR(chan)))

/*---------------------------------------------------------------------------*/
/* TIMER_GET_TSTAT - returns value of TSTAT bit in Timer Ctrl Register       */
/*---------------------------------------------------------------------------*/
#define TIMER_GET_TSTAT(chan) \
        (GET_BIT(TIMER_CTRL_ADDR(chan),TSTAT))

#define TIMER_PAUSE(chan) \
	TIMER_STOP(chan)
	

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES                                                           */
/*----------------------------------------------------------------------------*/
typedef   struct
{
   unsigned int 
              Control,
              Period,
              Counter;
}
TIMER_REG ;


// Internal clock source frequence for C64x when CPU clock at 600MHz	
#define INTER_CLK_S_FREQ  (600 * 1000 * 1000 / 8)	// 1s��ʱ��Ƶ��
#define INTER_CLK_US_FREQ  (600 / 8)				// 1us��ʱ��Ƶ��
#define INTER_CLK_MS_FREQ  (600 * 1000 / 8)			// 1ms��ʱ��Ƶ��

// ����ʱ�ӽ��ĵ�����
#define US_PER_TICK		1000	// Number of microseconds per tick.
#define CYCLES_PER_TICK 	(Internal_CLK_F/1000000)*US_PER_TICK


/* ���ܺ������� */

// ����Timer
void TimerStart(int timerNum);

// �ر�Timer
void TimerClose(int timerNum);

// ��Timer����ֵת��Ϊ΢��
float TimerCntToUSecond(unsigned int count);

// ʹ��Timer�����ӳ�
void DelayMSecond(int timerNum , float mSec);

// ʹ��Timer�����ӳ�
void DelayUSecond(int timerNum , int  uSec); 
// ʹ��Timer�����ж�
void TimerInt_Microsecend(int timerNum, int mSec);

//����pFunction()��Ҫ�õ�ʱ��
void TestTime(float *maxTime, float *minTime, float *averTime, void *pFunction());

#endif

/************************************************************************************************/




