// upp_common.c

#include "upp_common.h"

#include <ti/csl/csl_cpIntc.h>
#include <ti/csl/csl_cpIntcAux.h>
#include <ti/csl/src/intc/csl_intc.h>
#include <ti/csl/src/intc/cslr_intc.h>

#define	INTERRUPT_MODE

far volatile upp_int_cnt intCnt;

CSL_UppRegsOvly uppRegs = (CSL_UppRegsOvly)CSL_RPI_CFG_REGS;

#define uppChanParams_DEFAULT_		{	UPP_DIR_XMT,		\
										UPP_DR_SDR,			\
										UPP_DP_RJUST_0FILL,	\
										8,					\
										0,					\
										0,					\
										UPP_TT_64B,			\
										UPP_TT_64B,			\
										1,					\
										1,					\
										1,					\
										1,					\
										0,					\
										0,					\
										0,					\
										0 }

uppChanParams uppChanParams_DEFAULT = uppChanParams_DEFAULT_;

uppDevParams uppDevParams_DEFAULT = {
	UPP_LB_NONE,
	uppChanParams_DEFAULT_,
	uppChanParams_DEFAULT_,
	1,
	0
};

//#ifdef POLL_MODE
void upp_key_config()
{

// BDK - Below code needs to be enabled. Below registers are global registers and explained in the data manual.
	hBootCfg->KICK_REG0 = 0x83e70b13;  // Kick0 register + data(unlock)//ÔÚtms320c6657.pdfÖÐ72Ò³ÓÐ¼Ä´æÆ÷½éÉÜ
	hBootCfg->KICK_REG1 = 0x95a4f1e0;  // Kick1 register + data(unlock)

	// Disable L1D cache
	*(Uint32 *)(0x01840040) &= 0xFFFFFFF0;//ÔÚC66x CorePac User GuideÖÐ91Ò³ÓÐ¼Ä´æÆ÷½éÉÜ
}
//#endif


void upp_pinmux_enable(void){
	Uint32 Chip_Pin_control_1 = 0x02620584;//ÔÚtms320c6657.pdfÖÐ86Ò³ÓÐ¼Ä´æÆ÷½éÉÜ
* (volatile unsigned int *) Chip_Pin_control_1 = 0x00000001;
}


#ifdef	INTERRUPT_MODE
void upp_intc_setup(void (*isr)(void *))
{
	#if defined(__TMS470__)
	int i = CSL_INTC_RPIINT;

	dvSetIsr(&upp_isr, i);

    #else

	CSL_IntcParam vectId;
	CSL_Status intStat;
	CSL_IntcContext intcContext;
	CSL_IntcEventHandlerRecord EventHandler[30];
	CSL_IntcGlobalEnableState state;
	CSL_IntcHandle hIntc;
	CSL_IntcObj myIntcObj;
	CSL_IntcEventHandlerRecord myIntcEventHandlerRecord;
	CSL_IntcEventId UPP_EVENT_ID = (CSL_IntcEventId)CSL_INTC_RPIINT;
	CSL_IntcEventHandler UPP_ISR_ADDR = (CSL_IntcEventHandler)isr;

	CSL_intcGlobalNmiEnable();
	  
	// Enable Global Interrupts 
	intStat = CSL_intcGlobalEnable(&state);

	vectId = CSL_INTC_VECTID_4; // CPU interrupt number
	// Intc Module Initialization
	intcContext.eventhandlerRecord = EventHandler;
	intcContext.numEvtEntries = 10;  // used to allocate isr table entries
	CSL_intcInit(&intcContext);
	  
	CSL_intcInterruptEnable(vectId);  
		    
	// Open a handle for the Event interrupt 
	hIntc = CSL_intcOpen (&myIntcObj, UPP_EVENT_ID, &vectId , &intStat);
    myIntcEventHandlerRecord.handler = (CSL_IntcEventHandler)UPP_ISR_ADDR;
    myIntcEventHandlerRecord.arg = NULL;
    CSL_intcPlugEventHandler(hIntc, &myIntcEventHandlerRecord);

	#endif
}

#endif

