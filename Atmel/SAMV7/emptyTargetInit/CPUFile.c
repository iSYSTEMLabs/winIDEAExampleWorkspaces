#include "samv7xx.h"


void initClock()
{
  // set Flash access latency based on System clock (125 MHz -> 5 (5-1 FWS) wait states)
  EEFC_FMR |= (0x5 << EEFC_FMR_FWS);
  
  PMC_MCKR |= (0x1 << PMC_MCKR_CSS);
  
  /*
    In MOR we must write all values at the same time so we prepare new value
    and then write it to register
  */
  int new_mor_value = CKGR_MOR;
  new_mor_value |= (0x37 << CKGR_MOR_KEY);
  new_mor_value |= (1 << CKGR_MOR_MOSCXTEN);
  new_mor_value |= (0xFF << CKGR_MOR_MOSCXTST);
  
  
  CKGR_MOR = new_mor_value;
  
  // wait for ext. oscilator to become stable
  while (!(PMC_SR & (1 << PMC_SR_MOSCXTS)));
  
  new_mor_value = CKGR_MOR;
  new_mor_value |= (0x37 << CKGR_MOR_KEY);
  new_mor_value |= (1 << CKGR_MOR_MOSCSEL);
  
  CKGR_MOR = new_mor_value;
  
  // wait for ext. oscilator to become selected 
  while (!(PMC_SR & (1 << PMC_SR_MOSCSELS)));
  
  // enable writing to PLLAR register
  CKGR_PLLAR |= (1 << CKGR_PLLAR_ONE);
  
  CKGR_PLLAR |= (0x4 << CKGR_PLLAR_PLLACOUNT);

  // set divider to 1 (bypass divider)
  CKGR_PLLAR |= (1 << CKGR_PLLAR_DIVA);
  // set multiplier to 19 (20 - 1) so that clock output is 240 MHz (max 250 MHz)
  CKGR_PLLAR |= (19 << CKGR_PLLAR_MULA);
  
  // wait for the PLL to become locked
  while (!(PMC_SR & (1 << PMC_SR_LOCKA)));
    
  /*
    select PLLA as master clock
    set Master clock divider so master clock is 120 MHz (max 125 MHz)
    after each modification in MCKR register we must wait for MCKRDY flag
  */
  PMC_MCKR |= (1 << PMC_MCKR_MDIV);
  while (!(PMC_SR & (1 << PMC_SR_MCKRDY)));
  PMC_MCKR &= ~(0x3 << PMC_MCKR_CSS);
  while (!(PMC_SR & (1 << PMC_SR_MCKRDY)));
  PMC_MCKR |= (0x2 << PMC_MCKR_CSS);
  while (!(PMC_SR & (1 << PMC_SR_MCKRDY)));  
}

void initTIM0(){
  PMC_PCR |= (0x17 << PMC_PCR_PID);
  PMC_PCR |= (0x1 << PMC_PCR_EN);
  
  // enable clock for timer 0
  PMC_PCER0 |= (1 << PMC_PCER0_TIM0);
  
  // Select MCK/8 as timer clock
  TC0_CMR0 &= ~(0x7 << TC0_CMR0_TCCLKS);
  TC0_CMR0 |= (1 << TC0_CMR0_TCCLKS);
  
  // Enable wave mode
  TC0_CMR0 |= (0x1 << TC0_CMR0_WAVE);
  
  // Select wave mode
  TC0_CMR0 &= ~(0x3 << TC0_CMR0_WAVSEL);
  TC0_CMR0 |= (0x2 << TC0_CMR0_WAVSEL);
  
  // load register C with reload value
  TC0_RC0 = 0x3b00;
  
  //enable interrupt on RC compare
  TC0_IER0 |= (1 << TC0_IER0_CPCS);
  
  // enable clock
  TC0_CCR0 &= ~(0x7 << TC0_CCR0_CLKEN);
  TC0_CCR0 |= (1 << TC0_CCR0_CLKEN);
  TC0_CCR0 |= (1 << TC0_CCR0_SWTRG);
}


void disableWatchdog()
{
  WDT_MR |= (1 << WDT_MR_WDDIS);    
}

void initTPIU()
{
  PMC_PCK3 = 0x1; // select MAINCK for PCK3 clock (TPIU)
  PMC_SCER = 0x800; // enable PCK3 clock (TPIU)
}

void targetEnableInterrupts()
{
  INT_0_31_SET_EN |= (1 << INT_TIM0);  
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTPIU(); // Necessary for SWO 
  ITMInit();
  initTIM0();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}
