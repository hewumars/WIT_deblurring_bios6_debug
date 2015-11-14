/*
 * dma_ping_pong_test.c
 *
 * EDMA3 ping-pong buffers based data copy test case, using a DMA and a link
 * channel.
 *
 * Copyright (C) 2009 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/

#include "sample.h"

/** Test Case Description **/
/**
 * ���������󻺴棬��СΪ(PING_PONG_NUM_COLUMNS * PING_PONG_NUM_ROWS)������DDR�У�����ΪpingpongSrcBuf��pingpongDestBuf��
 * ����������С���棬��СΪ(PING_PONG_L1D_BUFFER_SIZE)������L1D�У�����Ϊping�����pong���档
 * ��pingpongSrcBuf����ΪPING_PONG_L1D_BUFFER_SIZE��С�Ŀ顣ʹ��EDMA3�������ݴ�pingpongSrcBuf���䵽ping����pong���档
 * ʹ��ping-pong�����߼��Ͽ���ʵ��DSP��һ�ߴ������ݣ�EDMA3һ��ΪDSP�˰������ݡ�����EDMA3��DSP����ʹ��ping��pong���档
 * ���⣬Ϊ��ģ��DSP�������ݵ���ʵ�������Ҵ�ping/pong���渴�����ݵ�pingpongDestBuf��
 * ��󣬱Ƚ�pingpongSrcBuf��pingpongDestBuf����㷨�Ƿ���������
 */
/**
 * ���� in the bigger source buffer.
 */
#define PING_PONG_NUM_COLUMNS           (72u)

/**
 * ���� in the bigger source buffer.
 */
#define PING_PONG_NUM_ROWS                (48u)

/* ACNT ��������*/
#define PING_PONG_ACNT                          PING_PONG_NUM_COLUMNS
/* BCNT ����һ���Դ�������� */
#define PING_PONG_BCNT                          (8u)
/* CCNT ����1 */
#define PING_PONG_CCNT                          (1u)

/* DMA�������� */
#define PING_PONG_NUM_TRIGGERS           (PING_PONG_NUM_ROWS/PING_PONG_BCNT)

/* DDR�д󻺴�Ĵ�С */
#define PING_PONG_DDR_BUFFER_SIZE     (PING_PONG_NUM_COLUMNS*PING_PONG_NUM_ROWS)
/* IRAM��С����Ĵ�С */
#define PING_PONG_L1D_BUFFER_SIZE     (PING_PONG_ACNT*PING_PONG_BCNT)


/* pingpongSrcBuf��Դ��ַ�� */
#ifdef EDMA3_ENABLE_DCACHE
/* Cache line aligned big source buffer. */
/**
 * The DATA_ALIGN pragma aligns the symbol to an alignment boundary. The
 * alignment boundary is the maximum of the symbol�s default alignment value
 * or the value of the constant in bytes. The constant must be a power of 2.
 * The syntax of the pragma in C is:
 * #pragma DATA_ALIGN (symbol, constant);
 */
#pragma DATA_ALIGN(_pingpongSrcBuf, EDMA3_CACHE_LINE_SIZE_IN_BYTES);
#endif  /* #ifdef EDMA3_ENABLE_DCACHE */
#pragma DATA_SECTION(_pingpongSrcBuf, ".my_sect_ddr");
signed char _pingpongSrcBuf[PING_PONG_DDR_BUFFER_SIZE];


/**
 * pingpongDestBuf��Ŀ���ַ����
 * ������������L1D ping/pong��������ݣ����������Ч�ԡ�
 */
#ifdef EDMA3_ENABLE_DCACHE
/* Cache line aligned big destination buffer. */
/**
 * The DATA_ALIGN pragma aligns the symbol to an alignment boundary. The
 * alignment boundary is the maximum of the symbol�s default alignment value
 * or the value of the constant in bytes. The constant must be a power of 2.
 * The syntax of the pragma in C is:
 * #pragma DATA_ALIGN (symbol, constant);
 */
#pragma DATA_ALIGN(_pingpongDestBuf, EDMA3_CACHE_LINE_SIZE_IN_BYTES);
#endif  /* #ifdef EDMA3_ENABLE_DCACHE */
#pragma DATA_SECTION(_pingpongDestBuf, ".my_sect_ddr");
signed char _pingpongDestBuf[PING_PONG_DDR_BUFFER_SIZE];


