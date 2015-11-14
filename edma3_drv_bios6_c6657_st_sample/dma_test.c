/*
 * dma_test.c
 *
 * EDMA3 mem-to-mem data copy test case, using a DMA channel.
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
#include "mcip_bmp_utils.h"
extern signed char   _srcBuff1[MAX_BUFFER_SIZE];
extern signed char   _dstBuff1[MAX_BUFFER_SIZE];

extern signed char *srcBuff1;
extern signed char *dstBuff1;






/**
 *  \brief   EDMA3 mem-to-mem data copy test case, using a DMA channel.
 *
 *
 *  \param  acnt        [IN]      Number of bytes in an array
 *  \param  bcnt        [IN]      Number of arrays in a frame
 *  \param  ccnt        [IN]      Number of frames in a block
 *  \param  syncType    [IN]      Synchronization type (A/AB Sync)
 *
 *  \return  EDMA3_DRV_SOK or EDMA3_DRV Error Code
 */
EDMA3_DRV_Result edma3_test(
                                    EDMA3_DRV_Handle hEdma,
                                    unsigned int acnt,
                                    unsigned int bcnt,
                                    unsigned int ccnt,
                                    EDMA3_DRV_SyncType syncType)
    {
    EDMA3_DRV_Result result = EDMA3_DRV_SOK;
    EDMA3_DRV_PaRAMRegs paramSet = {0,0,0,0,0,0,0,0,0,0,0,0};//参数寄存器，在edma3_drv.h中定义的结构体
    unsigned int chId = 0;//通道ID
    unsigned int tcc = 0;//发送完成中断的通道号。传输控制器控制Transfer controller control register
    int i;

    unsigned int count;//传输总字节数（acnt*bcnt*ccnt）
    unsigned int Istestpassed = 0u;
    unsigned int numenabled = 0;
    unsigned int BRCnt = 0;
    int srcbidx = 0, desbidx = 0;//字节数acnt
    int srccidx = 0, descidx = 0;//字节数acnt
    /**
     * 定义原始数据类型
     */
    raw_image_data_t p_input_data;

    /*
     *段定义在common.c中 ，获取_srcBuff1\_dstBuff1物理地址，getGlobalAddr()是外部函数，没有找到
     */
    srcBuff1 = (signed char*) GLOBAL_ADDR(_srcBuff1);
    dstBuff1 = (signed char*) GLOBAL_ADDR(_dstBuff1);
    /**
     *初始化srcBuff1,指向像素数据
     * */
    p_input_data = get_raw_image_data_from_file("G://dsp_workspace/DSP/WorkSpace/6657/wit_lab_deblur/128_128/bear10.bmp","rb+");

    raw_data_cvt_bmp_pixels(&p_input_data,srcBuff1);

    printf("_readDatFromFile333==%d\n\t",p_input_data.length);

/*     Initalize source and destination buffers
     * 给src和dst Buffers赋值
     */
/*    for (count = 0u; count < (acnt*bcnt*ccnt); count++)
        {
        srcBuff1[count] = (int)count;

          No need to initialize the destination buffer as it is being invalidated.
        dstBuff1[count] = initval;

        }*/

/*定义了DCache*/
#ifdef EDMA3_ENABLE_DCACHE
    /*
    * Note: These functions are required if the buffer is in DDR.
    * For other cases, where buffer is NOT in DDR, user
    * may or may not require the below functions.
    */
    /* Flush the Source Buffer
     * 刷新srcBuff
     * */
    if (result == EDMA3_DRV_SOK)
        {
        result = Edma3_CacheFlush((unsigned int)srcBuff1, (acnt*bcnt*ccnt));
        }

    /* Invalidate the Destination Buffer
     * 无效dstBuffer
     * */
    if (result == EDMA3_DRV_SOK)
        {
        result = Edma3_CacheInvalidate((unsigned int)dstBuff1, (acnt*bcnt*ccnt));
        }
#endif  /* EDMA3_ENABLE_DCACHE */


    /* Set B count reload as B count.
     * 设置重载次数
     * */
    BRCnt = bcnt;

    /* Setting up the SRC/DES Index
     * 设置src/dst每次跳动有多少字节
     * */
    srcbidx = (int)acnt;
    desbidx = (int)acnt;
    if (syncType == EDMA3_DRV_SYNC_A)//A sync模式
        {
        /* A Sync Transfer Mode */
        srccidx = (int)acnt;//代表数据之间是连续的
        descidx = (int)acnt;
        }
    else
        {
        /* AB Sync Transfer Mode */
        srccidx = ((int)acnt * (int)bcnt);
        descidx = ((int)acnt * (int)bcnt);
        }


    /* Setup for Channel 1
     * 设置通道1
     * */
    tcc = EDMA3_DRV_TCC_ANY;  //bit12\bit2
    chId = EDMA3_DRV_DMA_CHANNEL_ANY; //bit12\bit1

    /* Request any DMA channel and any TCC
     * 申请任意DMA通道和任意TCC传输控制器
     * callback1在common.c中
     * */
    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_requestChannel (hEdma, &chId, &tcc,
                                        (EDMA3_RM_EventQueue)0,
                                            &callback1, NULL);
        }

    if (result == EDMA3_DRV_SOK)
        {
        /* Fill the PaRAM Set with transfer specific information */
        paramSet.srcAddr    = (unsigned int)(srcBuff1);//srcBuff地址指针
        paramSet.destAddr   = (unsigned int)(dstBuff1);//dstBuff地址指针

        /**
         * Be Careful !!!
         * Valid values for SRCBIDX/DSTBIDX are between �2768 and 32767
         * Valid values for SRCCIDX/DSTCIDX are between �2768 and 32767
         *
         * 就是偏移量，表示数据帧之间的间隔
         */
        paramSet.srcBIdx    = srcbidx;
        paramSet.destBIdx   = desbidx;
        paramSet.srcCIdx    = srccidx;
        paramSet.destCIdx   = descidx;

        /**
         * Be Careful !!!
         * Valid values for ACNT/BCNT/CCNT are between 0 and 65535.
         * ACNT/BCNT/CCNT must be greater than or equal to 1.
         * Maximum number of bytes in an array (ACNT) is 65535 bytes
         * Maximum number of arrays in a frame (BCNT) is 65535
         * Maximum number of frames in a block (CCNT) is 65535
         * 每个数组有acnt个字节
    	 * 每个帧有bcnt个数组
    	 * 每个块有ccnt个帧
         */
        paramSet.aCnt       = acnt;
        paramSet.bCnt       = bcnt;
        paramSet.cCnt       = ccnt;

        /* For AB-synchronized transfers, BCNTRLD is not used. */
        paramSet.bCntReload = BRCnt;

        paramSet.linkAddr   = 0xFFFFu;

        /* Src & Dest are in INCR modes
         * 增量模式
         * */
        paramSet.opt &= 0xFFFFFFFCu;
        /* Program the TCC */
        paramSet.opt |= ((tcc << OPT_TCC_SHIFT) & OPT_TCC_MASK);    //  paramSet.opt |= (1004<<12)&3F000;

        /* Enable Intermediate & Final transfer completion interrupt */
        paramSet.opt |= (1 << OPT_ITCINTEN_SHIFT);//bit21 in  Channel Options Parameter Register
        paramSet.opt |= (1 << OPT_TCINTEN_SHIFT);//bti20

        if (syncType == EDMA3_DRV_SYNC_A)
            {
            paramSet.opt &= 0xFFFFFFFBu;
            }
        else
            {
            /* AB Sync Transfer Mode */
            paramSet.opt |= (1 << OPT_SYNCDIM_SHIFT);
            }

        /* 将paramSet结构体写入PaRAM集，设置完成 */
        result = EDMA3_DRV_setPaRAM(hEdma, chId, &paramSet);
        }


    /*
     * There is another way to program the PaRAM Set using specific APIs
     * for different PaRAM set entries. It gives user more control and easier
     * to use interface. User can use any of the methods.
     * Below is the alternative way to program the PaRAM Set.
     */

    /*
    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_setSrcParams (hEdma, chId, (unsigned int)(srcBuff1),
                                        EDMA3_DRV_ADDR_MODE_INCR,
                                        EDMA3_DRV_W8BIT);
        }

    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_setDestParams (hEdma, chId, (unsigned int)(dstBuff1),
                                            EDMA3_DRV_ADDR_MODE_INCR,
                                            EDMA3_DRV_W8BIT);
        }

    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_setSrcIndex (hEdma, chId, srcbidx, srccidx);
        }

    if (result == EDMA3_DRV_SOK)
        {
        result =  EDMA3_DRV_setDestIndex (hEdma, chId, desbidx, descidx);
        }

    if (result == EDMA3_DRV_SOK)
        {
        if (syncType == EDMA3_DRV_SYNC_A)
            {
            result = EDMA3_DRV_setTransferParams (hEdma, chId, acnt, bcnt, ccnt,
                                                BRCnt, EDMA3_DRV_SYNC_A);
            }
        else
            {
            result = EDMA3_DRV_setTransferParams (hEdma, chId, acnt, bcnt, ccnt,
                                                BRCnt, EDMA3_DRV_SYNC_AB);
            }
        }

    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_setOptField (hEdma, chId,
                                        EDMA3_DRV_OPT_FIELD_TCINTEN, 1u);
        }

    if (result == EDMA3_DRV_SOK)
        {
        result = EDMA3_DRV_setOptField (hEdma, chId,
                                        EDMA3_DRV_OPT_FIELD_ITCINTEN, 1u);
        }

    */


    /*
     * EDMA3在手动模式下,需要重复“使能传输”
     * 使能传输次数依赖于A/AB同步传输和counts数
     */
    if (result == EDMA3_DRV_SOK)
        {
        /*Need to activate next param*/
        if (syncType == EDMA3_DRV_SYNC_A)
            {
            numenabled = bcnt * ccnt;
            }
        else
            {
            /* AB Sync Transfer Mode */
            numenabled = ccnt;
            }

        for (i = 0; i < numenabled; i++)
            {
            irqRaised1 = 0;

            /*
             * 重复“使能传输”numenabled次
             */
            result = EDMA3_DRV_enableTransfer (hEdma, chId,
                                                EDMA3_DRV_TRIG_MODE_MANUAL);
            if (result != EDMA3_DRV_SOK)
                {
                printf ("edma3_test: EDMA3_DRV_enableTransfer " \
                                    "Failed, error code: %d\r\n", result);
                break;
                }

            /* Wait for the Completion ISR.
             * 这个中断标志是在哪更新的？？？？？
             * */
            while (irqRaised1 == 0u)
                {
                /* Wait for the Completion ISR. */
                printf ("waiting for interrupt...\n");	
                }

            /* Check the status of the completed transfer */
            if (irqRaised1 < 0)
                {
                /* Some error occured, break from the FOR loop. */
                printf ("\r\nedma3_test: Event Miss Occured!!!\r\n");

                /* Clear the error bits first */
                result = EDMA3_DRV_clearErrorBits (hEdma, chId);
                break;
                }
            }
        }


    /* Match the Source and Destination Buffers. */
    if (EDMA3_DRV_SOK == result)
        {
        for (i = 0; i < (acnt*bcnt*ccnt); i++)
            {
            if (srcBuff1[i] != dstBuff1[i])
                {
                Istestpassed = 0u;
                printf("edma3_test: Data write-read matching" \
                                     "FAILED at i = %d\r\n", i);
                break;
                }
            }
        if (i == (acnt*bcnt*ccnt))
            {
            Istestpassed = 1u;
            }


        /* 释放之前申请的DMA通道*/
        result = EDMA3_DRV_freeChannel (hEdma, chId);
        if (result != EDMA3_DRV_SOK)
            {
            printf("edma3_test: EDMA3_DRV_freeChannel() FAILED, " \
                                "error code: %d\r\n", result);
            }
        }


    if(Istestpassed == 1u)
        {
        printf("edma3_test PASSED\r\n");
        }
    else
        {
        printf("edma3_test FAILED\r\n");
        result = ((EDMA3_DRV_SOK == result) ?
                                EDMA3_DATA_MISMATCH_ERROR : result);
        }


    return result;
}


