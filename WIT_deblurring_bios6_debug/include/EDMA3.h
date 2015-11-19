/*
 * EDMA3.h
 *
 *  Created on: 2013-3-8
 *      Author: Administrator
 */

#ifndef EDMA3_H_
#define EDMA3_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif


/* MAX ACOUNT */
#define MAX_ACOUNT					(64u)
/* MAX BCOUNT */
#define MAX_BCOUNT					(1u)
/* MAX CCOUNT */
#define MAX_CCOUNT					(1u)
/**
 * Buffers (src and dest) are needed for mem-2-mem data transfers.
 * This define is for the MAXIMUM size and hence the maximum data
 * which could be transferred using the sample test cases below.
 */
#define MAX_BUFFER_SIZE				(MAX_ACOUNT * MAX_BCOUNT * MAX_CCOUNT)

/* To enable/disable the cache .*/
#define EDMA3_ENABLE_DCACHE                 (1u)

/* OPT Field specific defines */
#define OPT_SYNCDIM_SHIFT                   (0x00000002u)
#define OPT_TCC_MASK                        (0x0003F000u)
#define OPT_TCC_SHIFT                       (0x0000000Cu)
#define OPT_ITCINTEN_SHIFT                  (0x00000015u)
#define OPT_TCINTEN_SHIFT                   (0x00000014u)





/* EDMA channel synchronization events */