/* Ŀ�껺����IRAM�� */
#ifdef EDMA3_ENABLE_DCACHE
/* cache�ж���--Ŀ�껺��1 ������Ping����. */
/**
 * The DATA_ALIGN pragma aligns the symbol to an alignment boundary. The
 * alignment boundary is the maximum of the symbol�s default alignment value
 * or the value of the constant in bytes. The constant must be a power of 2.
 * The syntax of the pragma in C is:
 * #pragma DATA_ALIGN (symbol, constant);
 */
#pragma DATA_ALIGN(_dstL1DBuff1, EDMA3_CACHE_LINE_SIZE_IN_BYTES);
#endif  /* #ifdef EDMA3_ENABLE_DCACHE */
#ifdef __TMS470__
    #pragma DATA_SECTION(_dstL1DBuff1, ".my_sect_ddr");
#else
    #pragma DATA_SECTION(_dstL1DBuff1, ".my_sect_iram");
#endif
signed char _dstL1DBuff1[PING_PONG_L1D_BUFFER_SIZE];

#ifdef EDMA3_ENABLE_DCACHE
/* cache�ж���--Ŀ�껺��2 ������Pong����. */
/**
 * The DATA_ALIGN pragma aligns the symbol to an alignment boundary. The
 * alignment boundary is the maximum of the symbol�s default alignment value
 * or the value of the constant in bytes. The constant must be a power of 2.
 * The syntax of the pragma in C is:
 * #pragma DATA_ALIGN (symbol, constant);
 */
#pragma DATA_ALIGN(_dstL1DBuff2, EDMA3_CACHE_LINE_SIZE_IN_BYTES);
#endif  /* #ifdef EDMA3_ENABLE_DCACHE */
#ifdef __TMS470__
    #pragma DATA_SECTION(_dstL1DBuff2, ".my_sect_ddr");
#else
    #pragma DATA_SECTION(_dstL1DBuff2, ".my_sect_iram");
#endif
signed char _dstL1DBuff2[PING_PONG_L1D_BUFFER_SIZE];

/* ���л����ָ�붨�� */
signed char *pingpongSrcBuf;
signed char *pingpongDestBuf;
signed char *pingpongSrcBufCopy;
signed char *pingpongDestBufCopy;

signed char *dstL1DBuff1;
signed char *dstL1DBuff2;

/** �����ڴ渴�ƺ��� */
extern void edma3MemCpy(void *dst, const void *src, unsigned int len);

EDMA3_DRV_Result process_ping_pong_buffer(unsigned short buff_id)
{
    EDMA3_DRV_Result result = EDMA3_DRV_SOK;

    /**
     * ʹ��CPU����L1D��ping-pong���������ݵ�DDR��
     * ����һ������Ĵ������
     */
    if (buff_id == 1u)
        {
        /* ����pong���� */

        /* ���ʹ����cache�������ǵ�ǰcache��Ч, ����CPU����cache�������� */
        /**
         * ����ping/pong������IRAM�У�û�б�Ҫʹ������Ч�������������DDR�У�Ҫʹ������Ч��
         */
#ifdef EDMA3_ENABLE_DCACHE
        
        if (result == EDMA3_DRV_SOK)
            {
            result = Edma3_CacheInvalidate((unsigned int)dstL1DBuff2,
                                                PING_PONG_L1D_BUFFER_SIZE);
            }
        
#endif  /* EDMA3_ENABLE_DCACHE */

        if (result == EDMA3_DRV_SOK)
            {
            edma3MemCpy((void *)(pingpongDestBufCopy),
                                (const void *)(dstL1DBuff2),
                                PING_PONG_L1D_BUFFER_SIZE);
            }
        }
    else
        {
        /* ����ping���� */

        /* ���ʹ����cache�������ǵ�ǰcache��Ч, ����CPU����cache�������� ��*/
#ifdef EDMA3_ENABLE_DCACHE
        
        if (result == EDMA3_DRV_SOK)
            {
            result = Edma3_CacheInvalidate((unsigned int)dstL1DBuff1,
                                                PING_PONG_L1D_BUFFER_SIZE);
            }
        
#endif  /* EDMA3_ENABLE_DCACHE */

        if (result == EDMA3_DRV_SOK)
            {
            edma3MemCpy((void *)(pingpongDestBufCopy),
                                (const void *)(dstL1DBuff1),
                                PING_PONG_L1D_BUFFER_SIZE);
            }
        }

    /* ����ָ�� */
    pingpongDestBufCopy += PING_PONG_L1D_BUFFER_SIZE;

    return result;
}


