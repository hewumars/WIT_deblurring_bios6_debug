/*
 * McBSP.h
 *
 *  Created on: 2014-1-3
 *      Author: Administrator
 */

#include <csl_chip.h>

#ifndef MCBSP_H_
#define MCBSP_H_


#define MSG_SIZE		(sizeof(MSG)/4)		//element num per frame
#define ELEMENT_SIZE		32			//element size in bit
#define SPORT_ClkGdv		1			//75M
#define McBSP_CHANNEL_NUM	2

#define McBSP_BASE_A      0x021B4000

#define McBSP_DRR(chan) \
		(McBSP_BASE_A + ((chan) * 0x4000))

#define McBSP_DXR(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 1*4)

#define McBSP_SPCR(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 2*4)

#define McBSP_RCR(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 3*4)

#define McBSP_XCR(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 4*4)


#define McBSP_SRGR(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 5*4)

#define McBSP_MCR(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 6*4)

#define McBSP_RCERE0(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 7*4)

#define McBSP_XCERE0(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 8*4)

#define McBSP_PCR(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 9*4)

#define McBSP_RCERE1(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 10*4)

#define McBSP_XCERE1(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 11*4)

#define McBSP_RCERE2(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 12*4)

#define McBSP_XCERE2(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 13*4)

#define McBSP_RCERE3(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 14*4)

#define McBSP_XCERE3(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000) + 15*4)



#define McBSP_BASE_ADDR(chan) \
        (McBSP_BASE_A + ((chan) * 0x4000))

#define	McBSP_READ_ADDR(chan) \
		(McBSP_BASE_A + ((chan) * 0x4000))

#define	McBSP_WRITE_ADDR(chan) \
		(McBSP_BASE_A + ((chan) * 0x4000) + 4)

/*McBSP reg struct*/
typedef   struct
   {
      volatile unsigned  int
                  DRR,
                  DXR,
                  SPCR,
                  RCR,
                  XCR,
                  SRGR,
                  MCR,
                  RCERE0,
                  XCERE0,
                  PCR,
                  RCERE1,
                  XCERE1,
                  RCERE2,
                  XCERE2,
                  RCERE3,
                  XCERE3;
   }McBSP_REG;

#define McBSP_FIFO      0x021B6000

#define McBSP_REVID(chan) \
        (McBSP_FIFO + ((chan) * 0x4000))

#define McBSP_WFIFOCTL(chan) \
        (McBSP_FIFO + ((chan) * 0x4000) + 0x10)

#define McBSP_WFIFOSTS(chan) \
        (McBSP_FIFO + ((chan) * 0x4000) + 0x14)

#define McBSP_RFIFOCTL(chan) \
        (McBSP_FIFO + ((chan) * 0x4000) + 0x18)

#define McBSP_RFIFOSTS(chan) \
        (McBSP_FIFO + ((chan) * 0x4000) + 0x1C)

typedef struct  {
	volatile unsigned  int
					REVID,
//   volatile Uint8 RSVD0[12];
					WFIFOCTL,
					WFIFOSTS,
					RFIFOCTL,
					RFIFOSTS;
} McBSP_BfifoRegs;


#define McBSP_DATA      0x22000000

#define McBSP_DATA_PORT(chan) \
        (McBSP_DATA + ((chan) * 0x400000))

typedef struct  {
    volatile Uint32 DATA_PORT;
    volatile Uint32 RSVD_04;
    volatile Uint32 RSVD_08;
    volatile Uint32 RSVD_0C;
} CSL_BdataRegs;

/* Control Register Bitfield */
/* SPCR */
#define RRST             0         /* Receiver reset                           */
#define RRDY             1         /* Receiver ready                           */
#define RFULL            2         /* RSR full error condition                 */
#define RSYNCERR         3         /* Receive synchronization error            */
#define RINTM            4         /* Receive interrupt mode                   */
#define DXENA            7         /* DX Enabler                               */
#define CLKSTP          11         /* Clock stop mode                          */
#define RJUST           13         /* Receive data sign-extension and justification mode */
#define DLB             15         /* Digital loopback mode                    */
#define XRST            16         /* Transmitter reset                        */
#define XRDY            17         /* Transmitter ready                        */
#define XEMPTY          18         /* Transmit shift register (XSR) empty      */
#define XSYNCERR        19         /* Transmit synchronization error           */
#define XINTM           20         /* Transmit interrupt mode                  */
#define GRST            22         /* Sample rate generator reset              */
#define FRST            23         /* Frame sync generator reset               */
#define SOFT            24         /* Serial clock emulation mode              */
#define FREE            25         /* Serial clock free running mode           */

