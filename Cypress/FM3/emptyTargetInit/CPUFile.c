#include "fm3.h"


void clockInit()
{
  PSW_TMR = 0x00;  //pll clock stabilization
  SCM_CTL = 0x10;  //system clock mode; set to pll
  SWC_PSR = 0x03;  //watchdog prescale register
  CSW_TMR = 0x5C;  //clock stabilization
  PLL_CTL2 = 0x13; //pll control register; M=19+1
  SCM_CTL |= (2 << 5);  //set PLL as main clock 
  
  while(!(SCM_STR & (1 << 4)));  //wait until SCM_STR.PLRDY bit sets to 1
}

void CPU_Init()
{
  #define FM3_REG_WDGLDR    (*((volatile int *)  0x40011000))
  #define FM3_REG_WDGCTL    (*((volatile char *) 0x40011008))
  #define FM3_REG_WDGLCK    (*((volatile int *)  0x40011C00))
    
  FM3_REG_WDGLCK = 0x1ACCE551;
  FM3_REG_WDGLCK = 0xE5331AAE;
  FM3_REG_WDGCTL = 0; // Disable hardware WD timer
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void sysTickInit()
{
  SYST_CSR = 0x03;
  SYST_RVR = 0x2700; // set timer to 1.00ms  
}

void targetEnableInterrupts()
{ 
  sysTickInit();
  __asm volatile ("cpsie i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  clockInit();    
  ITMInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
