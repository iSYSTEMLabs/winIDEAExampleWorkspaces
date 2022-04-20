#include "TriCore.h"


#define BIT_SET(reg, bit)    ((reg) |= (1UL << (bit)))
#define BIT_CLEAR(reg, bit)  ((reg) &= ~(1UL << (bit)))


/* This function disables watchdog timers that are enabled by default */
void disable_watchdog()
{
  int key;
  
  /* Disable system watchdog */
  /* Password access (unlock write access to WDTSCON0) */
  key = SCU_WDTSCON0;
  key ^= (0x3F << SCU_WDTSCON0_PW);         /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTSCON0_LCK);        /* Clear lock bit */
  key |= (0x1 << SCU_WDTSCON0_ENDINIT);     /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTSCON0 = key;
  /* Disable WDT request */
  SCU_WDTSCON1 |= (0x1 << SCU_WDTSCON1_DR); /* Update password protected disable WDT field */
  /* Regular access (update WDT status register) */
  key |= (0x1 << SCU_WDTSCON0_ENDINIT);     /* Set ENDINIT bit */
  key |= (0x1 << 1);
  SCU_WDTSCON0 = key;

  /* Disable primary core watchdog, other cores watchdogs are disabled by default */
  /* Password access (unlock write access to SCU_WDTCPU0CON0) */
  key = SCU_WDTCPU0CON0;
  key ^= (0x3F << SCU_WDTCPU0CON0_PW);            /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTCPU0CON0_LCK);           /* Clear lock bit */
  key |= (0x1 << SCU_WDTCPU0CON0_ENDINIT);        /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTCPU0CON0 = key;
  /* Disable WDT request */
  SCU_WDTCPU0CON1 |= (0x1 << SCU_WDTCPU0CON1_DR); /* Update password protected disable WDT field */
  /* Regular access (update WDT status register) */
  key |= (0x1 << SCU_WDTCPU0CON0_ENDINIT);        /* Set ENDINIT bit */
  key |= (0x1 << 1);
  SCU_WDTCPU0CON0 = key;
}


void __interrupt(STM_INT0) 
TimerInterruptHandler(void)
{
  
  if(STM0_ICR & (0x1 << STM0_ICR_CMP0IR))
  {
    STM0_CMP0 += 0x1;
    STM0_ISCR |= (0x1 << STM0_ISCR_CMP0IRR);
    InterruptRoutine();
  }
  if(STM0_ICR & (0x1 << STM0_ICR_CMP1IR))  
  {
    STM0_ISCR |= (0x1 << STM0_ISCR_CMP1IRR);
  }
}

void initInterrupts()
{
  SCU_EICR0 |= (0x3 << SCU_EICR0_EXIS1);
  SCU_EICR0 |= (0x1 << SCU_EICR0_REN1);
  SCU_EICR0 |= (0x1 << SCU_EICR0_EIEN1);
  SCU_IGCR0 |= (0x2 << SCU_IGCR0_IGP0);
  SCU_IGCR0 |= (0x1 << SCU_IGCR0_GEEN0);
  SCU_IGCR0 |= (0x1 << SCU_IGCR0_IPEN01);
  SRC_SCUERU0 |= (0x5 << SRC_SCUERU0_SRPN);
  SRC_SCUERU0 |= (0x1 << SRC_SCUERU0_SRE);
}

