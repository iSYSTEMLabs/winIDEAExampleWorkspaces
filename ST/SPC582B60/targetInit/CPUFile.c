#include "chorus.h"


void InterruptHandler()
{
  int dummy = INTC_IACKR0;
  
  InterruptRoutine();
  
  PIT0_TFLG0 |= (1 << PIT0_TFLG0_TIF);
}

void disableWatchdog()
{
}

/*
  Init clock to 80 Mhz (max) from ext. 40 MHz osc.
*/
void initClock(){
  MC_RGM_DES 	= 0xFFFF;
  MC_RGM_FES 	= 0xFFFF;
  MC_ME_ME 	= 0x000005FF;
  MC_ME_ME = 0x0000FFFF;
  
  /*! Set RUN Configuration Registers | MC_ME.RUN_PC[n] */
  MC_ME_RUN_PC0=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME_RUN_PC1=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME_RUN_PC2=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME_RUN_PC3=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME_RUN_PC4=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME_RUN_PC5=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME_RUN_PC6=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME_RUN_PC7=0x000000FE;              /* Peripheral ON in every mode  */

  //MC_ME.LP_PCN[0].R=0xFFFFFFFF;              /* Peripheral ON in every mode  */
	
	/* Turn On XOSC - PLL0 remain off */
  MC_ME_DRUN = 0x00130030; 			  /* Enable the XOSC */
	
  /* Force transition mode */
  MC_ME_MCTL = 0x30005AF0;        		// DRUN Mode & Key
  MC_ME_MCTL = 0x3000A50F;        		// DRUN Mode & Key

  while(!(MC_ME_GS & (0x1 << MC_ME_GS_XOSC)));                    // ME_GS Wait for external osc to stabilize.
  while(MC_ME_GS & (0x1 << MC_ME_GS_MTRANS));                   // Waiting for end of transaction
  while(!(MC_ME_GS & (0x3 << MC_ME_GS_CURRENT_MODE)));      // ME_GS Check DRUN mode has successfully been entered

  CGM_AC3_SC |= (0x1 << CGM_AC3_SC_SELCTL);                        /* Connect XOSC to PLL0 */
  
  // XOSC = 40MHZ
  /* Configure PLL0 Dividers - PHI:80MHz PHI1:80MHz from 40Mhx XOSC - VCO:800MHz */
  PLLDIG.PLL0DV.B.RFDPHI1 = 5;
  PLLDIG.PLL0DV.B.RFDPHI = 5;
  PLLDIG.PLL0DV.B.PREDIV = 2;
  PLLDIG.PLL0DV.B.MFD = 20; 
  
  /*Put PLL0 into Normal mode*/
  PLLDIG_PLL0CR |= (0x3 << PLLDIG_PLL0CR_CLKCFG); 

  MC_ME_DRUN = 0x00130072;    /* Enable XOSC and PLL0 - PLL0 is sysclk */ //80Mhz

 /*! Execute mode change: Re-enter the DRUN mode to start cores, clock tree dividers, PCS, and PLL1 */
  
  // configure peripheral clock to 40 MHz
  CGM_AC12_SC &= ~(0xF << CGM_AC12_SC_SELCTL);
  CGM_AC12_SC |= (0x2 << CGM_AC12_SC_SELCTL);
  AC12_DC2 |= (1 << AC12_DC2_DE);
  AC12_DC2 |= (0x1 << AC12_DC2_DIV);
  
  
  MC_ME_MCTL = 0x30005AF0;                    /*! Write Mode and Key | MC_ME.MCTL */
  MC_ME_MCTL = 0x3000A50F;                    /*! Write Mode and Key inverted | MC_ME.MCTL */
  PLLDIG_PLL0SR |= (0x1 << PLLDIG_PLL0SR_EXTPDF);
  
  while(MC_ME_GS & (0x1 << MC_ME_GS_MTRANS));                   // Waiting for end of transaction
  while(!(MC_ME_GS & (0x3 << MC_ME_GS_CURRENT_MODE)));      // ME_GS Check DRUN mode has successfully been entered

}

void initTimer(){
  PIT0_MCR |= (1 << PIT0_MCR_MDIS);           // Disable clock
  PIT0_LDVAL0 = 0x9C40;                       // Load value
  PIT0_MCR &= ~(1 << PIT0_MCR_MDIS);          // Enable clock  
}

void targetEnableInterrupts()
{
  e200zX_Interrupt_Setup();
  INTC_PSR226 |= (0xF << INTC_PSR226_PRI);
  INTC_CPR0 &= ~(0x3F << INTC_CPR0_PRI);
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TIE);
  PIT0_TFLG0 |= (1 << PIT0_TFLG0_TIF);
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TEN);
  asm("wrteei 1");
}


void targetInit()
{    
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  //MC_INIT(); // Set clock to 80MHz, does not work on ED device. Maybe need to set trace related clocks?
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
