#include "kinetis.h"
#include "VectM.h" 
#include "MK60DZ10.h"


void initPITInterrupt(void)
{
  SIM_SCGC6 = SIM_SCGC6 | SIM_SCGC6_PIT_MASK; //SIM_SCGC6 -- enable PIT gate control
  while(PIT_MCR != 0x0)
  {
    PIT_MCR = 0x0;  //enable PIT
  }
  PIT_LDVAL0 = 48000; //LDVAL
  PIT_TCTRL0 |= PIT_TCTRL_TIE_MASK | PIT_TCTRL_TEN_MASK ; // enable timer interrupt and enable timer (PIT_TCTRL0)
  targetDisableInterrupts();
}

void initNVIC(void)
{                    
  #define INT_32_43_CLR_PEND *(volatile unsigned int*) 0xE000E284     
  #define INT_32_43_SET_ENA  *(volatile unsigned int*) 0xE000E104
  INT_32_43_CLR_PEND = (1<<16); //clear PIT pending interrupt
  INT_32_43_SET_ENA = INT_32_43_SET_ENA | (1<<16);
  NVIC_IP(48) = NVIC_IP_PRI48(0xf0); //interrupt priority register
}

void setClockTo96MHz()
{ 
  // OUTDIV1 core clock divider set to 1 = 96 MHz   
  // OUTDIV2 Bus clock divider set to 2 = 48 MHz
  // OUTDIV3 FlexBus clock divider set to 3 = 32 MHz
  // OUTDIV4 Flash clock divider set to 4 = 24 MHz
  SIM_CLKDIV1 = 0x1230000;  
  MCG_C4 = 0xF2;//change the FLL to output 96 MHz.                         
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


void targetEnableInterrupts()
{                    
  asm("CPSIE i \n");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  setClockTo96MHz();
  initNVIC();
  ITMInit();
  initPITInterrupt();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void targetDisableInterrupts()
{
  asm("CPSID i \n");
}


void TimerInterruptHandler()
{
  PIT_TFLG0 |= PIT_TFLG_TIF_MASK;
  PIT_CVAL0 |= PIT_CVAL_TVL_MASK;
  
  InterruptRoutine();
}


void disableWatchdog()
{
}
