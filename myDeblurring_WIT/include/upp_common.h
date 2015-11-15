// upp_util.h

//#include <device.h>
#include <ti/csl/csl_bootcfg.h>
#include <ti/csl/csl_psc.h>
//#include <ti\csl\src\intc\csl_intc.h>
#include <ti/csl/cslr_upp.h>
#include <ti/csl/cslr_device.h>

#include <ti/csl/src/intc/csl_intc.h>
#include <ti/csl/src/intc/csl_intc.h>

#if defined(__TMS470__)
	#include "arm_int_index.h"
#elif defined(_TMS320C6X)
//	#include "gem_int_index.h"
#endif

#define CSL_INTC_RPIINT             (0x0000003f)

#define CSL_UPP_UPIER_DPEI_CLEAR	(0x00000001u)
#define CSL_UPP_UPIER_UORI_CLEAR	(0x00000001u)
#define CSL_UPP_UPIER_ERRI_CLEAR	(0x00000001u)
#define CSL_UPP_UPIER_EOWI_CLEAR	(0x00000001u)
#define CSL_UPP_UPIER_EOLI_CLEAR	(0x00000001u)
#define CSL_UPP_UPIER_DPEQ_CLEAR	(0x00000001u)
#define CSL_UPP_UPIER_UORQ_CLEAR	(0x00000001u)
#define CSL_UPP_UPIER_ERRQ_CLEAR	(0x00000001u)
#define CSL_UPP_UPIER_EOWQ_CLEAR	(0x00000001u)
#define CSL_UPP_UPIER_EOLQ_CLEAR	(0x00000001u)


#define CSL_UPP_UPISR_DPEI_EVENT	(0x00000001u)
#define CSL_UPP_UPISR_UORI_EVENT	(0x00000001u)
#define CSL_UPP_UPISR_ERRI_EVENT	(0x00000001u)
#define CSL_UPP_UPISR_EOWI_EVENT	(0x00000001u)
#define CSL_UPP_UPISR_EOLI_EVENT	(0x00000001u)
#define CSL_UPP_UPISR_DPEQ_EVENT	(0x00000001u)
#define CSL_UPP_UPISR_UORQ_EVENT	(0x00000001u)
#define CSL_UPP_UPISR_ERRQ_EVENT	(0x00000001u)
#define CSL_UPP_UPISR_EOWQ_EVENT	(0x00000001u)
#define CSL_UPP_UPISR_EOLQ_EVENT	(0x00000001u)

#define upp_int_DPEI	(0x00000001u)
#define upp_int_UORI	(0x00000002u)
#define upp_int_ERRI	(0x00000004u)
#define upp_int_EOWI	(0x00000008u)
#define upp_int_EOLI	(0x00000010u)
#define upp_int_DPEQ	(0x00000100u)
#define upp_int_UORQ	(0x00000200u)
#define upp_int_ERRQ	(0x00000400u)
#define upp_int_EOWQ	(0x00000800u)
#define upp_int_EOLQ	(0x00001000u)

	typedef enum {
		UPP_DIR_RCV	= 0,
		UPP_DIR_XMT
	} upp_util_ch_dir;

	typedef enum {
		UPP_DR_SDR	= 0,
		UPP_DR_DDR
	} upp_util_ch_dr;

	typedef enum {
		UPP_DP_RJUST_0FILL	= 0,
		UPP_DP_RJUST_SFILL,
		UPP_DP_LJUST_0FILL
	} upp_util_ch_dp;

	typedef enum {
		UPP_TT_64B = 0,
		UPP_TT_128B,
		UPP_TT_256B
	} upp_util_ch_tt;

typedef struct {
	upp_util_ch_dir	direction;
	upp_util_ch_dr	dataRate;
	upp_util_ch_dp	dataPacking;
	Uint8	dataWidthVal, clkDivVal;
	Uint16	idleValueVal;
	upp_util_ch_tt	txThresh, rcvThresh;
	char	useTristate, useWait, useEnable, useStart,
			invClk, invWait, invEnable, invStart;

} uppChanParams;

	typedef enum {
		UPP_LB_INTERNAL = 0,
		UPP_LB_EXTERNAL,
		UPP_LB_NONE
	} upp_util_lb;

typedef struct {
	upp_util_lb loopback;
	uppChanParams A, B;
	Uint8	numChannelsVal;
	char	useInterleave;
} uppDevParams;

typedef enum {
	UPP_DMA_CHAN_I = 0,
	UPP_DMA_CHAN_Q
} uppDmaChan;

typedef struct {
	volatile int	EOLI, EOWI, ERRI, UORI, DPEI,
					EOLQ, EOWQ, ERRQ, UORQ, DPEQ,
					ISR;
} upp_int_cnt;

void upp_pinmux_enable(void);

// note: ARM doesn't need (or recognize) "far" keyword
#if defined(__TMS470__)
	extern uppChanParams uppChanParams_DEFAULT;
	extern uppDevParams uppDevParams_DEFAULT;

	extern CSL_UppRegsOvly uppRegs;

	extern volatile upp_int_cnt intCnt;

	extern void upp_key_config();
	extern void upp_ch0_pinmuxEn();
	extern void upp_ch1_pinmuxEn();
	extern void upp_psc_enable();
	extern void upp_intc_setup(void (*isr)(void *));

	extern int upp_config(uppDevParams *params);
	extern void upp_dma_prog(uppDmaChan channel, void *dataPtr, int lineCnt, int bytesPerLine, int lineIndex);

	extern void upp_int_enable(int flags);
	extern void upp_int_disable(int flags);
	extern void upp_int_set(int flags);
	extern void upp_int_clear(int flags);
	extern int upp_int_status();

	extern int upp_isr();

	extern void upp_fill_buffer(void *buf, char bits, int just, int bufferSize);
	extern int upp_check_buffer(void *bufferA, void *bufferB, int bufferSize);
#else
	extern far uppChanParams uppChanParams_DEFAULT;
	extern far uppDevParams uppDevParams_DEFAULT;

	extern far CSL_UppRegsOvly uppRegs;

//	extern far volatile upp_int_cnt intCnt;


	extern far void upp_key_config();
	extern far void upp_ch0_pinmuxEn();
	extern far void upp_ch1_pinmuxEn();
	extern far void upp_psc_enable();
	extern far void upp_intc_setup(void (*isr)(void *));

	extern far int upp_config(uppDevParams *params);
	extern far void upp_dma_prog(uppDmaChan channel, void *dataPtr, int lineCnt, int bytesPerLine, int lineIndex);

	extern far void upp_int_enable(int flags);
	extern far void upp_int_disable(int flags);
	extern far void upp_int_set(int flags);
	extern far void upp_int_clear(int flags);
	extern far int upp_int_status();

	extern far int upp_isr();

	extern far void upp_fill_buffer(void *buf, char bits, int just, int bufferSize);
	extern far int upp_check_buffer(void *bufferA, void *bufferB, int bufferSize);
#endif
