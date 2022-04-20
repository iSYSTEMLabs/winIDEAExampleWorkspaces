#include "LPC546xx.h"
#include "pll_lib.h"


void initITM(void)
{
  ITM_LOCK_ACCESS_REGISTER = 0xC5ACCE55; //unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER = 0xFFFFFFFF; //enable stimulus port 0-31 
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1; //set privilege
}


void initTimer(){
  SYSCON_AHBCLKCTRL1 |= (0x1 << SYSCON_AHBCLKCTRL1_CTIMER0);
  CTIMER0_MCR |= (0x1 << CTIMER0_MCR_MR0I); 
  CTIMER0_MCR |= (0x1 << CTIMER0_MCR_MR0R);
  CTIMER0_MR0 = 0x2BF20;
}

/* Init clock from 12 MHz (Y2) ext. osc. to 180 MHz (max) */
void initClock(){
  int val;
  int m = 180;
  int n = 12;
  int p = 1;
  int seli, selp, selr;
  
  /* Encode values of PLL parameters */
  int penc = pllEncodeP(p);
  int nenc = pllEncodeN(n);
  int menc = pllEncodeM(m);
  
  /* Find out PLL filter parameters based on M divider */
  pllFindSel(m, &selp, &seli, &selr);
                                                             
  /* Power up main osc. and set main osc. frequency range (high) */
  SYSCON_SYSOSCCTRL |= (0x1 << SYSCON_SYSOSCCTRL_FREQRANGE);
  SYSCON_PDRUNCFGCLR0 |= (0x1 << SYSCON_PDRUNCFGCLR0_VD2);
  SYSCON_PDRUNCFGCLR1 |= (0x1 << SYSCON_PDRUNCFGCLR1_SYSOSC);
  
  /* If PLL used enable asynchronious APB bridge */
  SYSCON_ASYNCAPBCTRL = 0x1;
  ASYNC_SYSCON_ASYNCAPBCLKSELA = 0x1;
  
  /* Set Flash wait states for 180 MHz operation */
  SYSCON_FLASHCFG |= (0x8 << SYSCON_FLASHCFG_FLASHTIM);
                                                             
  /* Select ext. osc. as PLL input clock */
  SYSCON_SYSPLLCLKSEL |= (0x1 << SYSCON_SYSPLLCLKSEL_SEL); 
  
  /* Power down PLL */
  SYSCON_PDRUNCFGSET0 |= (0x1 << SYSCON_PDRUNCFGSET0_SYS_PLL);
  
  /* Power up control of all PLL */
  SYSCON_PDRUNCFGCLR0 |= (0x1 << SYSCON_PDRUNCFGCLR0_VD3);
  
  /* Configure PLL */
  val = 0x0;
  val |= (seli << SYSCON_SYSPLLCTRL_SELI);            
  val |= (selp << SYSCON_SYSPLLCTRL_SELP);            
  val |= (selr << SYSCON_SYSPLLCTRL_SELR);
  SYSCON_SYSPLLCTRL = val;
  
  /* Set M, N and P predividers */
  SYSCON_SYSPLLMDEC = menc;
  SYSCON_SYSPLLMDEC = menc | (0x1 << SYSCON_SYSPLLMDEC_MREQ);
  SYSCON_SYSPLLNDEC = nenc;
  SYSCON_SYSPLLNDEC = nenc | (0x1 << SYSCON_SYSPLLNDEC_NREQ);
  SYSCON_SYSPLLPDEC = penc;
  SYSCON_SYSPLLPDEC = penc | (0x1 << SYSCON_SYSPLLPDEC_PREQ);
  
  /* Power up PLL */
  SYSCON_PDRUNCFGCLR0 |= (0x1 << SYSCON_PDRUNCFGCLR0_SYS_PLL);
                                                          
  /* Wait for PLL to acquire lock */
  while (!(SYSCON_SYSPLLSTAT & (0x1 << SYSCON_SYSPLLSTAT_LOCK)));
  
  /* Select PLL output as main clock */
  SYSCON_MAINCLKSELB |= (0x2 << SYSCON_MAINCLKSELB_SEL);
}

void targetEnableInterrupts(){ 
  INT_0_31_SET_EN |= (0x1 << INT_0_31_SET_EN_CTIMER0);
  CTIMER0_TCR |= (0x1 << CTIMER0_TCR_CEN);
  asm("CPSIE i");
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer(); 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
