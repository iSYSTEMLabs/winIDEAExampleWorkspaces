#include "SAMG53.h"     

extern void clockInit();

void sysTickInit()
{
  SYST_CSR = 0x03;
  SYST_RVR = 0x1770; // set timer to 1.00ms  
}

void disableWatchdog()
{
  #define WDT_MR          (*((volatile unsigned int *) 0x400E1454)) 
  #define WDT_MR_WDDIS    1 << 15
  WDT_MR &= ~WDT_MR_WDDIS;
}


void targetEnableInterrupts()
{ 
  sysTickInit(); 
  __asm volatile ("CPSIE i");
}

void targetDisableInterrupts()
{
  __asm volatile ("CPSID i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  clockInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void clockInit()
{
  // PLL is set to 48 MHz
  // Set FLASH wait states
  EEFC_FMR = EEFC_FMR_CONFIG;

  //disable PMC Write Protection 
  PMC_WPMR = PMC_WPMR_UNPROTECT;

  // Enable PLL0 Source SCLK_XTAL
  SUPC_CR = SUPC_CR_PSWD_XTALSEL;

  // stop pll
  PMC_CKGR_PLLAR = CKGR_PLLAR_DISABLE;

  // p_cfg->ctrl = CKGR_PLLAR_MULA(ul_mul-1) | CKGR_PLLAR_PLLAEN(ul_div) | CKGR_PLLAR_PLLACPUNT(PLL_COUNT);
  // ul_div = 1; ul_mul = 1465; PLL_COUNT = 63
  PMC_CKGR_PLLAR = CKGR_PLLAR_CONFIG;

  // wait for lock
  while((PMC_SR & PMC_SR_LOCKA_MASK)==0){}

  // switch MCK to PLLACK
  PMC_MCKR = PMC_MCKR_CONFIG;
}