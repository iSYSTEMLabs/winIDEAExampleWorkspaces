#include "TriCore.h"


// #ifdef __CPU__
// #endif


void disableENDINIT()
{
  // disable ENDINIT
  CBS_OCNTRL = 0x000000C0;
}


void initInterrupts()
{
  
  STM0_CMP0 = 0xFFF; // load compare register 0
  STM0_CMCON = (0x10 << 0);
  STM0_ICR =  0x00000001;  // enable interrupt control register for CMP0
  
  
  STM0_ISCR = 1; // clear compare flag
  SRC_STM0SR0 =  0x02000000;  // clear interrupt request
  SRC_STM0SR0 =  0x00000405;  // set service request control register
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
  STM0_ISCR = 1;
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
  PC1 = 0xA0007D50;
  PC2 = 0xA000FA50;
  PC3 = 0xA0017750;
  CPU1_SYSCON = 0;
  CPU2_SYSCON = 0;
  CPU3_SYSCON = 0;
}


/* This function disables watchdog timers that are enabled by default */
void disable_watchdog()
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

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  disableENDINIT();
  clock_Switch();
  enableSecondaryCores();
  disable_watchdog();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void delayFunction(int n)
{
  int i;
  for(i = 0; i < n; i++);
}

void disableWatchdog()
{
}

 
#pragma ghs section text=".interrupts"    //Functionc "JumpToInterrupt" is allocated on the start of BIV register (.interrupt section)
void JumpToInterrupt()
{
  
#pragma asm   //80 nops (1 nope is 32Bytes long) for interrupt priority wich is 0x5 TriCore jumps to = value of BIV register + (priority (PIPN register) * 8 words) = 7000D640 + (0x5 * (32Bytes)) = 7000D640 + A0 = 7000D6E0
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  nop;
  ja TimerInterruptHandler;
  #pragma endasm
  //TimerInterruptHandler();
  
}

#pragma ghs interrupt
#pragma ghs section text=".interrupts"
void TimerInterruptHandler(void)
{ 
  STM0_ICR =  0x00000000;  // disable interrupt control register for CMP0
  InterruptRoutine();
  STM0_ICR =  0x00000001;  // enable interrupt control register for CMP0
}