int upp_config(uppDevParams *params)
{
    // temp (TODO: clean up)
    Uint32 temp_ICR = 0;

	// high-level error checking
	if (		(params->A.direction == params->B.direction && params->loopback != UPP_LB_NONE)		// require one rcv, one xmt for loopback mode
			||	(params->A.dataRate != params->B.dataRate && params->loopback != UPP_LB_NONE)		// datarates must match for loopback mode
			||	(params->useInterleave && params->numChannelsVal > 1)								// interleave invalid for multichannel
			||	(params->useInterleave && params->A.dataRate == UPP_DR_SDR && params->A.direction == UPP_DIR_RCV)	// interleave invalid for SDR rcv case
			// 	(insert other error conditions here)
		)	return -10;

	// configure regs: CTL, ICR, IVR, TCR

	// CTL

		switch (params->B.dataPacking) {
			case UPP_DP_RJUST_0FILL:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPFB, RJZE); break;
			case UPP_DP_RJUST_SFILL:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPFB, RJSE); break;
			case UPP_DP_LJUST_0FILL:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPFB, LJZF); break;
			default:			return -2;
		}
		switch (params->B.dataWidthVal) {
			case 8:		CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWB, FULL);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWB, 8BIT);
						break;
			case 9:		CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWB, 9BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWB, 16BIT);
						break;
			case 10:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWB, 10BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWB, 16BIT);
						break;
			case 11:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWB, 11BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWB, 16BIT);
						break;
			case 12:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWB, 12BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWB, 16BIT);
						break;
			case 13:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWB, 13BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWB, 16BIT);
						break;
			case 14:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWB, 14BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWB, 16BIT);
						break;
			case 15:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWB, 15BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWB, 16BIT);
						break;
			case 16:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWB, FULL);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWB, 16BIT);
						break;
			default:	return -2;
		}
		switch (params->B.dataRate) {
			case UPP_DR_SDR:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DRB, SINGLE); break;
			case UPP_DR_DDR:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DRB, DOUBLE); break;
			default:	return -2;
		}

		switch (params->A.dataPacking) {
			case UPP_DP_RJUST_0FILL:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPFA, RJZE); break;
			case UPP_DP_RJUST_SFILL:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPFA, RJSE); break;
			case UPP_DP_LJUST_0FILL:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPFA, LJZF); break;
			default:			return -1;
		}
		switch (params->A.dataWidthVal) {
			case 8:		CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWA, FULL);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWA, 8BIT);
						break;
			case 9:		CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWA, 9BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWA, 16BIT);
						break;
			case 10:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWA, 10BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWA, 16BIT);
						break;
			case 11:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWA, 11BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWA, 16BIT);
						break;
			case 12:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWA, 12BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWA, 16BIT);
						break;
			case 13:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWA, 13BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWA, 16BIT);
						break;
			case 14:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWA, 14BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWA, 16BIT);
						break;
			case 15:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWA, 15BIT);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWA, 16BIT);
						break;
			case 16:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DPWA, FULL);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_IWA, 16BIT);
						break;
			default:	return -1;
		}
		switch (params->A.dataRate) {
			case UPP_DR_SDR:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DRA, SINGLE); break;
			case UPP_DR_DDR:	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DRA, DOUBLE); break;
			default:	return -1;
		}

		switch (params->useInterleave) {
			case 0:		CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DDRDEMUX, DISABLE);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_SDRTXIL, DISABLE);
						break;
			case 1:		CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_DDRDEMUX, ENABLE);
						CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_SDRTXIL, ENABLE);
						break;
			default:	return -3;
		}
		switch (params->numChannelsVal) {
			case 1:		CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_CHN, ONE); break;
			case 2:		CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_CHN, TWO); break;
			default:	return -3;
		}
		if 		(params->A.direction == UPP_DIR_XMT && params->B.direction == UPP_DIR_XMT)	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_MODE, TRANSMIT);
		else if (params->A.direction == UPP_DIR_RCV && params->B.direction == UPP_DIR_RCV)	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_MODE, RECEIVE);
		else if (params->A.direction == UPP_DIR_RCV && params->B.direction == UPP_DIR_XMT)	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_MODE, DUPLEX0);
		else if (params->A.direction == UPP_DIR_XMT && params->B.direction == UPP_DIR_RCV)	CSL_FINST(uppRegs->UPCTL, UPP_UPCTL_MODE, DUPLEX1);
		else return -3;

	// ICR

        // TODO: clean up (temp: temp_ICR replaced all uppRegs->UPICR)

        temp_ICR = 0;

		switch (params->B.useTristate) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_TRISB, ENABLE); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_TRISB, DISABLE); break;
			default:	return -5;
		}
		switch (params->B.invClk) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_CLKINVB, INVERT); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_CLKINVB, NORMAL); break;
			default:	return -5;
		}
		CSL_FINS(temp_ICR, UPP_UPICR_CLKDIVB, params->B.clkDivVal);
		switch (params->B.useWait) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_WAITB, ENABLE); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_WAITB, DISABLE); break;
			default:	return -5;
		}
		switch (params->B.useEnable) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_ENAB, ENABLE); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_ENAB, DISABLE); break;
			default:	return -5;
		}
		switch (params->B.useStart) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_STARTB, ENABLE); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_STARTB, DISABLE); break;
			default:	return -5;
		}
		switch (params->B.invWait) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_WAITPOLB, INVERT); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_WAITPOLB, NORMAL); break;
			default:	return -5;
		}
		switch (params->B.invEnable) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_ENAPOLB, INVERT); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_ENAPOLB, NORMAL); break;
			default:	return -5;
		}
		switch (params->B.invStart) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_STARTPOLB, INVERT); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_STARTPOLB, NORMAL); break;
			default:	return -5;
		}

		switch (params->A.useTristate) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_TRISA, ENABLE); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_TRISA, DISABLE); break;
			default:	return -4;
		}
		switch (params->A.invClk) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_CLKINVA, INVERT); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_CLKINVA, NORMAL); break;
			default:	return -4;
		}
		CSL_FINS(temp_ICR, UPP_UPICR_CLKDIVA, params->A.clkDivVal);
		switch (params->A.useWait) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_WAITA, ENABLE); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_WAITA, DISABLE); break;
			default:	return -4;
		}
		switch (params->A.useEnable) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_ENAA, ENABLE); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_ENAA, DISABLE); break;
			default:	return -4;
		}
		switch (params->A.useStart) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_STARTA, ENABLE); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_STARTA, DISABLE); break;
			default:	return -4;
		}
		switch (params->A.invWait) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_WAITPOLA, INVERT); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_WAITPOLA, NORMAL); break;
			default:	return -4;
		}
		switch (params->A.invEnable) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_ENAPOLA, INVERT); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_ENAPOLA, NORMAL); break;
			default:	return -4;
		}
		switch (params->A.invStart) {
			case 1:		CSL_FINST(temp_ICR, UPP_UPICR_STARTPOLA, INVERT); break;
			case 0:		CSL_FINST(temp_ICR, UPP_UPICR_STARTPOLA, NORMAL); break;
			default:	return -4;
		}

        // TODO: clean up
        uppRegs->UPICR = temp_ICR;

	// IVR

		CSL_FINS(uppRegs->UPIVR, UPP_UPIVR_VALB, params->B.idleValueVal);
		CSL_FINS(uppRegs->UPIVR, UPP_UPIVR_VALA, params->A.idleValueVal);

	// TCR

		switch (params->B.txThresh) {
			case UPP_TT_64B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_TXSIZEB, 64B); break;
			case UPP_TT_128B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_TXSIZEB, 128B); break;
			case UPP_TT_256B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_TXSIZEB, 256B); break;
			default:	return -7;
		}
		switch (params->B.rcvThresh) {
			case UPP_TT_64B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_RDSIZEQ, 64B); break;
			case UPP_TT_128B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_RDSIZEQ, 128B); break;
			case UPP_TT_256B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_RDSIZEQ, 256B); break;
			default:	return -7;
		}

		switch (params->A.txThresh) {
			case UPP_TT_64B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_TXSIZEA, 64B); break;
			case UPP_TT_128B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_TXSIZEA, 128B); break;
			case UPP_TT_256B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_TXSIZEA, 256B); break;
			default:	return -6;
		}
		switch (params->A.rcvThresh) {
			case UPP_TT_64B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_RDSIZEI, 64B); break;
			case UPP_TT_128B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_RDSIZEI, 128B); break;
			case UPP_TT_256B:	CSL_FINST(uppRegs->UPTCR, UPP_UPTCR_RDSIZEI, 256B); break;
			default:	return -6;
		}

	// extra: internal loopback MUX

		if (params->loopback == UPP_LB_INTERNAL)
		{
			if (params->A.direction == UPP_DIR_RCV && params->B.direction == UPP_DIR_XMT)
			{
				CSL_FINST(uppRegs->UPDLB, UPP_UPDLB_BA, ENABLE);	// B out, A in
				CSL_FINST(uppRegs->UPDLB, UPP_UPDLB_AB, DISABLE);	//
			}
			else if (params->A.direction == UPP_DIR_XMT && params->B.direction == UPP_DIR_RCV)
			{
				CSL_FINST(uppRegs->UPDLB, UPP_UPDLB_BA, DISABLE);	// A out, B in
				CSL_FINST(uppRegs->UPDLB, UPP_UPDLB_AB, ENABLE);	//
			}
			else return -8;
		}

	// success!
	return 0;
}

