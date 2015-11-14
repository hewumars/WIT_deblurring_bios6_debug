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
 * 现有两个大缓存，大小为(PING_PONG_NUM_COLUMNS * PING_PONG_NUM_ROWS)，都在DDR中，被称为pingpongSrcBuf和pingpongDestBuf。
 * 另外有两个小缓存，大小为(PING_PONG_L1D_BUFFER_SIZE)，都在L1D中，被称为ping缓存和pong缓存。
 * 将pingpongSrcBuf划分为PING_PONG_L1D_BUFFER_SIZE大小的块。使用EDMA3，将数据从pingpongSrcBuf传输到ping或者pong缓存。
 * 使用ping-pong缓存逻辑上可以实现DSP核一边处理数据，EDMA3一边为DSP核搬移数据。所以EDMA3和DSP交替使用ping和pong缓存。
 * 此外，为了模拟DSP处理数据的真实场景，我从ping/pong缓存复制数据到pingpongDestBuf。
 * 最后，比较pingpongSrcBuf和pingpongDestBuf检查算法是否正常工作
 */
/**
 * 行数 in the bigger source buffer.
 */
#define PING_PONG_NUM_COLUMNS           (72u)

/**
 * 列数 in the bigger source buffer.
 */
#define PING_PONG_NUM_ROWS                (48u)

/* ACNT 等于列数*/
#define PING_PONG_ACNT                          PING_PONG_NUM_COLUMNS
/* BCNT 等于一次性传输的行数 */
#define PING_PONG_BCNT                          (8u)
/* CCNT 等于1 */
#define PING_PONG_CCNT                          (1u)

/* DMA触发次数 */
#define PING_PONG_NUM_TRIGGERS           (PING_PONG_NUM_ROWS/PING_PONG_BCNT)

/* DDR中大缓存的大小 */
#define PING_PONG_DDR_BUFFER_SIZE     (PING_PONG_NUM_COLUMNS*PING_PONG_NUM_ROWS)
/* IRAM中小缓存的大小 */
#define PING_PONG_L1D_BUFFER_SIZE     (PING_PONG_ACNT*PING_PONG_BCNT)


/* pingpongSrcBuf（源地址） */
#ifdef EDMA3_ENABLE_DCACHE
/* Cache line aligned big source buffer. */
/**
 * The DATA_ALIGN pragma aligns the symbol to an alignment boundary. The
 * alignment boundary is the maximum of the symbol抯 default alignment value
 * or the value of the constant in bytes. The constant must be a power of 2.
 * The syntax of the pragma in C is:
 * #pragma DATA_ALIGN (symbol, constant);
 */
#pragma DATA_ALIGN(_pingpongSrcBuf, EDMA3_CACHE_LINE_SIZE_IN_BYTES);
#endif  /* #ifdef EDMA3_ENABLE_DCACHE */
#pragma DATA_SECTION(_pingpongSrcBuf, ".my_sect_ddr");
signed char _pingpongSrcBuf[PING_PONG_DDR_BUFFER_SIZE];


/**
 * pingpongDestBuf（目标地址）。
 * 它将用来接收L1D ping/pong缓存的数据，并检查其有效性。
 */
#ifdef EDMA3_ENABLE_DCACHE
/* Cache line aligned big destination buffer. */
/**
 * The DATA_ALIGN pragma aligns the symbol to an alignment boundary. The
 * alignment boundary is the maximum of the symbol抯 default alignment value
 * or the value of the constant in bytes. The constant must be a power of 2.
 * The syntax of the pragma in C is:
 * #pragma DATA_ALIGN (symbol, constant);
 */
#pragma DATA_ALIGN(_pingpongDestBuf, EDMA3_CACHE_LINE_SIZE_IN_BYTES);
#endif  /* #ifdef EDMA3_ENABLE_DCACHE */
#pragma DATA_SECTION(_pingpongDestBuf, ".my_sect_ddr");
signed char _pingpongDestBuf[PING_PONG_DDR_BUFFER_SIZE];


/* 目标缓存在IRAM中 */
#ifdef EDMA3_ENABLE_DCACHE
/* cache行对齐--目标缓存1 ，例如Ping缓存. */
/**
 * The DATA_ALIGN pragma aligns the symbol to an alignment boundary. The
 * alignment boundary is the maximum of the symbol抯 default alignment value
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
/* cache行对齐--目标缓存2 ，例如Pong缓存. */
/**
 * The DATA_ALIGN pragma aligns the symbol to an alignment boundary. The
 * alignment boundary is the maximum of the symbol抯 default alignment value
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

/* 所有缓存的指针定义 */
signed char *pingpongSrcBuf;
signed char *pingpongDestBuf;
signed char *pingpongSrcBufCopy;
signed char *pingpongDestBufCopy;

signed char *dstL1DBuff1;
signed char *dstL1DBuff2;

/** 本地内存复制函数 */
extern void edma3MemCpy(void *dst, const void *src, unsigned int len);