/*
  Init clock to 300 MHz with 20 MHz ext. osc. 
*/
void initClock()
{
  // set flash wait states
  FCON = 0x00911268;
  
  SCU_CCUCON1 |= (0x1 << SCU_CCUCON1_INSEL);            // select osc. as PLL clk. source  
  SCU_CCUCON1 &= ~(0xF << SCU_CCUCON1_STMDIV);          // set STM clk. divider
  SCU_CCUCON1 |= (0x3 << SCU_CCUCON1_STMDIV);           
  SCU_CCUCON1 |= (0x2 << SCU_CCUCON1_CANDIV);
  
  SCU_CCUCON7 = 0xB;                                    // set secondary core clock dividers so that sum of core clocks doesnt exceed 803 MHz
  SCU_CCUCON8 = 0xB;
  
  SCU_PLLCON0 |= (0x1 << SCU_PLLCON0_SETFINDIS);        // disconnect input clk. from  VCO part
  SCU_PLLCON0 &= ~(0x7F << SCU_PLLCON0_NDIV);           // select N divisor
  SCU_PLLCON0 |= (0xE << SCU_PLLCON0_NDIV);
  SCU_PLLCON0 &= ~(0xF << SCU_PLLCON0_PDIV);            // select P divisor
  SCU_PLLCON0 |= (0x1 << SCU_PLLCON0_CLRFINDIS);        // connect input clk. to VCO
 
  SCU_PLLCON1 &= ~(0x7F << SCU_PLLCON1_K1DIV);          // set K dividers to 0
  SCU_PLLCON1 &= ~(0x7F << SCU_PLLCON1_K2DIV);              
  SCU_PLLCON1 &= ~(0x7F << SCU_PLLCON1_K3DIV);              
  SCU_PLLCON1 |= (0x2 << SCU_PLLCON1_K3DIV);            // set K3 div to 2
  
  SCU_CCUCON0 = 0x57130113;                             // set dividers so clocks are in range
  
  while((SCU_PLLSTAT & (1<<SCU_PLLSTAT_VCOLOCK)) == 0); // wait for PLL to become stable
}

void initTimer(){
  STM0_CMCON |= (0x10 << STM0_CMCON_MSIZE0);
  STM0_CMCON |= (0x0 << STM0_CMCON_MSTART0);
  STM0_ICR |= (0x1 << STM0_ICR_CMP0EN);
  STM0_ISCR |= (0x1 << STM0_ISCR_CMP0IRR);
}


void targetEnableInterrupts(void)
{
  int i;
  __enable();

  // below delay was added in order for interrupts to start kicking
  // otherwise interrupts started kicking after the profiler test code was executed already
  for(i=0;i<4000;)
  {
    i++;
  }    
  initInterrupts();
  STM0_ISCR |= (0x1 << STM0_ISCR_CMP0IRR);
}

void targetDisableInterrupts(void)
{
  int i;
  __disable();

  // make sure they stopped 
  for(i=0;i<4000;)
  {
    i++;
  }    
}                               


void setupSecondCore()
{
  /* Core Debug Controller (CDC) config needed for CPU2 to be in running state after targetInit function. */
  int dwDBSR1=meml(DBGSR1);
  dwDBSR1&= DBGSR_MASK_HALT;
  dwDBSR1|= DBGSR_SET_RUN;
  dwDBSR1&=~DBGSR_SUSPEND;
  
  meml(PC1)=0xA0000800; //set 2nd core program counter  
  
  meml(DBGSR1)=dwDBSR1;
  
}

void setupThirdCore()
{
  /* Core Debug Controller (CDC) config needed for CPU2 to be in running state after targetInit function. */
  int dwDBSR2=meml(DBGSR2);
  dwDBSR2&= DBGSR_MASK_HALT;
  dwDBSR2|= DBGSR_SET_RUN;
  dwDBSR2&=~DBGSR_SUSPEND;
  
  meml(PC2)=0xA0001000; //set 2nd core program counter  
  
   meml(DBGSR2)=dwDBSR2;
}

void targetInit(void)
{                    
  #ifndef EMPTY_TARGET_INIT

  initClock();
  disable_watchdog();
  initTimer();
  setupSecondCore(); 
  setupThirdCore(); 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void targetSelfReset(void)
{
  targetDisableInterrupts();
  
  // RESET line is driven with open collector NPN transistor due poor GPIO current capabilities
  // GPIO reset pin has external pull down added (2K2 due initial weak (47K) pull-up resistor at startup)
  BIT_SET(P00_OUT, 1);
}

void disableWatchdog(void)
{
  // Watchdog must be disabled after clock switch.
}
