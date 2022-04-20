#include "TriCore.h"


void disableENDINIT()
{
  // disable ENDINIT
  CBS_OCNTRL = 0x000000C0;
}

/* This function disables watchdog timers that are enabled by default */
void disableWatchdog()
{
  int key;
  
  /* Disable system watchdog */
  key = SCU_WDTSCON0;
  key ^= (0x3F << SCU_WDTSCON0_PW);         /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTSCON0_LCK);        /* Clear lock bit */
  key |= (0x1 << SCU_WDTSCON0_ENDINIT);     /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTSCON0 = key;
  SCU_WDTSCON1 |= (0x1 << SCU_WDTSCON1_DR); /* Update password protected disable WDT field */
  key |= (0x1 << SCU_WDTSCON0_LCK);
  SCU_WDTSCON0 = key;
  
  /* Disable primary core watchdog, other cores watchdogs are disabled by default */
  key = SCU_WDTCPU0CON0;
  key ^= (0x3F << SCU_WDTCPU0CON0_PW);            /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTCPU0CON0_LCK);           /* Clear lock bit */
  key |= (0x1 << SCU_WDTCPU0CON0_ENDINIT);        /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTCPU0CON0 = key;
  SCU_WDTCPU0CON1 |= (0x1 << SCU_WDTCPU0CON1_DR); /* Update password protected disable WDT field */
  key |= (0x1 << SCU_WDTCPU0CON0_LCK);
  SCU_WDTCPU0CON0 = key;
}


void clock_Switch()
{
  //Step 1: set oscillator as system clock
  // Change flag on OSCCON to "Not entered into Power saving mode" to enable frequency modification.
  SCU_OSCCON &= SCU_OSSCON_TOGGLE_SET_PS_MODE_NOT_ENTERED;
  // Generate reference clock for external oscilator: 16 + (-1 + 5).  
  SCU_OSCCON |= (5 << SCU_OSCCON_OSCVAL_BITS); 
   
  // Wait until PLLLV and PLLHV flags are set.
  while (!(((SCU_OSCCON >> SCU_SYSPLLCON0_PLLLV_BITS) & 1) && 
           ((SCU_OSCCON >> SCU_SYSPLLCON0_PLLHV_BITS) & 1)));
  
  //Step 2: 
    
  // Clear the previous N and P divider values and set the new ones.
  int iSysPllCon0 = 0;    
  iSysPllCon0 |= (1<<SCU_SYSPLLCON0_INSEL_BIT);          // Set fOSC0 as clock source.
  iSysPllCon0 |= (0 << SCU_SYSPLLCON0_PDIV_BITS);        // Set P clock divider.
  iSysPllCon0 |= (29 << SCU_SYSPLLCON0_NDIV_BITS);        // Set N clock divider.   
  
  // Switch from power saving mode to normal mode for external osc.
  iSysPllCon0 |= (1 << SCU_SYSPLLCON0_PLLPWD_BITS);
  SCU_SYSPLLCON0 = iSysPllCon0;
  
  SCU_SYSPLLCON1 = 5;    // Set K2 clock divider.
  
  // Set default peripheral dividers.
  SCU_PERPLLCON0 = 0x00013E00;
  SCU_PERPLLCON1 = 0x00000101;
  
  //Step 3: wait for PLL loc to be set
  while(!(SCU_SYSPLLSTAT & (1 << SCU_SYSPLLSTAT_LOCK_BITS)));
  
  //Step 4: configure CCUCON0 and CCUCON1 to first target setting
  SCU_CCUCON0 = 0x47230113;
  SCU_CCUCON1 = 0x21210312;
  SCU_CCUCON2 = 0x07001201;
  
  delayFunction(20000);
  
  //Step 5: switch CCU input clock to PLL
  SCU_CCUCON0 = 0x57230113;
  
  //Step 6: after setting CCU f_source to PLL, frequency has to be increased step by step
  SCU_SYSPLLCON1 = 3;
  delayFunction(4000);
  
  SCU_SYSPLLCON1 = 2;
  delayFunction(4000);
  
  SCU_SYSPLLCON1 = 1;
  delayFunction(4000);
}

void enableSecondaryCores()
{
  PC1 = 0xA0000800;
  PC2 = 0xA0001000;
  PC3 = 0xA0001800;
  PC4 = 0xA0002000;
  PC5 = 0xA0002800;
  CPU1_SYSCON = 0;
  CPU2_SYSCON = 0;
  CPU3_SYSCON = 0;
  CPU4_SYSCON = 0;
  CPU5_SYSCON = 0;
}


#define STM_INT0 0x5
void __interrupt(STM_INT0) TimerInterruptHandler(void)
{
  
  InterruptRoutine();  
}

void initInterrupts()
{
  STM0_CMP0 |= 0xFFFF;  // load compare register 0, timer delay ~ 1ms.
  STM0_CMCON |= 0x10;    // load compare match control register.
  
  STM0_ISCR |= 0x1;     // Clear CMPIR0 register.
  STM0_ICR |= 0x1;      // Compare Register CMP0 Interrupt Request Flag.
  
  SRC_STM0SR0 |= 0x00000405;  // Set priority.
}

void targetEnableInterrupts(void)
{
  __enable();  
}


void targetInit(void)
{
  disableENDINIT();
  clock_Switch();
  enableSecondaryCores();
  
  #ifndef EMPTY_TARGET_INIT


  initInterrupts();     // Configure interrupts. 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void delayFunction(int n)
{
  int i;
  for(i = 0; i < n; i++);
}