EDMA3_DRV_Result process_ping_pong_buffer(unsigned short buff_id)
{
    EDMA3_DRV_Result result = EDMA3_DRV_SOK;

    /**
     * 使用CPU复制L1D的ping-pong缓冲区数据到DDR。
     * 这是一种虚拟的处理程序。
     */
    if (buff_id == 1u)
        {
        /* 复制pong缓存 */

        /* 如果使能了cache，首先是当前cache无效, 否则CPU将从cache中拿数据 */
        /**
         * 由于ping/pong缓存在IRAM中，没有必要使它们无效。但如果它们在DDR中，要使它们无效。
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
        /* 复制ping缓存 */

        /* 如果使能了cache，首先是当前cache无效, 否则CPU将从cache中拿数据 。*/
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

    /* 调整指针 */
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
    /* 一个主通道 */
    unsigned int chId = 0;
    /* 两个链接通道 */
    unsigned int lChId1 = 0;
    unsigned int lChId2 = 0;
    unsigned int tcc = 0;
    int i;
    unsigned int count;
    unsigned int Istestpassed = 0u;
    unsigned int BRCnt = 0;
    int srcbidx = 0, desbidx = 0;
    int srccidx = 0, descidx = 0;
    /* PaRAM集句柄 */
    unsigned int phyaddress = 0;
    EDMA3_DRV_ParamentryRegs *param_handle = NULL;
    /* EDMA3触发次数 */
    unsigned int numenabled = PING_PONG_NUM_TRIGGERS;

    pingpongSrcBuf = (signed char*)GLOBAL_ADDR(_pingpongSrcBuf);
    pingpongDestBuf = (signed char*)GLOBAL_ADDR(_pingpongDestBuf);
    pingpongSrcBufCopy = pingpongSrcBuf;
    pingpongDestBufCopy = pingpongDestBuf;
    dstL1DBuff1 = (signed char*)GLOBAL_ADDR(_dstL1DBuff1);
    dstL1DBuff2 = (signed char*)GLOBAL_ADDR(_dstL1DBuff2);


    /* 初始化PING_PONG_DDR_BUFFER_SIZE大小的pingpongSrcBuf数组*/
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

    /* 如果成功，分配两个link通道 */
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
     * 根据传输特定信息为相关通道填充PaRAM集
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


        /* 设置主DMA通道的源地址和目标地址
         * 源地址：DDR中pingpongSrcBuf
         * 目标地址：L1D中dstL1DBuff1
         * */
        paramSet.srcAddr    = (unsigned int)(pingpongSrcBuf);
        paramSet.destAddr   = (unsigned int)(dstL1DBuff1);


        /* PaRAM参数--首先写进主DMA通道 --（目标地址：ping缓存地址）*/
        result = EDMA3_DRV_setPaRAM(hEdma, chId, &paramSet);
        }


    /* 如果主DMA通道写成功, 写同样的PaRAM参数到第一个link通道--（目标地址：ping缓存地址） */
    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_setPaRAM(hEdma, lChId1, &paramSet);
        }


    /* 修改目标地址(L1D中的pong缓存地址)，然后将PaRAM参数写入第二个link通道*/
    if (result == EDMA3_DRV_SOK)
        {
        paramSet.destAddr   = (unsigned int)(dstL1DBuff2);

        result = EDMA3_DRV_setPaRAM(hEdma, lChId2, &paramSet);
        }
      printf("paramSet.opt == %d \n",paramSet.opt);


    /**
     * 进行通道链接设置？？
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
     *保存句柄到主DMA通道PaRAM集。它将在以后用于快速修改的源地址。
     */
    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_getPaRAMPhyAddr(hEdma, chId, &phyaddress);
        }

    /*ping-pong缓存流程：
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

        /* Step 1 将第一个数据块从DDR搬入L1D ping缓存*/
        result = EDMA3_DRV_enableTransfer (hEdma, chId,
                                            EDMA3_DRV_TRIG_MODE_MANUAL);
        /**
         * Every time a transfer is triggered, numenabled is decremented.
         */
        numenabled--;

        /**
         * Every time a transfer is triggered, pingpongSrcBufCopy is
         * incremented to point it to correct source address.
         * 指向下一个数据块((72u)*(8u))，数据的大小为((72u)*(48u))，要搬6次。
         */
        pingpongSrcBufCopy += PING_PONG_L1D_BUFFER_SIZE;
        }


    if (result == EDMA3_DRV_SOK)
        {
        /* Need to activate next param till numenabled is exhausted. */
        for (i = 0; numenabled; i++)//重复手动触发6次（Step 2--Step 7）直到数据耗尽
            {
            /* Step 2 等待ping缓存EDMA结束*/
            /* Wait for the Completion ISR. */
            while (irqRaised1 == 0u)
                {
                /* Wait for the Completion ISR. */
                printf ("waiting for interrupt...\n");
                }

            irqRaised1 = 0;

            /*
             * 修改DDR中源地址到PaRAM参数并加载到主DMA通道，然后触发传输。
             */
            param_handle->SRC = (unsigned int)pingpongSrcBufCopy;

            /* Step 3 将第二个数据块从DDR搬入L1D pong缓存*/
            result = EDMA3_DRV_enableTransfer (hEdma, chId,
                                                EDMA3_DRV_TRIG_MODE_MANUAL);

            /**
             * 每完成一次传输，手动触发次数减一
             */
            numenabled--;

            /**
             * Every time a transfer is triggered, pingpongSrcBufCopy is
             * incremented to point it to correct source address.
             * 指向下一个数据块((72u)*(8u))，数据的大小为((72u)*(48u))，要搬6次。
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
             * 处理ping缓存，即将ping缓存数据传输到DDR目标地址（dstL1DBuff1传到pingpongDestBufCopy）
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


            /* Step 5 等待pong缓存EDMA结束*/
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

                /* Step 6 将第三个数据块搬入L1D ping缓存*/
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
             * 处理pong缓存，即将pong缓存数据传输到DDR目标地址（dstL1DBuff2传到pingpongDestBufCopy）
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