#ifdef POLLING_MODE
void upp_dma_prog(uppDmaChan channel, void *dataPtr, int lineCnt, int bytesPerLine, int lineIndex)
{
	switch (channel) {
		case UPP_DMA_CHAN_I:	CSL_FINS(uppRegs->UPID0, UPP_UPID0_ADDR, (Uint32)dataPtr);	// buffer
								CSL_FINS(uppRegs->UPID1, UPP_UPID1_LNCNT, lineCnt);			// line count
								CSL_FINS(uppRegs->UPID1, UPP_UPID1_BCNT, bytesPerLine);		// bytes per line
								CSL_FINS(uppRegs->UPID2, UPP_UPID2_LNOFFSET, lineIndex);	// line separation
								break;
		case UPP_DMA_CHAN_Q:	CSL_FINS(uppRegs->UPQD0, UPP_UPQD0_ADDR, (Uint32)dataPtr);	// buffer
								CSL_FINS(uppRegs->UPQD1, UPP_UPQD1_LNCNT, lineCnt);			// line count
								CSL_FINS(uppRegs->UPQD1, UPP_UPQD1_BCNT, bytesPerLine);		// bytes per line
								CSL_FINS(uppRegs->UPQD2, UPP_UPQD2_LNOFFSET, lineIndex);	// line separation
								break;
		default:				// TODO: error? for now, ignore
								break;
	}

}
#else
void upp_dma_prog(uppDmaChan channel, void *dataPtr, int lineCnt, int bytesPerLine, int lineIndex)
{
	switch (channel) {
		case UPP_DMA_CHAN_I:
								uppRegs->UPID0 = (unsigned int )dataPtr;
								uppRegs->UPID1 = (unsigned int )(lineCnt<<16 | bytesPerLine);
								uppRegs->UPID2 = (unsigned int )(lineIndex);
								break;
		case UPP_DMA_CHAN_Q:
								uppRegs->UPQD0 = (unsigned int )dataPtr;
								uppRegs->UPQD1 = (unsigned int )(lineCnt<<16 | bytesPerLine);
								uppRegs->UPQD2 = (unsigned int )(lineIndex);
								break;
		default:				// TODO: error? for now, ignore
								break;
	}
	
}
#endif
void upp_int_enable(int flags)
{
	Uint32 token = 0;

	token |= (flags & upp_int_EOLI) ? CSL_FMKT(UPP_UPIES_EOLI, SET) : 0;	// enable end-of-line interrupt
	token |= (flags & upp_int_EOWI) ? CSL_FMKT(UPP_UPIES_EOWI, SET) : 0;	// enable end-of-transfer interrupt
	token |= (flags & upp_int_ERRI) ? CSL_FMKT(UPP_UPIES_ERRI, SET) : 0;	// enable I/O error interrupt (CBA?)
	token |= (flags & upp_int_UORI) ? CSL_FMKT(UPP_UPIES_UORI, SET) : 0;	// enable under/overrun interrupt
	token |= (flags & upp_int_DPEI) ? CSL_FMKT(UPP_UPIES_DPEI, SET) : 0;	// enable DMA programming error interrupt

	token |= (flags & upp_int_EOLQ) ? CSL_FMKT(UPP_UPIES_EOLQ, SET) : 0;	// enable end-of-line interrupt
	token |= (flags & upp_int_EOWQ) ? CSL_FMKT(UPP_UPIES_EOWQ, SET) : 0;	// enable end-of-transfer interrupt
	token |= (flags & upp_int_ERRQ) ? CSL_FMKT(UPP_UPIES_ERRQ, SET) : 0;	// enable I/O error interrupt (CBA?)
	token |= (flags & upp_int_UORQ) ? CSL_FMKT(UPP_UPIES_UORQ, SET) : 0;	// enable under/overrun interrupt
	token |= (flags & upp_int_DPEQ) ? CSL_FMKT(UPP_UPIES_DPEQ, SET) : 0;	// enable DMA programming error interrupt

	uppRegs->UPIES = token;
}