/* SRGR */
#define GSYNC           31         /* Sample rate generator clock synchronization */
#define CLKSP           30         /* CLKS polarity clock edge select             */
#define CLKSM           29         /* McBSP sample rate generator clock mode      */
#define FSGM            28         /* SRG transmit frame synchronization mode     */
#define FPER            16         /* Frame period                                */
#define FWID             8         /* Frame width                                 */
#define CLKGDV           0         /* Sample rate generator clock divider         */

/* RCR/XCR */
#define WDREVRS          4         /* Receive/Transmit 32-bit bit reversal feature */
#define WDLEN1           5         /* Receive/Transmit element length in phase 1   */
#define FRLEN1           8         /* Receive/Transmit frame length in phase 1     */
#define DATDLY          16         /* Receive/Transmit data delay                  */
#define FIG             18         /* Receive/Transmit frame ignore                */
#define COMPAND         19         /* Receive/Transmit companding mode             */
#define WDLEN2          21         /* Receive/Transmit element length in phase 2   */
#define FRLEN2          24         /* Receive/Transmit frame length in phase 2     */
#define PHASE           31         /* Receive/Transmit phases                      */

/* PCR */
#define CLKRP            0         /* Receive clock polarity                       */
#define CLKXP            1         /* Transmit clock polarity                      */
#define FSRP             2         /* Receive frame synchronization polarity       */
#define FSXP             3         /* Transmit frame synchronization polarity      */
#define DR_STAT          4         /* DR pin status                                */
#define DX_STAT          5         /* DX pin status                                */
#define CLKS_STAT        6         /* CLKS pin status                              */
#define CLKRM            8         /* Receiver clock mode                          */
#define CLKXM            9         /* Transmitter clock mode                       */
#define FSRM            10         /* Receive frame synchronization mode           */
#define FSXM            11         /* Transmit frame synchronization mode          */
#define RIOEN           12         /* Receiver in general-purpose I/O mode only when /RRST = 0 in SPCR*/
#define XIOEN           13         /* Transmitter in general-purpose I/O mode only when /XRST = 0 in SPCR*/

/* Multichannel Control Register (MCR) */
#define RMCM             0        /* Receive multichannel selection enable */
#define RCBLK            2        /* Receive current subframe              */
#define RPABLK           5        /* Receive partition A subframe          */
#define RPBBLK           7        /* Receive partition B subframe          */
#define RMCME            9        /* Enhanced receive multichannel selection enable (C64x only) RMCME operates in conjunction with XMCME*/
#define XMCM            16        /* Transmit multichannel selection enable*/
#define XCBLK           18        /* Transmit current subframe             */
#define XPABLK          21        /* Transmit partition A subframe         */
#define XPBBLK          23        /* Transmit partition B subframe         */
#define XMCME           25        /* Enhanced transmit multichannel selection enable (C64x only)*/

#define MCBSP_AVAILABLE(chan) \
	   (GET_BIT(McBSP_SPCR(chan),XEMPTY) ? 0 : 1)
//XEMPTY = 0: XSR is empty.

#define MCBSP_XPIN_ENABLE_VAL    ((1<<FSXM) + (1<<CLKXM)+(0<<FSRM) + (0<<CLKRM))
#define MCBSP_XPIN_DISABLE_VAL   ((0<<FSXM) + (0<<CLKXM)+(0<<FSRM) + (0<<CLKRM))

#define MCBSP_X_PIN_DISABLE(chan)	\
	   (REG_WRITE(McBSP_PCR(chan), MCBSP_XPIN_DISABLE_VAL))

#define MCBSP_X_PIN_ENABLE(chan)	\
	   (REG_WRITE(McBSP_PCR(chan), MCBSP_XPIN_ENABLE_VAL))

#endif /* MCBSP_H_ */
