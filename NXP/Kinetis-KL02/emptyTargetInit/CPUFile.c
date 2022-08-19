#include "MKL02Z32_sfr.h" 

void initClock()
{
  MCG.C1.B.CLKS = 0;                     // Clock Source - Output of FLL is selected.
  MCG.C4.B.DRST_DRS = 1;                 // set clock to 48 MHz
  MCG.C4.B.DMX32 = 1;                    // set clock to 48 MHz
  SIM.CLKDIV1.B.OUTDIV1 = 0;             // Clock Output Divider value - divided by 1 
}


void initTimer()
{
  SIM.SOPT2.B.TPMSRC = 1;                // 48 MHz timer clock source 
  SIM.SCGC6.B.TPM0_bitfield = 1;         // timer - clock gate enabled 
  TPM0.SC.B.CMOD = 1;                    // TPM counter increments on every TPM counter clock
  TPM0.SC.B.TOIE = 1;                    // Enable TOF interrupts.
  TPM0.MOD.B.MOD = 0xBB80;               // modulo value: 0xBB80[16] = 48_000[10]
}


void targetEnableInterrupts()
{
  __asm__("CPSIE i");
  NVIC.NVIC_ISER.B.SETENA |= (1 << 17);
}


void disableWatchdog()
{
  SIM.COPC.B.COPT = 0;
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void clearTimerFlag()
{
  TPM0.SC.B.TOF = 1;
}