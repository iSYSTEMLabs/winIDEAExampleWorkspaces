#include "RH850.h"
#include "main.h"
#include "lowPowerMode.h"

unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoDeepStopLowPowerMode = 0;
unsigned char gotoHaltLowPowerMode = 0;

#define CHECK_BIT(var,pos) ((var & (1 << pos)) == (1 << pos))


void targetEnableInterrupts(void)
{
  __EI();

  // Start the timer
  OSTM0TS |= 0x1;
}


void InitOSTM()
{
  // Enable clock to OSTM0
  MSRKCPROT = 0xA5A5A501;
  MSR_OSTM &= ~(1);
  
  // Enable writing to OSTM0 registers
  PBGKCPROT = 0xA5A5A501;

  PBGPROT0_7 |= (0x1 << 7);
  PBGPROT0_7 |= (0x1 << 4);

  PBGPROT0_7 &= ~(0x3);
  
  // Compare value
  OSTM0CMP = 0x13880;
  
  // Free-run timer mode and enable interrupt requests
  OSTM0CTL |= 0x82;
}

void initInterrupts()
{
  /*Disable interrupt register protection */
  PBGKCPROT0 = 0xA5A5A501;
  PBGPROT0_0 |= (0x1 << 7) + (0x1 << 4);
  PBGPROT0_0 &= ~(0x3);
  
  INTC2GKCPROT =  0xA5A5A501;
  INTC2GMPID0 = 0x1;
  INTC2GPROT_199 |= (0xFF << 16) + (1 << 8) + (1 << 6) + (1 << 4);
  INTC2GPROT_199 &= ~(0x3);
  
  EIC199 &= ~(0x1 << 7);  // Enable processing of interrupt 199
  EIC199 &= ~(0xF);       // Set priority to max (0x0);
  EIC199 |= (0x1 << 6);   // Enable table reference method
}


extern void InterruptRoutine();

__interrupt void TimerInterruptHandler()
{
  // Re-start the timer
  OSTM0TT |= 0x1;
  OSTM0TS |= 0x1;
  InterruptRoutine();
}

__interrupt void RtcInterruptHandler()
{
  __DI();
  // Disable RTC
  RTCA0CTL0 &= ~(0x1 << RTCA0CTL0_CE);
  onExitLowPowerModeTestBreakpoint(FROM_INTERRUPT);
}

void InitClocks()
{
  /*Disable PLL register protect*/
  PBG20KCPROT = 0xA5A5A501;
  PBG20PROT0_2 |= (0x1 << 7) + (0x1 << 4);
  PBG20PROT0_2 &= ~(0x3);
  
  CLKKCPROT1 = CLKKCKEY;
  
  // Enable main osc.
  MOSCE |= 0x1;
  
  // Make sure that Main osc. is stable
  while(!(MOSCS & 0x2));
  
  // Division ratio of source  = 1/2
  CLKD_PLLC = 0x2;
  // PLL0 is selected as system clock

  //CLKD_PLLC = 0x1;   
  
  // Starting the PLL
  PLLE |= 0x1;
  
  // Wait for PLL stable
  while(!(PLLS & (0x1 << 1)));

  // Select PLL output as system clock
  CKSC_CPUC &= ~(0x1);
  
  // Check that PLL is selected as system clock
  while(CKSC_CPUS);
}


