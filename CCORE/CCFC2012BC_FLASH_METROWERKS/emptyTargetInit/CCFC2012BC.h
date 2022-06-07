#ifndef _CCFC2012BC_H_
#define _CCFC2012BC_H_

void targetInit(void);
void targetShutdown(void);
void targetEnableInterrupts(void);
void disableWatchdog(void);
void initClock(void);
void initTimer(void);
void initINTC(void);

extern unsigned int __IVPR_VALUE;

#define SWT_CR        (*(unsigned volatile int*)0xFFF38000)
#define SWT_SR        (*(unsigned volatile int*)0xFFF38010)

#define ME_GS         (*(unsigned volatile int*)0xC3FDC000)
#define ME_MCTL       (*(unsigned volatile int*)0xC3FDC004)
#define ME_ME         (*(unsigned volatile int*)0xC3FDC008)
#define ME_DRUN_MC    (*(unsigned volatile int*)0xC3FDC02C)
#define ME_RUN0_MC    (*(unsigned volatile int*)0xC3FDC030)
#define ME_RUN_PC0    (*(unsigned volatile int*)0xC3FDC080)

#define CGM_SC_SS     (*(unsigned volatile int*)0xC3FE0378)
#define FMPLL_CR      (*(unsigned volatile int*)0xC3FE00A0)

#define PITMCR        (*(unsigned volatile int*)0xC3FF0000)
#define PIT_LDVAL1    (*(unsigned volatile int*)0xC3FF0110)
#define PIT_TCTRL1    (*(unsigned volatile int*)0xC3FF0118)

#define INTC_MCR      (*(unsigned volatile int*)0xFFF48000)
#define INTC_CPR      (*(unsigned volatile int*)0xFFF48008)
#define INTC_PSR60_63 (*(unsigned volatile int*)0xFFF4807C)

#define PCR38         (*(unsigned volatile int*)0xC3F9008C)
#define GPDO36_39     (*(unsigned volatile int*)0xC3F90624)

#define XOSC0ON       0x00000020
#define SYSCLK_EXT    0x00000002 
#define SYSCLK_PLL    0x00000004 
#define PLL0ON        0x00000040 
#define IRCON         0x00000010

#define MCTL_KEY      0x00005AF0 
#define MCTL_KEY_INV  0x0000A50F

#define ME_ME_RESET   0x00000001
#define ME_ME_SAFE    0x00000004
#define ME_ME_DRUN    0x00000008
#define ME_ME_RUN0    0x00000010
#define ME_RUN_PC_ALL 0x000000FF

#define MODE_MASK     0xF0000000
#define MODE_DRUN     0x30000000
#define MODE_RUN0     0x40000000

#define S_MTRANS      0x08000000

#define PLL_IDF_DIV2  0x04000000
#define PLL_ODF_DIV8  0x02000000
#define PLL_NDIV_64   0x00400000
#define EN_PLL_SW     0x00000100
#define PLL_S_LOCK    0x00000008
#define SEL_FM_PLL    0x00000100

#define PITMCR_MDIS   0x00000002
#define PITMCR_FRZ    0x00000001

#define PIT_TCTRL_TIE 0x00000002
#define PIT_TCTRL_TEN 0x00000001

#define INTC_PRI60_1  0x01000000
#define INTC_MCR_HVEN 0x00000001

#define PDO_38_HI     0x00000100
#define PCR_OBE       0x02000000


#endif  /* ifdef _CCFC2012BC_H */
/* End of file */ 