void upp_int_disable(int flags)
{
	Uint32 token = 0;

	token |= (flags & upp_int_EOLI) ? CSL_FMKT(UPP_UPIEC_EOLI, CLEAR) : 0;	// disable end-of-line interrupt
	token |= (flags & upp_int_EOWI) ? CSL_FMKT(UPP_UPIEC_EOWI, CLEAR) : 0;	// disable end-of-transfer interrupt
	token |= (flags & upp_int_ERRI) ? CSL_FMKT(UPP_UPIEC_ERRI, CLEAR) : 0;	// disable I/O error interrupt (CBA?)
	token |= (flags & upp_int_UORI) ? CSL_FMKT(UPP_UPIEC_UORI, CLEAR) : 0;	// disable under/overrun interrupt
	token |= (flags & upp_int_DPEI) ? CSL_FMKT(UPP_UPIEC_DPEI, CLEAR) : 0;	// disable DMA programming error interrupt

	token |= (flags & upp_int_EOLQ) ? CSL_FMKT(UPP_UPIEC_EOLQ, CLEAR) : 0;	// disable end-of-line interrupt
	token |= (flags & upp_int_EOWQ) ? CSL_FMKT(UPP_UPIEC_EOWQ, CLEAR) : 0;	// disable end-of-transfer interrupt
	token |= (flags & upp_int_ERRQ) ? CSL_FMKT(UPP_UPIEC_ERRQ, CLEAR) : 0;	// disable I/O error interrupt (CBA?)
	token |= (flags & upp_int_UORQ) ? CSL_FMKT(UPP_UPIEC_UORQ, CLEAR) : 0;	// disable under/overrun interrupt
	token |= (flags & upp_int_DPEQ) ? CSL_FMKT(UPP_UPIEC_DPEQ, CLEAR) : 0;	// disable DMA programming error interrupt

	uppRegs->UPIEC = token;
}