void prepareRTCInterrupts()
{
  PBG20KCPROT10 = PBG20KCPROT10_ENABLE;
  PBG20PROT0_10 |= (0x1 << PBG20PROT0_10_SEC) + (0x1 << PBG20PROT0_10_UM);
  PBG20PROT0_10 &= ~(0x3);
  
  MSR_RTCA &= ~(0x1);
  MSR_RTCA |= (0x1 << MSR_RTCA_STPMSK);
  
  MOSCSTPM |= (0x1 << MOSCSTPM_MOSCSTPMMSK);
  HSOSCSTPM |= (0x1 << HSOSCSTPM_HSOSCSTPMSK);
  
  while(CKSC_CPUS != 0x1)
  {
    CLKKCPROT1 = CLKKCKEY;
    CKSC_CPUC = 0x1;
    CKSC_CPUC = 0x1;
    CKSC_CPUC = 0x1;
  }
  
  while (CKSC_ARTCAC != 0x1)
  {
    CLKKCPROT1 = CLKKCKEY;
    CKSC_ARTCAC |= (0x1 << CKSC_ARTCAC_ARTCASCSID);
    CKSC_ARTCAC |= ~(0x1 << CKSC_ARTCAC_ARTCASCSID);
    CKSC_ARTCAC |= (0x1 << CKSC_ARTCAC_ARTCASCSID);
  }
  
  while (CKSC_ARTCAS != 0x01);
  
  CKSC_ARTCAC |= (0x1 << CKSC_ARTCAC_ARTCASCSID);
  
  RTCA0CTL0 |= (0x1 << RTCA0CTL0_SLSB);
  while (!CHECK_BIT(RTCA0CTL0, RTCA0CTL0_SLSB));
  while (CHECK_BIT(RTCA0CTL2, RTCA0CTL2_WSST));
  RTCA0SCMP = 0x3AD68;
  while (CHECK_BIT(RTCA0CTL2, RTCA0CTL2_WSST));
  
  RTCA0CTL1 |= (0x1 << RTCA0CTL1_EN1HZ);
  RTCA0CTL1 |= (0x1  << RTCA0CTL1_EN1S);
  RTCA0CTL1 |= (0x3 << RTCA0CTL1_CT);
  
  // Enable RTC Wake-Up Factor
  WUFMSK0_A2 &= ~(0x1 << WUFMSK0_A2_RTC);
  
  INTC2GKCPROT =  0xA5A5A501;
  INTC2GMPID0 = 0x1;
  INTC2GPROT_654 |= (0xFF << 16) + (1 << 8) + (1 << 6) + (1 << 4);
  INTC2GPROT_654 &= ~(0x3);
  
  // Enable interrupt 654 (RTC 1s)
  EIC654 &= ~(0x1 << 7);
  EIC654 &= ~(0xF);
  EIC654 |= (0x1 << 6);
  
  __EI();
  
  // Enable RTC and check if it's on
  RTCA0CTL0 |= (0x1 << RTCA0CTL0_CE);
  while(!(RTCA0CTL0 & (1 << 6)));
}


// Stop LPM
void enterAndExitStopMode()
{
  // Assert reset to DMON
  DMON_DMONTEST |= (0x1 << DMON_DMONTEST_RESDMON);
  // Stop CLMA, first enable writing to CLMA protected registers
  CLMAKCPROT = 0xA5A5A501;
  // Enable CLMA3-9 reset
  CLMATEST = 0x00001FC0;
  // Mask error notification
  CLMATEST = 0x00001FC4;
  // Reset clock monitor
  CLMATEST = 0x00001FC5;
  // Wait for at least 2 cycles
  CLMATEST = 0x00001FC5;
  CLMATEST = 0x00001FC5;
  // Disable interrupt handling
  __DI();
  
  prepareRTCInterrupts();
  
  STBCKCPROT = STBCKCPROT_ENABLE;
  STBC0STPT |= (0x1 << STBC0STPT_STBC0STPTRG);
}

//DeepStop LPM
void enterAndExitDeepStopMode()
{
  // Assert reset to DMON
  DMON_DMONTEST |= (0x1 << DMON_DMONTEST_RESDMON);
  // Stop CLMA, first enable writing to CLMA protected registers
  CLMAKCPROT = 0xA5A5A501;
  // Enable CLMA3-9 reset
  CLMATEST = 0x00001FC0;
  // Mask error notification
  CLMATEST = 0x00001FC4;
  // Reset clock monitor
  CLMATEST = 0x00001FC5;
  // Wait for at least 2 cycles
  CLMATEST = 0x00001FC5;
  CLMATEST = 0x00001FC5;
  // Disable interrupt handling
  __DI();
  
  prepareRTCInterrupts();
  
  STBCKCPROT = STBCKCPROT_ENABLE;
  STBC0PSC |= (0x1 << STBC0PSC_STBC0DISTRG);
}

void checkRTCWakeup()
{
  RTCA0CTL0 &= ~(0x1 << RTCA0CTL0_CE);
  if (CHECK_BIT(WUF0_A2, 11)){
    onExitLowPowerModeTestBreakpoint(FROM_RESET);
  }
}

// Halt mode
void enterAndExitHaltMode()
{
  prepareRTCInterrupts();
  __asm("halt");
}

void targetEnterAndExitLowPowerMode()
{
  if(gotoStopLowPowerMode)
  {
    enterAndExitStopMode();
  }
  else
  {}
  if(gotoDeepStopLowPowerMode)
  {
    enterAndExitDeepStopMode();
  }
  else
  {}
  if(gotoHaltLowPowerMode)
  {
    enterAndExitHaltMode();
  }
  else
  {}
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  InitClocks();
  initInterrupts();
  InitOSTM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