/* HPI/PCI-to-DSP event          */
#define CSL_EDMA3_CHA_TCP3D_AREVT0   	0
/* Timer 0 lower counter event   */
#define CSL_EDMA3_CHA_TCP3D_AREVT1   	1
/* Timer 0 higher counter event  */
#define CSL_EDMA3_CHA_TINT2L   			2
/* EDMA3 channel 3 */
#define CSL_EDMA3_CHA_TINT2H          	3
/* EDMA3 channel 4 */
#define CSL_EDMA3_CHA_URXEVT         	4
/* EDMA3 channel 5 */
#define CSL_EDMA3_CHA_UTXEVT         	5
/* EDMA3 channel 6 */
#define CSL_EDMA3_CHA_GPINT0         	6
/* EDMA3 channel 7 */
#define CSL_EDMA3_CHA_GPINT1         	7
/* EDMA3 channel 8 */
#define CSL_EDMA3_CHA_GPINT2         	8
/* EDMA3 channel 9 */
#define CSL_EDMA3_CHA_GPINT3         	9
/* EDMA3 channel 10 */
#define CSL_EDMA3_CHA_VCPAREVT       	10
/* EDMA3 channel 11 */
#define CSL_EDMA3_CHA_VCPAXEVT       	11
/* McBSP0 transmit event */
#define CSL_EDMA3_CHA_VCPBREVT    		12
/* McBSP0 receive event  */
#define CSL_EDMA3_CHA_VCPBXEVT    		13
/* McBSP1 transmit event */
#define CSL_EDMA3_CHA_URXEVT_B    		14
/* McBSP1 receive event  */
#define CSL_EDMA3_CHA_UTXEVT_B    		15
/* Timer 1 lower counter event  */
#define CSL_EDMA3_CHA_SPIINT0   		16
/* Timer 1 higher counter event */
#define CSL_EDMA3_CHA_SPIINT1   		17
/* EDMA channel 18*/
#define CSL_EDMA3_CHA_SEMINT0       	18
/* EDMA3 channel 19*/
#define CSL_EDMA3_CHA_SEMINT1       	19
/* Rapid IO Interrupt 1 */
#define CSL_EDMA3_CHA_SEMINT2  			20
/* EDMA3 channel 21*/
#define CSL_EDMA3_CHA_SEMINT3       	21
/* EDMA3 channel 22*/
#define CSL_EDMA3_CHA_TINT4L       		22
/* EDMA3 channel 23*/
#define CSL_EDMA3_CHA_TINT4H       		23
/* EDMA3 channel 24*/
#define CSL_EDMA3_CHA_TINT5L       		24
/* EDMA3 channel 25*/
#define CSL_EDMA3_CHA_TINT5H       		25
/* EDMA3 channel 26*/
#define CSL_EDMA3_CHA_TINT6L       		26
/* EDMA3 channel 27*/
#define CSL_EDMA3_CHA_TINT6H       		27
/* VCP2 receive event  */
#define CSL_EDMA3_CHA_TINT7L  			28
/* VCP2 transmit event */
#define CSL_EDMA3_CHA_TINT7H  			29
/* TCP2 receive event  */
#define CSL_EDMA3_CHA_SPIXEVT  			30
/* TCP2 transmit event */
#define CSL_EDMA3_CHA_SPIREVT  			31
/* UTOPIA receive event */
#define CSL_EDMA3_CHA_I2CREVET    		32
/* EDMA3 channel 33 */
#define CSL_EDMA3_CHA_I2CXEVT       	33
/* EDMA3 channel 34 */
#define CSL_EDMA3_CHA_TINT3L       		34
/* EDMA3 channel 35 */
#define CSL_EDMA3_CHA_TINT3H       		35
/* EDMA3 channel 36 */
#define CSL_EDMA3_CHA_MCBSP0_REVT       36
/* EDMA3 channel 37 */
#define CSL_EDMA3_CHA_MCBSP0_XEVT       37
/* EDMA3 channel 38 */
#define CSL_EDMA3_CHA_MCBSP1_REVT       38
/* EDMA3 channel 39 */
#define CSL_EDMA3_CHA_MCBSP1_XEVT       39
/* UTOPIA transmit event */
#define CSL_EDMA3_CHA_TETBHFULLINT    	40
/* EDMA3 channel 41*/
#define CSL_EDMA3_CHA_TETBHFULLINT0     41
/* EDMA3 channel 42*/
#define CSL_EDMA3_CHA_TETBHFULLINT1     42
/* EDMA3 channel 43*/
#define CSL_EDMA3_CHA_CIC1_OUT0       	43
/* I2C receive event */
#define CSL_EDMA3_CHA_CIC1_OUT1   		44
/* I2C transmit event */
#define CSL_EDMA3_CHA_CIC1_OUT2   		45
/** EDMA3 channel 46*/
#define CSL_EDMA3_CHA_CIC1_OUT3       	46
/** EDMA3 channel 47*/
#define CSL_EDMA3_CHA_CIC1_OUT4       	47
/* GPIO event 0 */
#define CSL_EDMA3_CHA_CIC1_OUT5   		48
/* GPIO event 1 */
#define CSL_EDMA3_CHA_CIC1_OUT6   		49
/* GPIO event 2 */
#define CSL_EDMA3_CHA_CIC1_OUT7   		50
/* GPIO event 3 */
#define CSL_EDMA3_CHA_CIC1_OUT8   		51
/* GPIO event 4 */
#define CSL_EDMA3_CHA_CIC1_OUT9   		52
/* GPIO event 5 */
#define CSL_EDMA3_CHA_CIC1_OUT10   		53
/* GPIO event 6 */
#define CSL_EDMA3_CHA_CIC1_OUT11   		54
/* GPIO event 7 */
#define CSL_EDMA3_CHA_CIC1_OUT12   		55
/* GPIO event 8 */
#define CSL_EDMA3_CHA_CIC1_OUT13   		56
/* GPIO event 9 */
#define CSL_EDMA3_CHA_CIC1_OUT14   		57
/* GPIO event 10 */
#define CSL_EDMA3_CHA_CIC1_OUT15  		58
/* GPIO event 11 */
#define CSL_EDMA3_CHA_CIC1_OUT16  		59
/* GPIO event 12 */
#define CSL_EDMA3_CHA_CIC1_OUT17  		60
/* GPIO event 13 */
#define CSL_EDMA3_CHA_TETBFULLINT  		61
/* GPIO event 14 */
#define CSL_EDMA3_CHA_TETBFULLINT0  	62
/* GPIO event 15 */
#define CSL_EDMA3_CHA_TETBFULLINT1  	63

/**
 * EDMA3 Driver Handle, which is used to call all the Driver APIs.
 * It gets initialized during EDMA3 Initialization.
 */

#define MAX_NUM_EDMA_INSTANCES  5

/* Define to verify the default RM config.
 * Additional configuration required. Update the
 * gblCfgReqdArray[] to reflect the master/slave config.
 * In the case of multiple instances default configuration
 * may require more than one cores other than core 0 to be master.
 * #define EDMA3_DRV_USE_DEF_RM_CFG
 */

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif /* EDMA3_H_ */