#ifdef INTERRUPT_MODE
void upp_int_set(int flags)
{
	Uint32 token = 0;

	token |= (flags & upp_int_EOLI) ? CSL_FMKT(UPP_UPISR_EOLI, EVENT) : 0;	// generate end-of-line interrupt
	token |= (flags & upp_int_EOWI) ? CSL_FMKT(UPP_UPISR_EOWI, EVENT) : 0;	// generate end-of-transfer interrupt
	token |= (flags & upp_int_ERRI) ? CSL_FMKT(UPP_UPISR_ERRI, EVENT) : 0;	// generate I/O error interrupt (CBA?)
	token |= (flags & upp_int_UORI) ? CSL_FMKT(UPP_UPISR_UORI, EVENT) : 0;	// generate under/overrun interrupt
	token |= (flags & upp_int_DPEI) ? CSL_FMKT(UPP_UPISR_DPEI, EVENT) : 0;	// generate DMA programming error interrupt

	token |= (flags & upp_int_EOLQ) ? CSL_FMKT(UPP_UPISR_EOLQ, EVENT) : 0;	// generate end-of-line interrupt
	token |= (flags & upp_int_EOWQ) ? CSL_FMKT(UPP_UPISR_EOWQ, EVENT) : 0;	// generate end-of-transfer interrupt
	token |= (flags & upp_int_ERRQ) ? CSL_FMKT(UPP_UPISR_ERRQ, EVENT) : 0;	// generate I/O error interrupt (CBA?)
	token |= (flags & upp_int_UORQ) ? CSL_FMKT(UPP_UPISR_UORQ, EVENT) : 0;	// generate under/overrun interrupt
	token |= (flags & upp_int_DPEQ) ? CSL_FMKT(UPP_UPISR_DPEQ, EVENT) : 0;	// generate DMA programming error interrupt

	uppRegs->UPISR = token;
}

