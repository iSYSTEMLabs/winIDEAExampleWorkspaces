#include "fm4.h"


void clockInit()
{
  APBC0_PSR = 0x0;
  APBC1_PSR = 0x80;
  APBC2_PSR = 0x80;
  MCR_FTRM = 0x1EF; 
  SWC_PSR = 0x03;
  CSW_TMR = 0x5C;
  PSW_TMR = 0x10;
  PLL_CTL2 = 0x13;
  RST_STR = 0x0002;
  SCM_CTL = 0x50;
  while (!(SCM_STR & 0x50));  
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