/**
 *  \brief   EDMA3 ping-pong based data copy test case, using a DMA and
 *              a link channel.
 *
 *  \return  EDMA3_DRV_SOK or EDMA3_DRV Error Code
 */
EDMA3_DRV_Result edma3_test_ping_pong_mode(EDMA3_DRV_Handle hEdma)
    {
    EDMA3_DRV_Result result = EDMA3_DRV_SOK;
    EDMA3_DRV_PaRAMRegs paramSet = {0,0,0,0,0,0,0,0,0,0,0,0};
    /* һ����ͨ�� */
    unsigned int chId = 0;
    /* ��������ͨ�� */
    unsigned int lChId1 = 0;
    unsigned int lChId2 = 0;
    unsigned int tcc = 0;
    int i;
    unsigned int count;
    unsigned int Istestpassed = 0u;
    unsigned int BRCnt = 0;
    int srcbidx = 0, desbidx = 0;
    int srccidx = 0, descidx = 0;
    /* PaRAM����� */
    unsigned int phyaddress = 0;
    EDMA3_DRV_ParamentryRegs *param_handle = NULL;
    /* EDMA3�������� */
    unsigned int numenabled = PING_PONG_NUM_TRIGGERS;

    pingpongSrcBuf = (signed char*)GLOBAL_ADDR(_pingpongSrcBuf);
    pingpongDestBuf = (signed char*)GLOBAL_ADDR(_pingpongDestBuf);
    pingpongSrcBufCopy = pingpongSrcBuf;
    pingpongDestBufCopy = pingpongDestBuf;
    dstL1DBuff1 = (signed char*)GLOBAL_ADDR(_dstL1DBuff1);
    dstL1DBuff2 = (signed char*)GLOBAL_ADDR(_dstL1DBuff2);


    /* ��ʼ��PING_PONG_DDR_BUFFER_SIZE��С��pingpongSrcBuf����*/
    for (count = 0u; count < PING_PONG_DDR_BUFFER_SIZE; count++)
        {
        pingpongSrcBuf[count] = (count % 0xFF);
        }


#ifdef EDMA3_ENABLE_DCACHE
    /*
    * Note: These functions are required if the buffer is in DDR.
    * For other cases, where buffer is NOT in DDR, user
    * may or may not require the below functions.
    */
    /* Flush the Source Buffer */
    if (result == EDMA3_DRV_SOK)
        {
        result = Edma3_CacheFlush((unsigned int)pingpongSrcBuf, PING_PONG_DDR_BUFFER_SIZE);
        }

    /* Invalidate the Destination Buffers */
    if (result == EDMA3_DRV_SOK)
        {
        result = Edma3_CacheInvalidate((unsigned int)pingpongDestBuf, PING_PONG_DDR_BUFFER_SIZE);
        }

    /**
     * Since the ping/pong buffers are in IRAM, there is no need of invalidating
     * them. If they are in DDR, invalidate them.
     */


    if (result == EDMA3_DRV_SOK)
        {
        result = Edma3_CacheInvalidate((unsigned int)dstL1DBuff1, PING_PONG_L1D_BUFFER_SIZE);
        }
    if (result == EDMA3_DRV_SOK)
        {
        result = Edma3_CacheInvalidate((unsigned int)dstL1DBuff2, PING_PONG_L1D_BUFFER_SIZE);
        }

#endif  /* EDMA3_ENABLE_DCACHE */


    /* Set B count reload as B count. */
    BRCnt = PING_PONG_BCNT;

    /* Setting up the SRC/DES Index */
    srcbidx = (int)PING_PONG_ACNT;
    desbidx = (int)PING_PONG_ACNT;

    /* AB Sync Transfer Mode */
    srccidx = ((int)PING_PONG_ACNT * (int)PING_PONG_BCNT);
    descidx = ((int)PING_PONG_ACNT * (int)PING_PONG_BCNT);

    /* Setup for DMA Channel 1*/
    tcc = EDMA3_DRV_TCC_ANY;
    chId = EDMA3_DRV_DMA_CHANNEL_ANY;

    /* Request any DMA channel and any TCC */
    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_requestChannel (hEdma, &chId, &tcc,
                                            (EDMA3_RM_EventQueue)0,
                                            &callback1, NULL);
        }

    /* ����ɹ�����������linkͨ�� */
    if (result == EDMA3_DRV_SOK)
        {
        lChId1 = EDMA3_DRV_LINK_CHANNEL;
        lChId2 = EDMA3_DRV_LINK_CHANNEL;

        result = (
                    (EDMA3_DRV_requestChannel (hEdma, &lChId1, NULL,
                                            (EDMA3_RM_EventQueue)0,
                                            &callback1, NULL))
                    ||
                    (EDMA3_DRV_requestChannel (hEdma, &lChId2, NULL,
                                            (EDMA3_RM_EventQueue)0,
                                            &callback1, NULL))
                    );
        }


    /**
     * ���ݴ����ض���ϢΪ���ͨ�����PaRAM��
     */
    if (result == EDMA3_DRV_SOK)
        {
        paramSet.srcBIdx    = srcbidx;
        paramSet.destBIdx   = desbidx;
        paramSet.srcCIdx    = srccidx;
        paramSet.destCIdx   = descidx;

        paramSet.aCnt       = PING_PONG_ACNT;
        paramSet.bCnt       = PING_PONG_BCNT;
        paramSet.cCnt       = PING_PONG_CCNT;

        /* For AB-synchronized transfers, BCNTRLD is not used. */
        paramSet.bCntReload = BRCnt;

        /* Src & Dest are in INCR modes */
        paramSet.opt &= 0xFFFFFFFCu;
        /* Program the TCC */
        paramSet.opt |= ((tcc << OPT_TCC_SHIFT) & OPT_TCC_MASK);

        /* Enable Intermediate & Final transfer completion interrupt */
        paramSet.opt |= (1 << OPT_ITCINTEN_SHIFT);
        paramSet.opt |= (1 << OPT_TCINTEN_SHIFT);

        /* AB Sync Transfer Mode */
        paramSet.opt |= (1 << OPT_SYNCDIM_SHIFT);


        /* ������DMAͨ����Դ��ַ��Ŀ���ַ
         * Դ��ַ��DDR��pingpongSrcBuf
         * Ŀ���ַ��L1D��dstL1DBuff1
         * */
        paramSet.srcAddr    = (unsigned int)(pingpongSrcBuf);
        paramSet.destAddr   = (unsigned int)(dstL1DBuff1);


        /* PaRAM����--����д����DMAͨ�� --��Ŀ���ַ��ping�����ַ��*/
        result = EDMA3_DRV_setPaRAM(hEdma, chId, &paramSet);
        }


    /* �����DMAͨ��д�ɹ�, дͬ����PaRAM��������һ��linkͨ��--��Ŀ���ַ��ping�����ַ�� */
    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_setPaRAM(hEdma, lChId1, &paramSet);
        }


    /* �޸�Ŀ���ַ(L1D�е�pong�����ַ)��Ȼ��PaRAM����д��ڶ���linkͨ��*/
    if (result == EDMA3_DRV_SOK)
        {
        paramSet.destAddr   = (unsigned int)(dstL1DBuff2);

        result = EDMA3_DRV_setPaRAM(hEdma, lChId2, &paramSet);
        }
      printf("paramSet.opt == %d \n",paramSet.opt);


    /**
     * ����ͨ���������ã���
     * Master DMA channel is linked to IInd Link channel.
     * IInd Link channel is linked to Ist Link channel.
     * Ist Link channel is again linked to IInd Link channel.
     */
    if (result == EDMA3_DRV_SOK)
        {
        result = (
                    (EDMA3_DRV_linkChannel (hEdma, chId, lChId2))
                    ||
                    (EDMA3_DRV_linkChannel (hEdma, lChId2, lChId1))
                    ||
                    (EDMA3_DRV_linkChannel (hEdma, lChId1, lChId2))
                    );
        }

    /**
     *����������DMAͨ��PaRAM�����������Ժ����ڿ����޸ĵ�Դ��ַ��
     */
    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_getPaRAMPhyAddr(hEdma, chId, &phyaddress);
        }

    /*ping-pong�������̣�
    - Algorithm used in the ping pong copy:
    1. Application starts EDMA of first image stripe into ping buffer in L1D.
    2. Application waits for ping EDMA to finish.
    3. Application starts EDMA of next image stripe into pong buffer in L1D.
    4. Application starts processing ping buffer.
    5. Application waits for pong EDMA to finish.
    6. Application starts EDMA of next image stripe into ping buffer in L1D.
    7. Application starts processing pong buffer.
    8. Repeat from step 3, until image exhausted.
    - EDMA re-programming should be minimized to reduce overhead (PaRAM
        accesses via slow config bus), i.e. use 2 reload PaRAM entries, and
        only change src address fields.
    */

    if (result == EDMA3_DRV_SOK)
        {
        irqRaised1 = 0;
        /* Param address successfully fetched. */
        param_handle = (EDMA3_DRV_ParamentryRegs *)phyaddress;

        /* Step 1 ����һ�����ݿ��DDR����L1D ping����*/
        result = EDMA3_DRV_enableTransfer (hEdma, chId,
                                            EDMA3_DRV_TRIG_MODE_MANUAL);
        /**
         * Every time a transfer is triggered, numenabled is decremented.
         */
        numenabled--;

        /**
         * Every time a transfer is triggered, pingpongSrcBufCopy is
         * incremented to point it to correct source address.
         * ָ����һ�����ݿ�((72u)*(8u))�����ݵĴ�СΪ((72u)*(48u))��Ҫ��6�Ρ�
         */
        pingpongSrcBufCopy += PING_PONG_L1D_BUFFER_SIZE;
        }


    if (result == EDMA3_DRV_SOK)
        {
        /* Need to activate next param till numenabled is exhausted. */
        for (i = 0; numenabled; i++)//�ظ��ֶ�����6�Σ�Step 2--Step 7��ֱ�����ݺľ�
            {
            /* Step 2 �ȴ�ping����EDMA����*/
            /* Wait for the Completion ISR. */
            while (irqRaised1 == 0u)
                {
                /* Wait for the Completion ISR. */
                printf ("waiting for interrupt...\n");
                }

            irqRaised1 = 0;

            /*
             * �޸�DDR��Դ��ַ��PaRAM���������ص���DMAͨ����Ȼ�󴥷����䡣
             */
            param_handle->SRC = (unsigned int)pingpongSrcBufCopy;

            /* Step 3 ���ڶ������ݿ��DDR����L1D pong����*/
            result = EDMA3_DRV_enableTransfer (hEdma, chId,
                                                EDMA3_DRV_TRIG_MODE_MANUAL);

            /**
             * ÿ���һ�δ��䣬�ֶ�����������һ
             */
            numenabled--;

            /**
             * Every time a transfer is triggered, pingpongSrcBufCopy is
             * incremented to point it to correct source address.
             * ָ����һ�����ݿ�((72u)*(8u))�����ݵĴ�СΪ((72u)*(48u))��Ҫ��6�Ρ�
             */
            pingpongSrcBufCopy += PING_PONG_L1D_BUFFER_SIZE;

            if (result != EDMA3_DRV_SOK)
                {
#ifdef EDMA3_DRV_DEBUG
                EDMA3_DRV_PRINTF ("edma3_test_ping_pong_mode: EDMA3_DRV_enableTransfer " \
                                    "Failed, error code: %d\r\n", result);
#endif  /* EDMA3_DRV_DEBUG */
                break;
                }

            /**
             * Step 4, copy the ping buffer to the dest buffer in
             * DDR (using CPU), as a part of processing.
             * ����ping���棬����ping�������ݴ��䵽DDRĿ���ַ��dstL1DBuff1����pingpongDestBufCopy��
             */
            result = process_ping_pong_buffer(0u);
            if (result != EDMA3_DRV_SOK)
                {
#ifdef EDMA3_DRV_DEBUG
                EDMA3_DRV_PRINTF ("edma3_test_ping_pong_mode: process_ping_pong_buffer " \
                                    "Failed, error code: %d\r\n", result);
#endif  /* EDMA3_DRV_DEBUG */
                break;
                }


            /* Step 5 �ȴ�pong����EDMA����*/
            /* Wait for the Completion ISR. */
            while (irqRaised1 == 0u)
                {
                /* Wait for the Completion ISR. */
                printf ("waiting for interrupt...\n");
                }

            /* Check the status of the completed transfer */
            if (irqRaised1 < 0)
                {
                /* Some error occured, break from the FOR loop. */
#ifdef EDMA3_DRV_DEBUG
                EDMA3_DRV_PRINTF ("\r\nedma3_test: Event Miss Occured!!!\r\n");
#endif  /* EDMA3_DRV_DEBUG */

                /* Clear the error bits first */
                result = EDMA3_DRV_clearErrorBits (hEdma, chId);
                break;
                }


            /**
             * Last row will be transferred by the Pong buffer.
             * So this step should be jumped over.
             * Check for that...
             */
            if (numenabled)
                {
                irqRaised1 = 0;

                /* Step 6 �����������ݿ����L1D ping����*/
                /*
                 * Now modify the source buffer in the param set
                 * again and trigger the transfer...
                 */
                param_handle->SRC = (unsigned int)pingpongSrcBufCopy;

                result = EDMA3_DRV_enableTransfer (hEdma, chId,
                                                    EDMA3_DRV_TRIG_MODE_MANUAL);
                /**
                 * Every time a transfer is triggered, numenabled is decremented.
                 */
                numenabled--;

                /**
                 * Every time a transfer is triggered, pingpongSrcBufCopy is
                 * incremented to point it to correct source address.
                 */
                pingpongSrcBufCopy += PING_PONG_L1D_BUFFER_SIZE;

                if (result != EDMA3_DRV_SOK)
                    {
#ifdef EDMA3_DRV_DEBUG
                    EDMA3_DRV_PRINTF ("edma3_test_ping_pong_mode: EDMA3_DRV_enableTransfer " \
                                        "Failed, error code: %d\r\n", result);
#endif  /* EDMA3_DRV_DEBUG */
                    break;
                    }
                }

            /**
             * Step 7, copy the pong buffer to the dest buffer in
             * DDR (using CPU), as a part of processing.
             * ����pong���棬����pong�������ݴ��䵽DDRĿ���ַ��dstL1DBuff2����pingpongDestBufCopy��
             */
            result = process_ping_pong_buffer(1u);
            if (result != EDMA3_DRV_SOK)
                {
#ifdef EDMA3_DRV_DEBUG
                EDMA3_DRV_PRINTF ("edma3_test_ping_pong_mode: process_ping_pong_buffer " \
                                    "Failed, error code: %d\r\n", result);
#endif  /* EDMA3_DRV_DEBUG */
                break;
                }

            /* Wait for the Completion ISR. */
            while (irqRaised1 == 0u)
                {
                /* Wait for the Completion ISR. */
                printf ("waiting for interrupt...\n");
                }

            /* Check the status of the completed transfer */
            if (irqRaised1 < 0)
                {
                /* Some error occured, break from the FOR loop. */
#ifdef EDMA3_DRV_DEBUG
                EDMA3_DRV_PRINTF ("\r\nedma3_test: Event Miss Occured!!!\r\n");
#endif  /* EDMA3_DRV_DEBUG */

                /* Clear the error bits first */
                result = EDMA3_DRV_clearErrorBits (hEdma, chId);
                break;
                }
            }
        }

    if (EDMA3_DRV_SOK == result)
        {
        /* Match the Source and Destination Buffers. */
        for (i = 0; i < PING_PONG_DDR_BUFFER_SIZE; i++)
            {
            if (pingpongSrcBuf[i] != pingpongDestBuf[i])
                {
                Istestpassed = 0u;
#ifdef EDMA3_DRV_DEBUG
                EDMA3_DRV_PRINTF("edma3_test_ping_pong_mode: Data write-read matching" \
                                     "FAILED at i = %d\r\n", i);
#endif  /* EDMA3_DRV_DEBUG */
                break;
                }
            }
        if (i == PING_PONG_DDR_BUFFER_SIZE)
            {
            Istestpassed = 1u;
            }



        /* Free the previously allocated channels. */
        result = (
                    (EDMA3_DRV_freeChannel (hEdma, chId))
                    ||
                    (EDMA3_DRV_freeChannel (hEdma, lChId1))
                    ||
                    (EDMA3_DRV_freeChannel (hEdma, lChId2))
                    );

        if (result != EDMA3_DRV_SOK)
            {
#ifdef EDMA3_DRV_DEBUG
            EDMA3_DRV_PRINTF("edma3_test_ping_pong_mode: EDMA3_DRV_freeChannel() FAILED, " \
                                "error code: %d\r\n", result);
#endif  /* EDMA3_DRV_DEBUG */
            }
        }


    if(Istestpassed == 1u)
        {
#ifdef EDMA3_DRV_DEBUG
        EDMA3_DRV_PRINTF("edma3_test_ping_pong_mode PASSED\r\n");
#endif  /* EDMA3_DRV_DEBUG */
        }
    else
        {
#ifdef EDMA3_DRV_DEBUG
        EDMA3_DRV_PRINTF("edma3_test_ping_pong_mode FAILED\r\n");
#endif  /* EDMA3_DRV_DEBUG */
        result = ((EDMA3_DRV_SOK == result) ?
                                EDMA3_DATA_MISMATCH_ERROR : result);
        }


    return result;
    }