void upp_int_clear(int flags)
{
	Uint32 token = 0;

	token |= (flags & upp_int_EOLI) ? CSL_FMKT(UPP_UPIER_EOLI, CLEAR) : 0;	// clear end-of-line interrupt
	token |= (flags & upp_int_EOWI) ? CSL_FMKT(UPP_UPIER_EOWI, CLEAR) : 0;	// clear end-of-transfer interrupt
	token |= (flags & upp_int_ERRI) ? CSL_FMKT(UPP_UPIER_ERRI, CLEAR) : 0;	// clear I/O error interrupt (CBA?)
	token |= (flags & upp_int_UORI) ? CSL_FMKT(UPP_UPIER_UORI, CLEAR) : 0;	// clear under/overrun interrupt
	token |= (flags & upp_int_DPEI) ? CSL_FMKT(UPP_UPIER_DPEI, CLEAR) : 0;	// clear DMA programming error interrupt

	token |= (flags & upp_int_EOLQ) ? CSL_FMKT(UPP_UPIER_EOLQ, CLEAR) : 0;	// clear end-of-line interrupt
	token |= (flags & upp_int_EOWQ) ? CSL_FMKT(UPP_UPIER_EOWQ, CLEAR) : 0;	// clear end-of-transfer interrupt
	token |= (flags & upp_int_ERRQ) ? CSL_FMKT(UPP_UPIER_ERRQ, CLEAR) : 0;	// clear I/O error interrupt (CBA?)
	token |= (flags & upp_int_UORQ) ? CSL_FMKT(UPP_UPIER_UORQ, CLEAR) : 0;	// clear under/overrun interrupt
	token |= (flags & upp_int_DPEQ) ? CSL_FMKT(UPP_UPIER_DPEQ, CLEAR) : 0;	// clear DMA programming error interrupt

	uppRegs->UPIER = token;
}
#endif
int upp_int_status()
{
	Uint32 token = uppRegs->UPIER;
	int returnT = 0;

	returnT |= CSL_FEXT(token, UPP_UPIER_EOLI) ? upp_int_EOLI : 0;	// mask end-of-line interrupt
	returnT |= CSL_FEXT(token, UPP_UPIER_EOWI) ? upp_int_EOWI : 0;	// mask end-of-transfer interrupt
	returnT |= CSL_FEXT(token, UPP_UPIER_ERRI) ? upp_int_ERRI : 0;	// mask I/O error interrupt (CBA?)
	returnT |= CSL_FEXT(token, UPP_UPIER_UORI) ? upp_int_UORI : 0;	// mask under/overrun interrupt
	returnT |= CSL_FEXT(token, UPP_UPIER_DPEI) ? upp_int_DPEI : 0;	// mask DMA programming error interrupt

	returnT |= CSL_FEXT(token, UPP_UPIER_EOLQ) ? upp_int_EOLQ : 0;	// mask end-of-line interrupt
	returnT |= CSL_FEXT(token, UPP_UPIER_EOWQ) ? upp_int_EOWQ : 0;	// mask end-of-transfer interrupt
	returnT |= CSL_FEXT(token, UPP_UPIER_ERRQ) ? upp_int_ERRQ : 0;	// mask I/O error interrupt (CBA?)
	returnT |= CSL_FEXT(token, UPP_UPIER_UORQ) ? upp_int_UORQ : 0;	// mask under/overrun interrupt
	returnT |= CSL_FEXT(token, UPP_UPIER_DPEQ) ? upp_int_DPEQ : 0;	// mask DMA programming error interrupt

	return returnT;
}

#ifdef INTERRUPT_MODE
/*void upp_isr()
{
	int intStatus = upp_int_status();

	intCnt.ISR++;

	while (intStatus != 0)
	{
		if (intStatus & upp_int_EOLI)
		{
			upp_int_clear(upp_int_EOLI);
			intCnt.EOLI++;
		}
		if (intStatus & upp_int_EOWI)
		{
			upp_int_clear(upp_int_EOWI);
			intCnt.EOWI++;
		}
		if (intStatus & upp_int_ERRI)
		{
			upp_int_clear(upp_int_ERRI);
			intCnt.ERRI++;
		}
		if (intStatus & upp_int_UORI)
		{
			upp_int_clear(upp_int_UORI);
			intCnt.UORI++;
		}
		if (intStatus & upp_int_DPEI)
		{
			upp_int_clear(upp_int_DPEI);
			intCnt.DPEI++;
		}

		if (intStatus & upp_int_EOLQ)
		{
			upp_int_clear(upp_int_EOLQ);
			intCnt.EOLQ++;
		}
		if (intStatus & upp_int_EOWQ)
		{
			upp_int_clear(upp_int_EOWQ);
			intCnt.EOWQ++;
		}
		if (intStatus & upp_int_ERRQ)
		{
			upp_int_clear(upp_int_ERRQ);
			intCnt.ERRQ++;
		}
		if (intStatus & upp_int_UORQ)
		{
			upp_int_clear(upp_int_UORQ);
			intCnt.UORQ++;
		}
		if (intStatus & upp_int_DPEQ)
		{
			upp_int_clear(upp_int_DPEQ);
			intCnt.DPEQ++;
		}

		// make sure all interrupts are handled		
		intStatus = upp_int_status();
	}

	// end of interrupt (is this necessary?)
	uppRegs->UPEOI = 0;
}*/
#endif

