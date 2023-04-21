#include "RA6M5.h"


void targetEnableInterrupts(void)
{
  SYST_CSR |= 1 << SYST_CSR_TICKINT;
}


void disableWatchdog(void)
{
}

void initClock()
{
  SYSC_PRCR = 0xA501;                       // Unlock write so SYSC registers
  SYSC_PRCR |= 1 << SYSC_PRCR_PRC0;         // Unlock write to MOSCWTCR register
  SYSC_MOSCWTCR &= ~(0xF << MSTS);          // Main Clock Oscillator Wait Time Setting SET TO: 0x0: Wait time = 3 cycles (11.4 us)
  SYSC_MOSCCR &= ~(1 << SYSC_MOSCCR_MOSTP); // Main Clock Oscillator Start
  while (!(SYSC_OSCSF & SYSC_OSCSF_MOSCSF_MASK))
  {
  }; // We wait for Main Clock Oscillator to stabilize

  SYSC_PLLCCR &= ~(1 << SYSC_PLLCCR_PLSRCSEL); // PLL Clock Source Select - 0: Main clock oscillator (DEFAULT: 0 - Main clock oscillator)
  SYSC_PLLCCR |= 2 << SYSC_PLLCCR_PLIDIV;      // PLL Input Frequency Division Ratio Select - 1 0: /3 (DEFAULT: /1)
  SYSC_PLLCCR &= ~(0x3F << SYSC_PLLCCR_PLLMUL);
  SYSC_PLLCCR |= 0x31 << SYSC_PLLCCR_PLLMUL; // PLL Frequency Multiplication Factor Select - 0x31: x 12.5 (DEFAULT: x10)

  FCACHE_FLWT |= 3 << FCACHE_FLWT_FLWT; // Flash Wait Cycle (0 1 1: 1 wait (ICLK > 150 MHz))

  unsigned int tmp = 0;
  tmp |= (1 << SYSC_SCKDIVCR_PCKD); // Divider set to 1/2 so we have 100 MZz
  tmp |= (2 << SYSC_SCKDIVCR_PCKC); // Divider set to 1/4 so we have 50 MZz
  tmp |= (2 << SYSC_SCKDIVCR_PCKB); // Divider set to 1/4 so we have 50 MZz
  tmp |= (1 << SYSC_SCKDIVCR_PCKA); // Divider set to 1/2 so we have 100 MZz
  tmp |= (1 << SYSC_SCKDIVCR_BCK);  // Divider set to 1/2 so we have 100 MZz
  tmp |= (0 << SYSC_SCKDIVCR_ICK);  // Divider set to 1/1 so we have 200 MZz
  tmp |= (2 << SYSC_SCKDIVCR_FCK);  // Divider set to 1/4 so we have 50 MZz

  SYSC_SCKDIVCR = tmp;

  SYSC_MOSCWTCR &= ~(0xF << MSTS);
  SYSC_SCKSCR = 5 << SYSC_SCKSCR_CKSEL; // Clock Source Select - 1 0 1: PLL
}


void initTimer()
{
  SYST_RVR |= 33 << SYST_RVR_RELOAD; // reset value of the timer. Clock is 32768. f = 1/clk = 0,000030517578125. 1ms/0,000030517578125 = ~33

  SYST_CSR |= 1 << SYST_CSR_ENABLE; // Enable the timer.
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
