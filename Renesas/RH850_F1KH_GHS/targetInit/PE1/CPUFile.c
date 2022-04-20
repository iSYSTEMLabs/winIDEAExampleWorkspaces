#include "dr7f701709.dvf.h"
#include "dr7f701709_irq_pe1.h"
#include "rh850.h"


void targetEnableInterrupts(void);
void targetDisableInterrupts(void);

void enableSecondCore()
{
  BOOTCTRL |= (0x1 << BOOTCTRL_CPU2_EN);
}


void initCLK(void)
{
  //CLK
  //selects MainOSC as source to PLL0, CPPL0OUT out is then CPUCLK (240MHz)
  
  //starting MainOSC
  if(CLKCTLMOSCE == 0) //checks if MainOSC is not waiting to be enabled nor stopped
  {
    if( !(CLKCTLMOSCS & (1 << 2)) ) //checks if MainOSC is inactive 
    {
      //writing procedure to protected register MOSCE to enable MainOSC
      WPROTRPROTCMD0 = 0xA5; //enable writing to protected register (part of procedure)
      CLKCTLMOSCE = 0x1; //write bits to start MainOSC (part of procedure)
      CLKCTLMOSCE = ~0x1; //write inverse of bits (part of procedure)
      CLKCTLMOSCE = 0x1; //write bits again (part of procedure)
      
      while( !(CLKCTLMOSCS & (1 << 2)) ); //wait until MainOSC is active (MOSCS bit2)
    }
  }
}

void initPLL(void)
{
  //starting PLL0 and PLL1
  //PLL0 is used for cpu clock 
  //PLL1 is used for periphial clock
  if(CLKCTLMOSCS & (1 << 2)) //checks if MainOSC is active (MOSCS bit2)
  {
    //PLL0
    if(CLKCTLPLL0E == 0) //checks if PLL0 is not waiting to be enabled nor stopped
    {
      if( !(CLKCTLPLL0S & (1 << 2)) ) //checks if PLL0 is inactive
      {
        //writing procedure to protected register PLL0E to enable PLL0 
        WPROTRPROTCMD1 = 0xA5; //enable writing to protected register (part of procedure)
        CLKCTLPLL0E = 0x1; //write bits to start PLL0 (part of procedure)
        CLKCTLPLL0E = ~0x1; //write inverse of bits (part of procedure)
        CLKCTLPLL0E = 0x1; //write bits again (part of procedure)
        
        while( !(CLKCTLPLL0S & (1 << 2)) ); //wait until PLL0 is active (PLL0S bit2)
      }
    }
    //selects CPLL0OUT as CPUCLK
    //writing procedure to protected register PLL0E to enable PLL0
    WPROTRPROTCMD1 = 0xA5; //enable writing to protected register (part of procedure)
    CLKCTLCKSC_CPUCLKS_CTL = 0x0; //write bits to select MainOSC as CPUCLK (part of procedure)
    CLKCTLCKSC_CPUCLKS_CTL = ~0x0; //write inverse of bits (part of procedure)
    CLKCTLCKSC_CPUCLKS_CTL = 0x0; //write bits again (part of procedure)
    
    //PLL1
    if(CLKCTLPLL1E == 0) //checks if PLL1 is not waiting to be enabled nor stopped
    {
      if( !(CLKCTLPLL1S & (1 << 2)) ) //checks if PLL1 is inactive
      {
        //writing procedure to protected register PLL1E to enable PLL1
        WPROTRPROTCMD1 = 0xA5; //enable writing to protected register (part of procedure)
        CLKCTLPLL1E = 0x1; //write bits to start PLL1 (part of procedure)
        CLKCTLPLL1E = ~0x1; //write inverse of bits (part of procedure)
        CLKCTLPLL1E = 0x1; //write bits again (part of procedure)
        
        while( !(CLKCTLPLL1S & (1 << 2)) ); //wait until PLL1 is active (PLL1S bit2)
      }
    }
    //selects PLLOUT as PPLLCLK
    //writing procedure to protected register PLL0E to enable PLL0
    WPROTRPROTCMD1 = 0xA5; //enable writing to protected register (part of procedure)
    CLKCTLCKSC_PPLLCLKS_CTL = 0x3; //write bits to select MainOSC as CPUCLK (part of procedure)
    CLKCTLCKSC_PPLLCLKS_CTL = ~0x3; //write inverse of bits (part of procedure)
    CLKCTLCKSC_PPLLCLKS_CTL = 0x3; //write bits again (part of procedure)
  }
}

void initTimer(void)
{
  //TIMER generates interrupt every 1ms
  TAUB0TPS = 0xFFF0; //set CK0 CLK to 26.666MHz/1
  TAUB0CDR0 = 26667; //compare register ()
  TAUB0CMOR0 = 0x0; //operation clock CK0, counter clock CK0, software trigger, valid edge update, interval timer mode 
  
}

void initInterrupt(void)
{
  //INTERRUPT
  INTC2IMR4 = ~0x4000; //enable TAUB0 interrupt
  INTC2ICTAUB0I0 |= 1 << 6; //table reference for interrupt vector
  INTC2ICTAUB0I0 &= ~(15 << 0); //set priority to 0
}

void startTimer(void) 
{
  TAUB0TS = 0x1; //enable counter
}

//interrupt handler for TAUB0 channel 0 
#pragma ghs interrupt
void INTTAUB0I0(void) //gets called every time timer reaches 0 (1ms)
{
  targetDisableInterrupts();
  
  INTC2ICTAUB0I0 &= ~(1 << 12); // clear interrupt flag
  
  targetEnableInterrupts();
}

void targetEnableInterrupts()
{
  asm("ei"); // enables interrupts
  TAUB0TS = 0x1; // enable timer
}

void targetDisableInterrupts()
{
  asm("di"); // disables interrupts
  TAUB0TT = 0x1; // disable timer
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondCore(); //enable fpu

  initCLK();
  initPLL();
  initTimer();
  initInterrupt();

  startTimer();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