void upp_fill_buffer(void *buf, char bits, int just, int bufferSize)
{
	int i;

	// Note: this may not work if buffer is in external memory and chip
	// 	uses 16 or 32-bit EMIF

	// for bits = 0:		create zero-filled buffer
	// for bits = 8:		create 8-bit test pattern
	// for bits > 8:		create 16-bit test pattern (crop words according to just for < 16)

	if (bits == 8)
	{
		Uint8 *cbuf;
		Uint8 cpattern[2][8] = {
			{0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00},	// alternate 0x00, 0xFF
			{0x11, 0x22, 0x44, 0x88, 0xEE, 0xDD, 0xBB, 0x77}	// shift up 1s and 0s
		};

		// use each pattern for half buffer
		cbuf = buf;
		for (i = 0; i < (bufferSize >> 1); i++)
			cbuf[i] = cpattern[0][i % 8];
		for (i = bufferSize >> 1; i < bufferSize; i++)
			cbuf[i] = cpattern[1][i % 8];
	}
	else if (bits > 8 && bits <= 16)
	{
		Uint16 *sbuf;
		Uint16 spattern[2][8] = {
			{0xFFFF, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000},	// alternate 0x0000, 0xFFFF
			{0x1111, 0x2222, 0x4444, 0x8888, 0xEEEE, 0xDDDD, 0xBBBB, 0x7777}	// shift up 1s and 0s
		};

		// modify pattern to mimic data packing if bits in [9, 15]
		if (bits < 16)
		{
			// determine how to mask pattern
			Uint16 smask = (just == UPP_DP_LJUST_0FILL) ? (0xFFFF << (16 - bits)) : (0xFFFF >> (16 - bits));

			// apply to pattern
			for (i = 0; i < 8; i++)
			{
				spattern[0][i] &= smask;
				spattern[1][i] &= smask;
				// apply sign extension fill if necessary
				if (just == UPP_DP_RJUST_SFILL)
				{
					int j;

					// find fill (per-value)
					int extVal0 = (spattern[0][i] & (1 << (bits - 1))) << 1;
					int extVal1 = (spattern[1][i] & (1 << (bits - 1))) << 1;
					for (j = bits; j < 15; j++)
					{
						extVal0 |= (extVal0 << 1);
						extVal1 |= (extVal1 << 1);
					}

					// apply fill
					spattern[0][i] |= extVal0;
					spattern[1][i] |= extVal1;
				}
			}
		}

		// use each pattern for half buffer
		sbuf = buf;
		bufferSize >>= 1;	// writing shorts, not bytes; halve iteration count
		for (i = 0; i < (bufferSize >> 1); i++)
			sbuf[i] = spattern[0][i % 8];
		for (i = bufferSize >> 1; i < bufferSize; i++)
			sbuf[i] = spattern[1][i % 8];
	}
	else
	{
		// default: zero fill
		for (i = 0; i < bufferSize; i++)
			((char *)buf)[i] = 0;
	}
}

int upp_check_buffer(void *bufferA, void *bufferB, int bufferSize)
{
	unsigned short *aBuf = (unsigned short *)bufferA;
	unsigned short *bBuf = (unsigned short *)bufferB;
	int i;

	// Note: this may not work if buffers are in external memory and chip
	// 	uses 16 or 32-bit EMIF
	for (i = 0; i < bufferSize; i++)
		if (aBuf[i] != bBuf[i]) return -1;

	return 0;
}

