#include "CCFC2012BC.h"


#ifdef METROWERKS_2_5_NONSTRIP_DEADCODE
  #pragma force_active on
#endif


void targetEnableInterrupts(void)
{
  INTC_CPR = 0x00;   // Lower priority mask to allow all interrupt priorities
  asm(" wrteei 1"); // Enable external interrupts
}


void targetInit(void)
{  
  #ifndef EMPTY_TARGET_INIT

  initClock();  // Initialize system clock to 64MHz
  initINTC();   // Initialize interrupt
  initTimer();  // Initialize timer for 1ms timeout
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog(void)
{
  // Clear soft lock bit 
  SWT_SR = 0x0000c520;
  SWT_SR = 0x0000d928;
  // Clear watchdog enable
  SWT_CR = 0x8000010A;
}

void initClock(void)
{
  // Enable DRUN, RUN0, SAFE, RESET modes
  ME_ME = ME_ME_RESET | ME_ME_SAFE | ME_ME_DRUN | ME_ME_RUN0;

  // Switch on external oscillator
  ME_DRUN_MC |= XOSC0ON;
  
  // Select external oscillator as system clock
  ME_DRUN_MC |= SYSCLK_EXT;
  
  // Enter DRun mode to update the configuration
  ME_MCTL = MCTL_KEY | MODE_DRUN;                        
  ME_MCTL = MCTL_KEY_INV | MODE_DRUN;
  
  // Wait for mode transition to complete
  while(ME_GS & S_MTRANS);
  
  // Wait for external oscillator to stabilize
  while(!(ME_GS & XOSC0ON));
  
  // Verify that DRun mode is entered
  while((ME_GS & MODE_MASK) != MODE_DRUN);
  
  // 16 MHz xtal: Set PLL0 to 64 MHz
  FMPLL_CR = PLL_IDF_DIV2 | PLL_ODF_DIV8 | PLL_NDIV_64 | EN_PLL_SW;
  
  // Set FM PLL as system clock source
  CGM_SC_SS = SEL_FM_PLL; 
  
  // Enable PLL for DRun
  ME_DRUN_MC |= PLL0ON;
  
  // Re-enter DRun mode to update the configuration
  ME_MCTL = MCTL_KEY | MODE_DRUN;                        
  ME_MCTL = MCTL_KEY_INV | MODE_DRUN;
  
  // Wait for mode transition to complete
  while(ME_GS & S_MTRANS);
  
  // Verify that DRun mode is entered
  while((ME_GS & MODE_MASK) != MODE_DRUN);
  
  // Wait for PLL lock
  while(!(FMPLL_CR & PLL_S_LOCK));
  
  // RUN0: Enable 16MHzIRCON, XOSC0ON, PLL0ON, SYSCLK=PLL0
  ME_RUN0_MC |= IRCON | XOSC0ON | PLL0ON | SYSCLK_PLL;
  
  // Activate all peripherals
  ME_RUN_PC0 = ME_RUN_PC_ALL;
  
  // Enter RUN0 mode
  ME_MCTL = MCTL_KEY | MODE_RUN0;                   
  ME_MCTL = MCTL_KEY_INV | MODE_RUN0;
  
  // Wait for mode transition to complete
  while(ME_GS & S_MTRANS);

  // Verify target mode RUN0 is the current mode
  while((ME_GS & MODE_MASK) != MODE_RUN0);
}

void initTimer(void){
  // Enable clock for PIT and configure to stop in debug mode
  PITMCR &= ~PITMCR_MDIS;
  PITMCR |= PITMCR_FRZ;
  // Timeout= 64000 sysclks x 1sec/64M sysclks (measured with OSC set to 1ms)
  PIT_LDVAL1 = 64000;
  // Enable PIT1 interrupt and enable PIT
  PIT_TCTRL1 |= PIT_TCTRL_TIE | PIT_TCTRL_TEN;

  // PIT 1 interrupt vector with priority 1
  INTC_PSR60_63 |= INTC_PRI60_1;
}

void initINTC(void)
{
  // Initialize irq vectors
  asm("lis r3, __IVPR_VALUE@h");
  asm("ori r3, r3, __IVPR_VALUE@l");
  asm("mtivpr r3");
  
	// Initialize for HW vector mode
  INTC_MCR = INTC_MCR_HVEN;       
}
