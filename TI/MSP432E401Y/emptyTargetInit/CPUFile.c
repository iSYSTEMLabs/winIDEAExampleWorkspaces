#include "MSP432.h"
#include "VectM.h"


void InitClocks(void)
{
  int i;
  // Set PLL to 120 MHz - max CPU frequency.

  SYSCTLMOSCCTL = 0; // turn on external oscillator MOSC
  SYSCTLMOSCCTL |= (1 << SYSCTL_MOSCCTL_OSCRNG);

  SYSCTLPLLFREQ0 = 0; // set PLLFREQ0 register to 0
  SYSCTLPLLFREQ1 = 0; // set PLLFREQ1 register to 0
  SYSCTLPLLFREQ0 |= (96 << SYSCTL_PLLFREQ0_MINT); // configure MINT
  SYSCTLPLLFREQ1 |= (4 << SYSCTL_PLLFREQ1_N); // configure N + 1
  SYSCTLPLLFREQ1 |= (1 << SYSCTL_PLLFREQ1_Q); // configure Q + 1
  SYSCTLPLLFREQ0 |= (1 << SYSCTL_PLLFREQ0_PLLPWR); // power on PLL

  SYSCTLRSCLKCFG |= (1 << SYSCTL_RSCLKCFG_NEWFREQ); // activate PLL
  
  int tmp = 0;
  tmp |= (1 << SYSCTL_RSCLKCFG_PSYSDIV); // PSYSDIV + 1
  tmp |= (3 << SYSCTL_RSCLKCFG_PLLSRC); // choose PPL source
  tmp |= (3 << SYSCTL_RSCLKCFG_OSCSRC); // choose oscillator source
  SYSCTLRSCLKCFG = tmp;
  
  SYSCTLMEMTIM0 = 0x01950195; // set flash latency for 120 MHz CPU clock
  SYSCTLRSCLKCFG |= (1 << SYSCTL_RSCLKCFG_MEMTMIU); // apply flash latency
  
  SYSCTLRSCLKCFG |= (1 << SYSCTL_RSCLKCFG_USEPLL); // switch to PLL
}

void InitTimer()
{
  SYSCTLRCGCTIMER |= (1 << SYSCTL_RCGCTIMER_R0); // turn on clock for timer 0

  int i = 0;
  while(i<10000)
  {
    i++;
  }
  TIMER0TAMR = (2 << TAMR);
  TIMER0TAILR = 120000;
  TIMER0IMR |= (1 << TATOIM);
}


void targetEnableInterrupts(void)
{
  TIMER0CTL |= (1 << TAEN);

  INT_0_31_SET_EN = 0x00080000;   //Enables timer0A interrupt.
  INT_16_19_PRI = 0xE0000000;     //Sets interrupt priority.
  INT_0_31_CLR_PEND = 0x00080000; //Clears interrupt pending flag.
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  InitClocks();
  InitTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
