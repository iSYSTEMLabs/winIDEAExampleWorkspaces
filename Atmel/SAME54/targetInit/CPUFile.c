#include "SAME54.h"


extern unsigned long _cm0Boot;
extern unsigned long _cm0Stack;

void TimerInterruptHandler();

void initITM(void)
{ 
  ITM_LOCK_ACCESS_REGISTER     = 0xC5ACCE55; //unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER    = 0xFFFFFFFF; //enable stimulus port 0-31 
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1; //set privilege
}


// Init timer that triggers an interrupt every 1 ms
void initTimer()
{
  MCLK_APBAMASK |= (0x1 << MCLK_APBAMASK_TC0);          // Enable TC clock
  GCLK_PCHCTRL_TC0 |= (0x1 << GCLK_PCHCTRL_TC0_CHEN);   // Enable peripheral channel
  TC0_CTRLA &= ~(0x1 << TC0_CTRLA_ENABLE);              // Disable TC0
  TC0_CTRLA |= (0x2 << TC0_CTRLA_MODE);                 // Select 32 bit mode
  TC0_WAVE |= (0x1 << TC0_WAVE_WAVEGEN);                // Select Match Register mode
  TC0_CTRLA |= (0x5 << TC0_CTRLA_PRESCALE);             // Prescaler set to 64
  TC0_CTRLA |= (0x1 << TC0_CTRLA_ENABLE);               // Enable TC0
  TC0_CC0 = 1875;                                       // At 120 MHz and prescaler set to 64, 1ms = 1875 ticks
  TC0_INTENSET |= (0x1 << TC0_INTEN_MC0);               // Enable interrupt
}

// Init clock to max frequency of 120 MHz
void initClock()
{
  OSCCTRL_XOSCCTRL1 |= (0x1 << OSCCTRL_XOSCCTRL1_ENALC);        // Enable automatic loop control
  OSCCTRL_XOSCCTRL1 |= (0x4 << OSCCTRL_XOSCCTRL1_IMULT);        // Oscillator current multiplier setup
  OSCCTRL_XOSCCTRL1 |= (0x3 << OSCCTRL_XOSCCTRL1_IPTAT);        // Oscillator current reference setup
  OSCCTRL_XOSCCTRL1 &= ~(0x1 << OSCCTRL_XOSCCTRL1_ONDEMAND);    // Oscillator always ON
  OSCCTRL_XOSCCTRL1 |= (0x1 << OSCCTRL_XOSCCTRL1_XTALEN);       // Crystal connected to XIN/XOUT
  OSCCTRL_XOSCCTRL1 |= (0x1 << OSCCTRL_XOSCCTRL1_ENABLE);       // Enable oscillator
  
  OSCCTRL_DPLL0RATIO |= (0x77 << OSCCTRL_DPLL0RATIO_LDR);       // Multiply by 119 + 1 -> 120 MHz
  OSCCTRL_DPLL0CTRLB |= (0x5 << OSCCTRL_DPLL0CTRLB_DIV);        // Divide by 2*(5+1) -> 1 MHz
  OSCCTRL_DPLL0CTRLB |= (0x3 << OSCCTRL_DPLL0CTRLB_REFCLK);     // Set XOSC1 as clock reference
  OSCCTRL_DPLL0CTRLA &= ~(0x1 << OSCCTRL_DPLL0CTRLA_ONDEMAND);  // DPLL0 always ON
  OSCCTRL_DPLL0CTRLA |= (0x1 << OSCCTRL_DPLL0CTRLA_ENABLE);     // Enable DPLL0
  
  // Wait for lock
  while ((0 == ((OSCCTRL_DPLL0STATUS >> OSCCTRL_DPLL0STATUS_LOCK) & 0x1)) || (0 == ((OSCCTRL_DPLL0STATUS >> OSCCTRL_DPLL0STATUS_CLKRDY) & 0x1)))
  {
  }
  
  // Set PLL0 as clock source
  GCLK_GENCTRL0 |= (0x7 << GCLK_GENCTRL0_SRC); 
  
  // Wait for sync
  while (((GCLK_SYNCBUSY >> GCLK_SYNCBUSY_GENCTRL0) & 0x1 ) == 1)
  {
  }
}

void initFPU()
{
  FPU_CPACR |= (0xF << FPU_CPACR_EN);
}

// Enable trace with main clock frequency
void initTrace()
{
  GCLK_PCHCTRL_TRACE |= (0x1 << GCLK_PCHCTRL_TRACE_CHEN);
}


void targetEnableInterrupts()
{ 
  INT_96_127_SET_EN |= (0x1 << INT_107);
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initFPU();
  initTrace();
  initTimer();
  initITM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


// Enable interrupt and call InterruptRoutine()
void TimerInterruptHandler()
{
  TC0_INTENSET |= (0x1 << TC0_INTEN_MC0);
  InterruptRoutine();
}


void disableWatchdog()
{
}
