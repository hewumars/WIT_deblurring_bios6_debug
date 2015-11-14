/*
 * McBSP.c
 *
 *  Created on: 2014-1-3
 *      Author: Administrator
 */

#include "McBSP.h"
#include "regs.h"

//#define	LOOPBACK

/*-------------------------------------------------------------------------*/
/* mcbsp_init() -                                		*/
/*-------------------------------------------------------------------------*/
void mcbsp_init(unsigned int ch, unsigned int ClkGdv, int size)
{
	int wait;
	volatile McBSP_REG * mcbsp;
  	mcbsp = (volatile McBSP_REG *)(McBSP_BASE_ADDR(ch));

#ifdef LOOPBACK
  	mcbsp->SPCR = 0 + (1<<DLB) + (0<<XINTM) + (0<<RINTM);// + (1<<FREE) + (1<<SOFT);         /* reset serial port     */
#else
  	mcbsp->SPCR = 0 + (0<<XINTM) + (0<<RINTM);// + (2<<XINTM) + (2<<RINTM);         /* reset serial port     */
#endif

/*********************************************************************************/
/*modefied by shiyan at 11/6/2003*/
#ifdef LOOPBACK
  	mcbsp->SRGR = ((1<<CLKSM) + (1<<FSGM) + (1<<FWID) +
					(0xfff<<FPER) + (ClkGdv<<CLKGDV));
#else
  	mcbsp->SRGR = ((1<<CLKSM) + (0<<FSGM) + (15<<FWID) +
					(320<<FPER) + (ClkGdv<<CLKGDV));
#endif
//	mcbsp->SRGR = ((1<<CLKSM) + (0<<FSGM) +
//			((ELEMENT_SIZE*MSG_SIZE-1)<<FPER) + (ClkGdv<<CLKGDV));
/*********************************************************************************/

	mcbsp->PCR = ((1<<FSXM) + (1<<CLKXM)
					+(0<<FSRM) + (0<<CLKRM));

#ifdef LOOPBACK
	mcbsp->XCR = ((0<<FIG) + (2<<WDLEN1) +
				((size-1)<<FRLEN1) + (1<<DATDLY));
#else
	mcbsp->XCR = ((0<<FIG) + (2<<WDLEN1) +
				((size-1)<<FRLEN1) + (0<<DATDLY));
#endif

#ifdef LOOPBACK
	mcbsp->RCR = ((0<<FIG) + (2<<WDLEN1) +
  				((size-1)<<FRLEN1) + (1<<DATDLY));
#else
	mcbsp->RCR = ((0<<FIG) + (2<<WDLEN1) +
  				((size-1)<<FRLEN1) + (0<<DATDLY));
#endif

	mcbsp->MCR = 0;
	mcbsp->RCERE0 = 0xffffffff;
	mcbsp->XCERE0 = 0xffffffff;

	mcbsp->RCERE1 = 0xffffffff;
	mcbsp->XCERE1 = 0xffffffff;
	mcbsp->RCERE2 = 0xffffffff;
	mcbsp->XCERE2 = 0xffffffff;
	mcbsp->RCERE3 = 0xffffffff;
	mcbsp->XCERE3 = 0xffffffff;

	for (wait=0; wait<0x10; wait++);
}


