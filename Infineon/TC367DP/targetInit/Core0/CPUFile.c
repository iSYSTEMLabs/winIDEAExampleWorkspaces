#include "TriCore.h"


void disableENDINIT()
{
  CBS_OCNTRL = 0x000000C0; // disable ENDINIT via CERBERUS
}

void disableWatchdog()
{
  int key;

  disableENDINIT();

  /* Disable safety watchdog */
  key = SCU_WDTSCON0; // Write current register value to key
  key ^= (0x3F << SCU_WDTSCON0_PW); //Decrypt key (bottom 6 bits are inverted)
  key &= ~(0x1 << SCU_WDTSCON0_LCK); // Clear lock bit
  key |= (0x1 << SCU_WDTSCON0_ENDINIT); // Set ENDINIT bit, update SCU_WDTSCON0
  SCU_WDTSCON0 = key; // Update register with new value
  SCU_WDTSCON1 |= (0x1 << SCU_WDTSCON1_DR); // Request to disable watchdog
  key |= (0x1 << SCU_WDTSCON0_LCK); // Lock the register
  SCU_WDTSCON0 = key; // Update register with new value

  /* Disable primary core watchdog, other cores watchdogs are disabled by default */
  key = SCU_WDTCPU0CON0; // Write current register value to key
  key ^= (0x3F << SCU_WDTCPU0CON0_PW); //Decrypt key (bottom 6 bits are inverted)
  key &= ~(0x1 << SCU_WDTCPU0CON0_LCK); // Clear lock bit
  key |= (0x1 << SCU_WDTCPU0CON0_ENDINIT); // Set ENDINIT bit, update SCU_WDTSCON0
  SCU_WDTCPU0CON0 = key; // Update register with new value
  SCU_WDTCPU0CON1 |= (0x1 << SCU_WDTCPU0CON1_DR); // Request to disable watchdog
  key |= (0x1 << SCU_WDTCPU0CON0_LCK); // Lock the register
  SCU_WDTCPU0CON0 = key; // Update register with new value
}


void clockInit()
{
  SCU_OSCCON = 0x218; // Change clock source to external clock with power saving DISABLED
  
  // Generate reference clock for external oscilator (ext. osc = 20MHz): 16 + (-1 + 5) fOSC.  
  SCU_OSCCON |= (5 << SCU_OSCCON_OSCVAL_BITS); 
  
  // Wait until PLLLV and PLLHV flags are set (wait for stable DCO controlled by OSC WDG).
  while (!((SCU_OSCCON & (1 << SCU_SYSPLLCON0_PLLLV_BITS)) &&
  (SCU_OSCCON & (1 << SCU_SYSPLLCON0_PLLHV_BITS))));
      
  int iSysPllCon0 = 0;    
  iSysPllCon0 |= (1 <<SCU_SYSPLLCON0_INSEL_BIT); // Set SYSPLL fOSC0 as clock source.
  iSysPllCon0 |= (0 << SCU_SYSPLLCON0_PDIV_BITS); // Set SYSPLL P clock divider.
  iSysPllCon0 |= (29 << SCU_SYSPLLCON0_NDIV_BITS); // Set SYSPLL N clock divider.   
  iSysPllCon0 |= (1 << SCU_SYSPLLCON0_PLLPWD_BITS); // Allow SYSPLL to be used (no power saving)
  SCU_SYSPLLCON0 = iSysPllCon0;
  
  SCU_SYSPLLCON1 = 5;    // Set SYSPLL K2 clock divider.
  
  SCU_PERPLLCON0 = 0x00013E00;  // Set PERPLL default P and N clock dividers
  SCU_PERPLLCON1 = 0x00000101;  // Set PERPLL K2 clock divier to 5 (K2DIV = 6)
  
  // Step 3: wait until SYSPLL and PERPLL lock is set (PLL stable)
  while (!((SCU_SYSPLLSTAT & (1 << SCU_SYSPLLSTAT_LOCK_BITS)) &&
  (SCU_PERPLLSTAT & (1 << SCU_PERPLLSTAT_LOCK_BITS))));
  
  SCU_CCUCON0 = 0x47230113; // Configure default peripheral clock prescalers
  SCU_CCUCON1 = 0x21210312; // Configure default peripheral clock prescalers
  SCU_CCUCON2 = 0x07001201; // Configure default peripheral clock prescalers
  
  delayFunction(20000); // After every frequency change we wait to avoid jitter.
  
  SCU_CCUCON0 = 0x57230113; // Step 5: switch CCU input clock to PLL via CCUCON0.CLKSEL
  
  SCU_SYSPLLCON1 = 0x3; // Set K2 to 3 (K2DIV = 4); fPLL0 = 600/4 = 150MHz
  delayFunction(4000);
  
  SCU_SYSPLLCON1 = 0x2; // Set K2 to 2 (K2DIV = 3) fPLL0 = 600/3 = 200MHz
  delayFunction(4000);
  
  SCU_SYSPLLCON1 = 0x1; // Set K2 to 1 (K2DIV = 2) fPLL0 = 600/2 = 300MHz
  delayFunction(4000);
}

void delayFunction(int n)
{
  int i;
  for(i = 0; i < n; i++);
}

void enableSecondCore()
{
  PC1 = 0xA0000800; // Set CPU1 Program counter
  CPU1_SYSCON = 0; // Enable secondary core
}


#define STM_INT0 0x6
void __interrupt(STM_INT0) TimerInterruptHandler(void)
{
  InterruptRoutine();  
}

void targetEnableInterrupts(void)
{
  __enable();
}


void initInterrupts()
{
  STM0_CMP0 |= 0xFFFF; // Load Compare Register 0 with value 65535.
  STM0_CMCON |= 0x10; // Use first 16 bit of CMP0

  STM0_ISCR |= CMP0IRR; // Clear CMPIR0 register (CMPIR0 cannot be written to directly).
  STM0_ICR |= CMP0E; // Compare Register CMP0 Interrupt Enabled
    
  SRC_STM0SR0 |= 0x00000406; // Set interrupt priority + enable service request
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  clockInit();
  enableSecondCore();
  initInterrupts();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}