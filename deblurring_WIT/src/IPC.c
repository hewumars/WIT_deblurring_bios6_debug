/**
 *   @file  IPC.c
 *
 *   @brief   
 *      This is the Inter-core interrupt implementation using IPCGR and IPCAR
 *      
 *  \par
 *  ============================================================================
 *  @n   (C) Copyright 2010, Texas Instruments, Inc.
 *  @n   Use of this software is controlled by the terms and conditions found 
 *  @n   in the license agreement under which this software has been supplied.
 *  ============================================================================ 
 *  \par
 */
#include <stdio.h>
#include <stdlib.h>

#include "IPC.h"

/* CSL RL includes */
#include <ti/csl/csl_chip.h>
#include <ti/csl/src/intc/csl_intc.h>

#include <ti/csl/csl_cacheAux.h>

/* IPCGR Info */
int32_t iIPCGRInfo[CORENUM] = {
								IPCGR0,
								IPCGR1
							 };
/* IPCAR Info */
int32_t iIPCARInfo[CORENUM] = {
								IPCAR0,
								IPCAR1
							 };

int IPCValue[32]={0};

volatile Uint32 interruptNumber=0;
volatile Uint32 Set=0;

volatile uint32_t ipcgr_value;

void IssueInterruptToNextCore();


extern volatile uint32_t	IPCGR1_value_b[100];
extern volatile uint32_t	IPCAR1_value_b[100];

extern volatile uint32_t	IPCGR1_value_f[100];
extern volatile uint32_t	IPCAR1_value_f[100];


extern volatile uint32_t	ReceiveCore[25];

extern volatile uint32_t	InterruptCore[25];

extern volatile uint32_t	SetCore[25];
							 
/**
 *  @b Description
 *  @n  
 *      Utility function which trigger IPC interrupt to a specified 
 *      Core
 *
 *  @param[in]  CoreNum
 *      The target Core ID that this IPC.
 *
 *  @param[in]  IPCValue
 *      SRC value of this IPC.
 *
 *  @retval
 *      Trigger IPC to target Core
 */
uint32_t IssueIPCInterrupt(uint32_t CoreID, uint32_t IPCValue) 
{
	if (0 != IPCValue % 16)
	{
		printf("The IPC value should be multiply of 16\n");

		return 0;
	}

//   printf("Set interrupt to Core %d\n", CoreID);
	SetCore[Set] = CoreID;

   *(volatile uint32_t *) iIPCGRInfo[CoreID] = IPCValue;	   

   *(volatile uint32_t *) iIPCGRInfo[CoreID] |= 1;

//   printf("Interrupt Info 0x%x\n", IPCValue);
   InterruptCore[Set] = IPCValue;
   
   Set++;
   return 1;
}

/**
 *  @b Description
 *  @n  
 *      IPC interrupt service routine 
 *
 *
 *  @retval
 *      Setup corresponding flags based on SRC of IPCGR
 */
void IPC_ISR()
{
	volatile uint32_t read_ipcgr;
    uint32_t CoreNum;
    uint32_t iPrevCore;

    CoreNum = CSL_chipReadReg (CSL_CHIP_DNUM);
    iPrevCore = (CoreNum - 1)%2;

    IPCGR1_value_b[interruptNumber] = *(uint32_t*)IPCGR1;
    IPCAR1_value_b[interruptNumber] = *(uint32_t*)IPCAR1;

    read_ipcgr = *(volatile Uint32 *) iIPCGRInfo[CoreNum];

	#ifdef L2_CACHE
		CACHE_invL2 ((void *) &ipcgr_value, 4, CACHE_WAIT);
	#else
		CACHE_invL1d ((void *) &ipcgr_value, 4, CACHE_WAIT);
	#endif

    ipcgr_value = read_ipcgr;

	#ifdef L2_CACHE
		CACHE_wbL2 ((void *) &ipcgr_value, 4, CACHE_WAIT);
	#else
		CACHE_wbL1d ((void *) &ipcgr_value, 4, CACHE_WAIT);
	#endif


    *(volatile uint32_t *) iIPCARInfo[CoreNum] = read_ipcgr;

//    printf("Receive interrupt from Core %d with info 0x%x interruptNumber= %d\n", iPrevCore, read_ipcgr, interruptNumber);
    ReceiveCore[interruptNumber] = ipcgr_value;

    IPCGR1_value_f[interruptNumber] = *(uint32_t*)IPCGR1;
    IPCAR1_value_f[interruptNumber] = *(uint32_t*)IPCAR1;

    interruptNumber++;
//    printf("IPCGR1 = %d, IPCAR1 = %d\n",xxx,yyy);
//    IssueInterruptToNextCore();
}

void IssueInterruptToNextCore() 
{
   uint32_t CoreNum;
   uint32_t iNextCore;	
   static uint32_t interruptInfo=8;

   CoreNum = CSL_chipReadReg (CSL_CHIP_DNUM);

   iNextCore = (CoreNum + 1)%2; //Adam revised 08/08/2011
   
   printf("Set interrupt from Core %x to Core %d\n", CoreNum, iNextCore);
  
   interruptInfo +=8;

   *(volatile uint32_t *) iIPCGRInfo[iNextCore] = interruptInfo;	   

   *(volatile uint32_t *) iIPCGRInfo[iNextCore] |= 1;

   printf("Interrupt Info %d\n", interruptInfo);
}
