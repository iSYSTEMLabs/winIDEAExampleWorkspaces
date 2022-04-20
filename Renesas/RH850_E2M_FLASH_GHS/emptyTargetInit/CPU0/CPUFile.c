#include "R7F702Z02_sfr.h"
#include "R7F702Z02.h"


void disableWatchdog(void)
{
}


void enableSecondCore(void)
{ 
  PFSYSTEM.BOOTCTRL.B.BC1 = 1;
}

void targetEnableInterrupts(void)
{
  // Force restart of OSTM0 counter 
  OSTM0.TT.B.TT = 0x1; 
  OSTM0.TS.B.TS = 0x1; 
  
  // Enable OSTM0 interrupt request
  OSTM0.CTL.B.IE = 0x1;
  
  __EI();  
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondCore();

  initClock();
  initTimer();  
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void initClock(void)
{ 
  // Wait for PLL stabilization  
  while(SYSCTRL.PLLCLKS != PLL_STABLE);
  
  //Unlock protection to allow clock register changes
  SYSCTRL.CLKKCPROT0.R = ENABLE_WRITE_PROTECTED_REG;
  
  // Select PLL output as the CPU/Peripheral clock source
  SYSCTRL.CKSC0C.R = SELECT_PLL;
  
  // Wait for clock source change to complete
  while(SYSCTRL.CKSC0S.R != SELECT_PLL);
  
  // Disable PLL divider, 1:1 ratio (400MHz)
  SYSCTRL.CLKD0DIV.R = PLL_NO_DIVISION;
 
  // Wait for clock synchronization with new divider setting
  while (!SYSCTRL.CLKD0STAT.B.CLKD0SYNC);
  
  //Set lock protection of clock controller registers
  SYSCTRL.CLKKCPROT0.R = DISABLE_WRITE_PROTECTED_REG;
}


void initTimer(void)
{
  // Enable writes to protected registers
  MSTB.MSRKCPROT.R = ENABLE_WRITE_PROTECTED_REG;
  
  // Put OS Timer0 in operating mode
  MSTB.MSR_OSTM.B.MS_OSTM0 = 0;
  
  // Disable writes to protected registers
  MSTB.MSRKCPROT.R = DISABLE_WRITE_PROTECTED_REG;
  
  // Set OS Timer0 to reload every 1ms
  while(OSTM0.CMP.R != OSTM_RELOAD){
    OSTM0.CMP.R = OSTM_RELOAD;  
  }
  
  // Set timer in free-run compare mode
  OSTM0.CTL.B.MD1 = 0x1;
  
  // Disable interrupt masking for channel 18 (OSTM0 interrrupt)
  INTC1CPU0.EIC18 &= ~INT_MASK_EN;
  
  // Set interrupt vector method: table reference
  INTC1CPU0.EIC18 |= INT_VECT_TABLE_REF;
  
  // Start OSTM0 counter 
  OSTM0.TS.B.TS = 0x1;  
}

__interrupt void TimerInterruptHandler(void)
{
  // Restart OS Timer 0
  OSTM0.TT.B.TT = 0x1;  
  OSTM0.TS.B.TS = 0x1;  
  
  InterruptRoutine();
}
