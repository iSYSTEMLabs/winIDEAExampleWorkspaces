#include "CortexM_lpc1788.h"


void targetEnableInterrupts(void)
{ 
  initSysTick();
  
  __asm volatile ("cpsie i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initCPU();

  initITM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void initCPU(void)
{
  //initClockFor60MHz();
}

void initClockFor60MHz(void)
{
  unsigned long registerValue;
  
  //disable PLL0
  MEMWR32(PLL0CON, 0x00000000);
  MEMWR32(PLL0FEED, 0xAA);
  MEMWR32(PLL0FEED, 0x55);

  //select IRC(Internal RC oscillator) as the sysclk and PLL0 clock source
  MEMWR32(CLKSRCSEL, 0x00000000);
  //cpu clock setting: use PLL0 output, divide it by 1 and use it as CPU clock 
  MEMWR32(CCLKSEL, 0x00000002);
  
  //Pll0_Out/Pll0_In=120MHz/12MHz=10=M => Msel=M-1=0x9; P=1 => Psel=0x0
  MEMWR32(PLL0CFG, 0x00000009);
  MEMWR32(PLL0FEED, 0xAA);
  MEMWR32(PLL0FEED, 0x55);

  //enable PLL
  MEMWR32(PLL0CON, 0x00000001);
  MEMWR32(PLL0FEED, 0xAA);
  MEMWR32(PLL0FEED, 0x55);
  
  //PLL0 output is connected to CPU divider and divided by 2 => CPU clock = 120MHz / 2 = 60MHz 
  MEMWR32(CCLKSEL, 0x00000102);
  MEMWR32(PLL0FEED, 0xAA);
  MEMWR32(PLL0FEED, 0x55);
  
  //set peripheral clock to 120MHz / 3=40MHz
  MEMWR32(PCLKSEL, 0x00000003);
  
  //wait for PLL to lock
  do
  {
    registerValue = MEMRD32(PLL0STAT);
  }
  while ((registerValue & (1 << 10)) == 0);
}


void initClockFor120MHz(void)
{
  unsigned long registerValue;
  
  //disable PLL0
  MEMWR32(PLL0CON, 0x00000000);
  MEMWR32(PLL0FEED, 0xAA);
  MEMWR32(PLL0FEED, 0x55);

  //select IRC(Internal RC oscillator) as the sysclk and PLL0 clock source
  MEMWR32(CLKSRCSEL, 0x00000000);
  //cpu clock setting: use PLL0 output, divide it by 1 and use it as CPU clock 
  MEMWR32(CCLKSEL, 0x00000001);
  
  //Pll0_Out/Pll0_In=120MHz/12MHz=10=M => Msel=M-1=0x9; P=1 => Psel=0x0
  MEMWR32(PLL0CFG, 0x00000009);
  MEMWR32(PLL0FEED, 0xAA);
  MEMWR32(PLL0FEED, 0x55);

  //enable PLL
  MEMWR32(PLL0CON, 0x00000001);
  MEMWR32(PLL0FEED, 0xAA);
  MEMWR32(PLL0FEED, 0x55);
  
  //PLL0 output is connected to CPU divider and divided by 1 
  MEMWR32(CCLKSEL, 0x00000101);
  MEMWR32(PLL0FEED, 0xAA);
  MEMWR32(PLL0FEED, 0x55);
  
  //set peripheral clock to 120MHz/2=60MHz
  MEMWR32(PCLKSEL, 0x00000002);
  
  //wait for PLL to lock
  do
  {
    registerValue = MEMRD32(PLL0STAT);
  }
  while ((registerValue & (1 << 10)) == 0);
}


void initSysTick(void)
{  
  ////counter reload value for timer=1 mili second: F=120MHz->T=1/F, reloadValue=(timer/T)-1=(1e-3*120*1e+6)-1=119999=0x1D4BF
  //MEMWR32(SYSTIMER_LOAD, 0x1D4BF);
  //counter reload value for timer=1 mili second: F=60MHz->T=1/F, reloadValue=(timer/T)-1=(1e-3*60*1e+6)-1=59999=0xEA5F 
  MEMWR32(SYSTIMER_LOAD, 0xEA5F);
  //system tick counter enable, system tick interrupt enable, CPU clock as system clock source 
  MEMWR32(SYSTIMER_CTRL, 0x7);
}


void initITM(void)
{
  //unlock write access to ITM
  MEMWR32(ITM_LOCK_ACCESS_REGISTER, 0xC5ACCE55);
  //enable stimulus port 0-31
  MEMWR32(ITM_TRACE_ENABLE_REGISTER, 0xFFFFFFFF);
  //set privilege
  MEMWR32(ITM_TRACE_PRIVILEGE_REGISTER, 0x1);
}


void disableWatchdog()
{
}
