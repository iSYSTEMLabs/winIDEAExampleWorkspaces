#include "SAM3X8E.h"


void targetEnableInterrupts()
{               
  sysTickInit();
  __asm volatile ("CPSIE i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  disableWatchdog();
  initPll();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void sysTickInit()
{
  SYSTICK_CTRL |= (3<<SYSTICK_CTRL_ENABLE_BIT); // enable systick timer and enable it to assert systick interrupts
  SYSTICK_LOAD = 0x28AF; // set timer to 1ms cpu at 84mhz
  //SYSTICK_LOAD = 0x24C5; // set timer to 1.00ms pll:144mhz cpu:72mhz
}

void disableWatchdog()
{
  WDT_MR = (1<<WDT_MR_WDDIS_BIT); 
}


void initPll(){
  
  EFC0_FMR = 0x00000400;
  EFC1_FMR = 0x00000400;
  
  PMC_WPMR = 0x504D4300; //write protection

  CKGR_MOR = 0x00370018;
  //while((PMC_SR & (0x00000001))==0){}

  CKGR_PLLAR = 0x20140001;  //pll set mul 8*21 mul = 20
  //CKGR_PLLAR = 0x20120001;  //pll set mul 8*21 mul = 18
  while((PMC_SR & (0x00000002)) == 0){}

  PMC_MCKR = ((PMC_MCKR & 0xFFFFFF8F) | (0x1 << 4)); //pres field
  while((PMC_SR & (0x00000008)) == 0){}

  PMC_MCKR = ((PMC_MCKR & 0xFFFFFFFC) | (0x2 << 0)); //css field
  while((PMC_SR & (0x00000008)) == 0){}
  
}
