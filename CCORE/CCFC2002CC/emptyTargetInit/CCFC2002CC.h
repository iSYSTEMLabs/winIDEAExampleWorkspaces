#ifndef _CCFC2002CC_H_
#define _CCFC2002CC_H_
#include "typedefs.h"

/*For the register definition do not:
  1.) Use header generated from SFRs because it has 200'000 lines and is 4MB large
  2.) Use MPC5604B or MPC5607B register definitions because some registers don't match this device
  
  Basically define your own register definitions in this file. */


void initClock(void);
void initTimer(void);
void initIrqVectors(void);
void initCPU(void);
void toggleGPIO(void);
void initINTC(void);
void initPIT(void);

extern uint32_t __IVPR_VALUE;

#define SWT_CR (*(unsigned volatile int*)0xFFF38000)
#define SWT_SR (*(unsigned volatile int*)0xFFF38010)

/* Mode registers */
#define ME_ME       0xC3FDC008
#define ME_DRUN_MC  0xC3FDC02C
#define ME_RUN0_MC  0xC3FDC030 
#define ME_MCTL     0xC3FDC004 
#define ME_GS       0xC3FDC000 
#define CGM_SC_SS   0xC3FE0378
#define ME_RUN_PC0  0xC3FDC080


/* PLL register address*/
#define PLL_CR    0xC3FE00A0
#define PLL_ADDCR 0xC3FE00A8

/* PIT register addresses */
#define PITMCR         0xC3FF0000
#define LDVAL1         0xC3FF0110
#define TCTRL1         0xC3FF0118
#define TFLG1          0xC3FF011C
#define INTC_PSR60_63  0xFFF4807C

/* INTC register addresses */
#define INTC_MCR    0xFFF48000
#define INTC_CPR    0xFFF48008


/* GPIO register adresses */
#define GCR_PCR     0xC3F93EFC
#define GPDO96_99   0xC3F90660
#define PCR99       0xC3F90106


#define mem8(addr) (*(volatile unsigned char*)(addr))
#define mem16(addr) (*(volatile unsigned short*)(addr))
#define mem32(addr) (*(volatile unsigned int*)(addr))
 


#endif  /* ifdef _CCFC2002CC_H */
 
