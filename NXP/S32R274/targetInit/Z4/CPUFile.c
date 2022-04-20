#include "RacerunnerUltra.h"


/*
  Configure primary core clock to 180 MHz (max) from 40 MHz ext. osc.
*/
void clockInit(){
  /* Enable peripheral clock for PIT timer */
  MC_ME_RUN_PC0 = 0xFE;
  
  /* Turn on ext. osc. */
  MC_ME_DRUN_MC |= (0x1 << MC_ME_DRUN_MC_XOSCON);
  
  /* Enter DRUN mode */
  MC_ME_MCTL = 0x30005AF0;
  MC_ME_MCTL = 0x3000A50F;

  /* Check if ext. osc. is stable and transition to drun mode was sucessfull */
  while ((!(MC_ME_GS & (0x1 << MC_ME_GS_S_XOSC))) && (CMU0_ISR & (0x1 << CMU0_ISR_OLRI)));
  while (MC_ME_GS & (0x1 << MC_ME_GS_S_MTRANS));
  while (((MC_ME_GS & (0xF << MC_ME_GS_S_CURRENT_MODE)) >> MC_ME_GS_S_CURRENT_MODE) != 0x3);
  
  /* Select ext. osc. clock for PLL0 and PLL1 input */
  MC_CGM_AC3_SC |= (0x1 << MC_CGM_AC3_SELCTL);
  MC_CGM_AC4_SC |= (0x1 << MC_CGM_AC4_SELCTL);
  
  /* Set up PLL0 (360 MHz output) */
  /* Formula: PLL0_OUT = PLL0_IN * (MFD / (RPEDIV * RFDPHI) )*/
  PLLDIG_PLL0DV &= ~(0x7F << PLLDIG_PLL0DV_MFD);
  PLLDIG_PLL0DV &= ~(0x7 << PLLDIG_PLL0DV_PREDIV);
  PLLDIG_PLL0DV &= ~(0x3F << PLLDIG_PLL0DV_RFDPHI);
  PLLDIG_PLL0DV |= (0x12 << PLLDIG_PLL0DV_MFD);
  PLLDIG_PLL0DV |= (0x2 << PLLDIG_PLL0DV_PREDIV);
  PLLDIG_PLL0DV |= (0x1 << PLLDIG_PLL0DV_RFDPHI);
  
  /* Set up clock dividers (CLK_DIV = VALUE + 1) */
  MC_CGM_SC_DC0 |= (0x1 << MC_CGM_SC_DC0_DIV);
  MC_CGM_SC_DC3 |= (0x3 << MC_CGM_SC_DC3_DIV);
  MC_CGM_SC_DC4 |= (0x1 << MC_CGM_SC_DC4_DIV);
  MC_CGM_SC_DC5 |= (0x1 << MC_CGM_SC_DC5_DIV);
  
  /* Turn PLL0 on and select it as main system clock */
  MC_ME_DRUN_MC |= (0x1 << MC_ME_DRUN_MC_PLL0ON);
  MC_ME_DRUN_MC |= (0x2 << MC_ME_DRUN_MC_SYSCLK);
  
  /* Renter DRUN mode to update settings */
  MC_ME_MCTL = 0x30005AF0;
  MC_ME_MCTL = 0x3000A50F;
  
  /* Wait for PLL0 to become stable and system clock source gets selected */
  while (!(MC_ME_GS & (0x1 << MC_ME_GS_S_PLL0)));
  while (((MC_ME_GS & (0xF << MC_ME_GS_S_SYSCLK)) >> MC_ME_GS_S_SYSCLK) != 0x2);
}

void enableSecondaryCores(){
   MC_ME_CCTL2 = 0x00FE;  // Z7A
   MC_ME_CCTL3 = 0x00FE;  // Z7B 
   
   MC_ME_CADDR2 = 0x01040001; // Set Start address for Z7A: Will reset and start
   MC_ME_CADDR3 = 0x01070001; // Set Start address for Z7B: Will reset and start
   
   /* RE enter the drun mode, to update the configuration */
   MC_ME_MCTL = 0x30005AF0; /* Mode & Key */
   MC_ME_MCTL = 0x3000A50F; /* Mode & Key inverted */
                                        
   while(MC_ME_GS & (1<<MC_ME_GS_S_MTRANS_MASK) == 1); /* Wait for mode entry to complete */
   while(MC_ME_GS & (0xF << MC_ME_GS_S_CURRENT_MODE_MASK) != 0x3);/* Check DRUN mode has been entered */
}

void initInterrupts(){ 
  INTC_BCR &= ~(0x1 << INTC_BCR_HVEN0);
  INTC_IACKR0 = 0x01001000;
  INTC_CPR0 &= ~(0x1F);
  IVPR_init_core_0();
}


/*
  Initialize PIT timer to generate interrupt every 1 ms (PIT timer is running on 60 MHz clock)
*/
void initTimer(){
  PIT_MCR &= ~(0x1 << PIT_MCR_MDIS);
  PIT_LDVAL0 = 0x15F90;
  PIT_TCTRL0 |= (0x1 << PIT_TCTRL0_TIE);
  INTC_PSR226 |= (0xF << INTC_PSR226_PRIN);
}

void targetEnableInterrupts()
{
  PIT_TCTRL0 |= (0x1 << PIT_TCTRL0_TEN);
  asm(" wrteei 1");
}
                       

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  static int mystaticvar = 10;

  enableSecondaryCores();
  clockInit();                                  
  initInterrupts();
  initTimer();  
  mystaticvar++;
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void TimerInterruptHandlerC()
{
  InterruptRoutine();
  PIT_TFLG0 |= (0x1 << PIT_TFLG0_TIF);
}

void disableWatchdog()
{
}
