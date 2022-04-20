#include "fm0.h"


void clockInit()
{
  SCM_CTL = 0x50; // switch to PLL
  while((SCM_STR & (1<<6) == 0) | (SCM_STR & (1<<4) == 0)); // wait for clock status
  SWC_PSR = 0x03; //WD clock is 1/8 PCLK0
  CSW_TMR = 0x5C; //clock stabilization wait time
  PSW_TMR = 0x10; // PLL input clock is high speed CR clock (4MHz), set PLL stabilization time
  PLL_CTL2 = 0x13; // 20 PLLN
  RST_STR = 0x0002; //INITX reset 
}

void CPU_Init()
{   

}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void sysTickInit()
{
  SYST_RVR = 0x2700; // set timer to 1.00ms  
  SYST_CVR = 0x0; //reset current value so it starts with 0
  SYST_CSR |= (1<<0); //enable sys tick timer
}


void targetEnableInterrupts()
{ 
  SYST_CSR |= (1<<1); //enable sys tick timer interrupt
  __asm volatile ("cpsie i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  clockInit();    
  ITMInit();
  sysTickInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
  WDGLCK = 0x1ACCE551;
  WDGLCK = 0xE5331AAE;
  WDGCTL = 0; // Disable hardware WD timer
}
