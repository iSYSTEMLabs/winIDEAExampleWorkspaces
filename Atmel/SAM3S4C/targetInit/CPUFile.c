#include "SAM3S4C.h"


void targetEnableInterrupts()
{               
  sysTickInit();
  __asm volatile ("CPSIE i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  disableWatchdog();
  InitPll();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void sysTickInit()
{
  SYSTICK_CTRL |= (3<<SYSTICK_CTRL_ENABLE_BIT); // enable systick timer and enable it to assert systick interrupts
  //SYSTICK_LOAD = 0x1F40; // set timer to 1.00ms 
  SYSTICK_LOAD = 0x1C27; // set timer to 1.00ms
}

void disableWatchdog()
{
  WDT_MR = (1<<WDT_MR_WDDIS_BIT); 
}


void InitPll()
{
  // External 12 MHz oscillator is used to configure PLL CPU clock to 64 MHz
  EEFC_FMR =((EEFC_FMR & 0xFFFFF0FF) | (0x3 << 8));  //flash wait states
  
  PMC_WPMR = 0x504D4300; //write protection

  CKGR_PLLAR = 0x201F3F01;  //pll 128mhz
  while((PMC_SR & (0x00000002)) == 0){} //wait for pll

  PMC_MCKR = ((PMC_MCKR & 0xFFFFFF8F) | (0x1 << 4)); //pres field - cpu speed=pll/2
  while((PMC_SR & (0x00000008)) == 0){}

  PMC_MCKR = ((PMC_MCKR & 0xFFFFFFFC) | (0x2 << 0)); //css field
  while((PMC_SR & (0x00000008)) == 0){}
  
}
