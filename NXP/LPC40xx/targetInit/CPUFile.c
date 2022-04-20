#include "lpc40xx.h"


void initClock(void) 
{
  //disable PLL0
  PLL0CON = 0x00000000;
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;

  //select IRC(Internal RC oscillator) as the sysclk and PLL0 clock source
  CLKSRCSEL = 0x00000000;
  //cpu clock setting: use PLL0 output, divide it by 1 and use it as CPU clock 
  CCLKSEL = 0x00000001;
  
  //Pll0_Out/Pll0_In=120MHz/12MHz=10=M => Msel=M-1=0x9; P=1 => Psel=0x0
  //Max Frequency = 120MHz
  PLL0CFG = 0x00000009;
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;

  //enable PLL
  PLL0CON = 0x00000001;
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;
  
  //PLL0 output is connected to CPU divider and divided by 1 
  CCLKSEL = 0x00000101;
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;
  
  //set peripheral clock to 120MHz/2=60MHz
  PCLKSEL = 0x00000002;
  
  //wait for PLL to lock
  while ((PLL0STAT & (1 << 10)) == 0);  
}

void initITM(void)
{
  ITM_LOCK_ACCESS_REGISTER = 0xC5ACCE55; //unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER = 0xFFFFFFFF; //enable stimulus port 0-31 
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1; //set privilege
}


void targetEnableInterrupts()
{ 
  initSysTick();
  __asm volatile ("cpsie i");   
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  //initClock(); //Trace doesn't work on max frequency, reverting to 12MHz, where it works.
  initITM(); 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void initSysTick()
{  
  ////counter reload value for timer=1 mili second: F=120MHz->T=1/F, reloadValue=(timer/T)-1=(1e-3*120*1e+6)-1=119999=0x1D4BF
  //MEMWR32(SYSTIMER_LOAD, 0x1D4BF);
  //counter reload value for timer=1 mili second: F=12MHz->T=1/F, reloadValue=(timer/T)-1=(1e-3*60*1e+6)-1=11999=0x2EDF 
 SYST_RVR = 0x2EDF;
  //system tick counter enable, system tick interrupt enable, CPU clock as system clock source 
 SYST_CSR = 0x7;
}


void disableWatchdog()
{
}
