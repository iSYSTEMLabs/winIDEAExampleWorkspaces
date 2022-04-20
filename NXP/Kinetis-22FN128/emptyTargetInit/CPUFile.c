#include "kinetis.h"
#include "VectM.h" 
#include "MK60DZ10.h"


void initPITInterrupt(void)
{ 
  PIT_LDVAL0 = 0x12000; //LDVAL
  PIT_TCTRL0 = PIT_TCTRL_TIE_MASK | PIT_TCTRL_TEN_MASK ; // enable timer interrupt and enable timer (PIT_TCTRL0)
}

void initNVIC(void)
{                    
  #define INT_32_43_CLR_PEND *(volatile unsigned int*) 0xE000E284     
  #define INT_32_43_SET_ENA  *(volatile unsigned int*) 0xE000E104
  INT_32_43_CLR_PEND = (1<<16); //clear PIT pending interrupt
  INT_32_43_SET_ENA = INT_32_43_SET_ENA | (1<<16);
  NVIC_IP(48) = NVIC_IP_PRI48(0xf0); //interrupt priority register
}

void setClockTo48MHz()
{ 
  MCG_C4 = MCG_C4 | (1<<7);//DMX32 set to 1
  MCG_C4 = MCG_C4 | (1<<6);//change the FLL multiplier to 1464 (48MHz)
}  

void ImmInit()
{
  // Disable watchdog:
  // Takes too long to get here if PLL/FLL not set.
  // PLL/FLL set in ini file. WD can not be disabled there - core needs to run.
  *((unsigned short *)0x4005200E) = 0xC520;
  *((unsigned short *)0x4005200E) = 0xD928;
  *((unsigned short *)0x40052000) = 0;  
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void enablePIT()
{
  SIM_SCGC6 |= SIM_SCGC6_PIT_MASK; //SIM_SCGC6 -- enable PIT gate control
  PIT_MCR = 0x00;  //enable PIT 
}

void targetEnableInterrupts(void)
{ 
  initPITInterrupt();
  asm("CPSIE i \n");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  setClockTo48MHz();
  initNVIC();
  ITMInit();
  enablePIT();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void TimerInterruptHandler()
{
  InterruptRoutine();
}


void disableWatchdog()
{
}
