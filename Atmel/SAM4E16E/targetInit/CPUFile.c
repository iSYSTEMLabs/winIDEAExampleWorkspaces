#include "SAM4E16E.h"


void sysTickInit()
{
  SYST_CSR = 0x03;
  SYST_RVR = 0x3A98; // set timer to 1.00ms  
  //SYST_RVR = 0x01; // set timer to minimal  
}


void ledInit(){
  //configure PA0 as output, on the board led D2                                    
  PIO_PER |= (1<<0); // enable register
  PIO_OER |= (1<<0); // enable output
  PIO_SODR |= (1<<0); // set output register
  PIO_PUDR |= (1<<0); // disconnect pullup  
}

void targetEnableInterrupts()
{ 
  sysTickInit(); 
  __asm volatile ("CPSIE i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  pllInit();
  ledInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void pllInit()
{
  // External 12 MHz oscilator, pll clock to: 240MHz (max), cpu clock to: 120 MHz (max)
  
  // Set FLASH wait states
  EEFC_FMR = EEFC_FMR_CONFIG;

  // disable PMC Write Protection 
  PMC_WPMR = PMC_WPMR_UNPROTECT;

  // switch CSS to MAIN_CLK
  PMC_MCKR = PMC_MCKR_CONFIG_0;

  // Switch MAINCK to XTAL
  PMC_CKGR_MOR = CKGR_MOR_CONFIG;

  // Wait for RDY
  while((PMC_SR & PMC_SR_MOSCXTS_MASK)==0){}

  // Select Main Oscilator
  PMC_CKGR_MOR = CKGR_MOR_CONFIG_2;

  // Wait for RDY
  while((PMC_SR & PMC_SR_MOSCSEL_MASK)==0){}

  // stop pll, CKGR_PLLAR_MULLA = 0
  PMC_CKGR_PLLAR = CKGR_PLLAR_DISABLE;

  // p_cfg->ctrl = CKGR_PLLAR_MULA(ul_mul-1) | CKGR_PLLAR_PLLAEN(ul_div) | CKGR_PLLAR_PLLACPUNT(PLL_COUNT);
  // ul_div = 1; ul_mul = 20; PLL_COUNT = 63
  PMC_CKGR_PLLAR = CKGR_PLLAR_CONFIG;

  // wait for lock
  while((PMC_SR & PMC_SR_LOCKA_MASK)==0){}

  // switch MCK to PLLACK
  PMC_MCKR = PMC_MCKR_CONFIG_2;

  // wait for lock
  while((PMC_SR & PMC_SR_MCKRDY_MASK)==0){}

}

void disableWatchdog()
{
}
