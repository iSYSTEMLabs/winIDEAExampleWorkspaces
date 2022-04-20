#include "Lavaredo.h"    
#include "SPC570S50L.h"
#include "spc57_init.h"
#include "typedefs.h"


/* 
   The correct IRQ #226 should be used for PIT0_0, but the Lavaredo has bug and IRQ# 240 is used 
   for PIT0_0 interrup insteead of PIT1_0 !! 
  
*/


tenPllFreq		pll0_clk;
tenDivFactor	bridge_divider;
tenDivFactor	lin_divider;

#define SWT_SR 0xFC058010
#define SWT_CR 0xFC058000         

#define _SYSCLK_ 		SYSCLK_64MHz

void  initPIT(void);
void  initINTC(void);


void initGPIO(void)                   /* PA[0] and PA[1] Ports  */
{
   SIUL2.MSCR[0].B.OERC   = 0x1;  // Output medium strenght 
   SIUL2.MSCR[0].B.ODC    = 0x02; // Push-Pull 
   SIUL2.MSCR[0].B.IBE    = 0x0;  // disable input buffer
   SIUL2.MSCR[0].B.SMC    = 0x1;  // enable 
   SIUL2.GPDO[0].B.PDO    = 0x0;  // PA0 off
   
   SIUL2.MSCR[1].B.OERC   = 0x1;  // Output medium strenght 
   SIUL2.MSCR[1].B.ODC    = 0x02; // Push-Pull 
   SIUL2.MSCR[1].B.IBE    = 0x0;  // disable input buffer
   SIUL2.GPDO[1].B.PDO    = 0x0;  // PA1 off
   
}

void targetEnableInterrupts()
{
/* The correct IRQ #226 should be used for PIT0_0, but the Lavaredo has bug and IRQ# 240 is used 
   for PIT0_0 interrup insteead of PIT1_0 !! */
  
   INTC.CPR[0].B.PRI           = 0;   // lower current INTC priority 
   PIT_0.TIMER[0].TCTRL.B.TEN  = 0;   // stop PIT
   PIT_0.TIMER[0].TFLG.B.TIF   = 1;   // clear interrupt flag
   PIT_0.TIMER[0].TCTRL.B.TIE  = 1;   // enable PIT0 interrupt   
   PIT_0.TIMER[0].TCTRL.B.TEN  = 1;   // start PIT
   asm(" wrteei 1");                  //enable external interrupts
}


void targetEnableWakeupInterrupts(void)
{
   
   asm(" wrteei 1");                  //enable external interrupts 
}

void targetDisableWakeupInterrupts(void)
{
  asm(" wrteei 0");                   //disable external interrupts
}


void PLL0_Init(tenPllFreq ePllFreq){
	switch (ePllFreq) {	/* switch ePllFreq */
		case f200M:
			PLLDIG.PLL0DV.B.PREDIV    = 6;		
			PLLDIG.PLL0DV.B.RFDPHI    = 2;
			PLLDIG.PLL0DV.B.RFDPHI1   = 10; 			
			PLLDIG.PLL0DV.B.MFD       = 60; 
			break;
		case f180M:
			PLLDIG.PLL0DV.B.PREDIV    = 5;		
			PLLDIG.PLL0DV.B.RFDPHI    = 2;
			PLLDIG.PLL0DV.B.RFDPHI1   = 9; 			
			PLLDIG.PLL0DV.B.MFD       = 45; 
			break;
		case f160M:
			PLLDIG.PLL0DV.B.PREDIV    = 5;		
			PLLDIG.PLL0DV.B.RFDPHI    = 3;
			PLLDIG.PLL0DV.B.RFDPHI1   = 12; 			
			PLLDIG.PLL0DV.B.MFD       = 60; 
			break;		
		case f150M:
			PLLDIG.PLL0DV.B.PREDIV    = 6;		
			PLLDIG.PLL0DV.B.RFDPHI    = 4;
			PLLDIG.PLL0DV.B.RFDPHI1   = 15; 			
			PLLDIG.PLL0DV.B.MFD       = 90; 
			break;
		case f120M:
			PLLDIG.PLL0DV.B.PREDIV    = 5;		
			PLLDIG.PLL0DV.B.RFDPHI    = 4;
			PLLDIG.PLL0DV.B.RFDPHI1   = 12; 			
			PLLDIG.PLL0DV.B.MFD       = 60; 
			break;
		case f100M:
			PLLDIG.PLL0DV.B.PREDIV    = 6;		
			PLLDIG.PLL0DV.B.RFDPHI    = 4;
			PLLDIG.PLL0DV.B.RFDPHI1   = 10; 			
			PLLDIG.PLL0DV.B.MFD       = 60; 
			break;	
		case f80M:
			PLLDIG.PLL0DV.B.PREDIV    = 5;		
			PLLDIG.PLL0DV.B.RFDPHI    = 6;
			PLLDIG.PLL0DV.B.RFDPHI1   = 12; 			
			PLLDIG.PLL0DV.B.MFD       = 60; 
			break;
		case f64M:
			PLLDIG.PLL0DV.B.PREDIV    = 4;		
			PLLDIG.PLL0DV.B.RFDPHI    = 5;
			PLLDIG.PLL0DV.B.RFDPHI1   = 8; 			
			PLLDIG.PLL0DV.B.MFD       = 32; 
			break;	
		case f60M:
			PLLDIG.PLL0DV.B.PREDIV    = 5;		
			PLLDIG.PLL0DV.B.RFDPHI    = 8;
			PLLDIG.PLL0DV.B.RFDPHI1   = 12; 			
			PLLDIG.PLL0DV.B.MFD       = 60; 
			break;				
		case f16M:
			PLLDIG.PLL0DV.B.PREDIV    = 5;		
			PLLDIG.PLL0DV.B.RFDPHI    = 30;
			PLLDIG.PLL0DV.B.RFDPHI1   = 12; 			
			PLLDIG.PLL0DV.B.MFD       = 60; 
			break;				
		default:
			while(1);
	}	/* end switch ePllFreq */			
}

void PLL1_Init(tenPllFreq ePllFreq){

	switch (ePllFreq) {	/* switch ePllFreq */
		case f200M:
				PLLDIG.PLL1DV.B.RFDPHI  = 2;
				PLLDIG.PLL1DV.B.MFD     = 20; 
				break;
		case f180M:
				PLLDIG.PLL1DV.B.RFDPHI  = 2;
				PLLDIG.PLL1DV.B.MFD     = 18; 
				break;
		case f160M:
				PLLDIG.PLL1DV.B.RFDPHI  = 2;
				PLLDIG.PLL1DV.B.MFD     = 16; 
				break;
		case f150M:
				PLLDIG.PLL1DV.B.RFDPHI  = 4;
				PLLDIG.PLL1DV.B.MFD     = 30; 
				break;
		case f120M:
				PLLDIG.PLL1DV.B.RFDPHI  = 5;
				PLLDIG.PLL1DV.B.MFD     = 30; 
				break;
		case f100M:
				PLLDIG.PLL1DV.B.RFDPHI  = 6;
				PLLDIG.PLL1DV.B.MFD     = 30; 
				break;
		case f80M:
				PLLDIG.PLL1DV.B.RFDPHI  = 4;
				PLLDIG.PLL1DV.B.MFD     = 16; 
				break;
		case f64M:
				PLLDIG.PLL1DV.B.RFDPHI  = 5;
				PLLDIG.PLL1DV.B.MFD     = 16; 
				break;	
		case f60M:
				PLLDIG.PLL1DV.B.RFDPHI  = 10;
				PLLDIG.PLL1DV.B.MFD     = 30; 
				break;
		case f16M:
				PLLDIG.PLL1DV.B.RFDPHI  = 20;
				PLLDIG.PLL1DV.B.MFD     = 16; 
				break;					
		default:
			while(1);
	}

	PLLDIG.PLL1FM.B.MODEN         = 1;		/* Modulation enabled */
	PLLDIG.PLL1FM.B.MODSEL        = 0;		/* Modulation centered around nominal frequency */
	PLLDIG.PLL1FM.B.MODPRD        = 0x823;
	PLLDIG.PLL1FM.B.INCSTP        = 0x2;
		
}

void MC_MODE_Init(void){

	//volatile int x;
	MC_RGM.DES.R                  = 0xFFFF;
	MC_RGM.FES.R                  = 0xFFFF;
  MC_RGM.FRET.R 	              = 0x00;           // Functional Reset Escalation Reg cleared
  MC_RGM.DRET.R 	              = 0x00;           // Destructie Reset Escalation Reg cleared
	MC_ME.ME.R                    = 0x000005E2;		  /* Enable all modes */
  
	MC_ME.DRUN_MC.R               = 0x00130071;       /* ME_DRUN_MC - enable XOSC and PLLs - PLL1 is sysclk */

	MC_ME.RUN_PC[0].R             = 0x000000FE;			/* Peripheral ON in every mode */
	MC_ME.RUN_PC[1].R             = 0x000000FE;			/* Peripheral ON in every mode */
	MC_ME.RUN_PC[2].R             = 0x000000FE;			/* Peripheral ON in every mode */
	MC_ME.RUN_PC[3].R             = 0x000000FE;			/* Peripheral ON in every mode */
	MC_ME.RUN_PC[4].R             = 0x000000FE;			/* Peripheral ON in every mode */
	MC_ME.RUN_PC[5].R             = 0x000000FE;			/* Peripheral ON in every mode */
	MC_ME.RUN_PC[6].R             = 0x000000FE;			/* Peripheral ON in every mode */
	MC_ME.RUN_PC[7].R             = 0x000000FE;			/* Peripheral ON in every mode */

	/* Turn On XOSC - PLL's remain off */
	MC_ME.DRUN_MC.R               = 0x00130031; 			  	/* Enable the XOSC */

	/* Trigger DRUN mode Transision */
	MC_ME.MCTL.R              = (DRUN_MODE << 28 | 0x00005AF0);		/* Mode & Key */
	MC_ME.MCTL.R              = (DRUN_MODE << 28 | 0x0000A50F);      /* Mode & Key inverted */
	while(MC_ME.GS.B.S_MTRANS == 1);            		/* Wait for mode entry to complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != DRUN_MODE);    	/* Check DRUN mode has been entered */

	/* Route XOSC to the PLL's - IRC is default */
	MC_CGM.AC2_SC.B.SELCTL    = SELCTL_CRYSTAL_OSC;		/* Connect XOSC to PLL0 */
	MC_CGM.AC3_SC.B.SELCTL    = SELCTL_CRYSTAL_OSC;		/* Connect XOSC to PLL1 */
	/* Trigger DRUN mode Transision */
	MC_ME.MCTL.R              = (DRUN_MODE << 28 | 0x00005AF0);		/* Mode & Key */
	MC_ME.MCTL.R              = (DRUN_MODE << 28 | 0x0000A50F);      /* Mode & Key inverted */
	while(MC_ME.GS.B.S_MTRANS == 1);            		/* Wait for mode entry to complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != DRUN_MODE);    	/* Check DRUN mode has been entered */

	PLL0_Init(pll0_clk);
	PLL1_Init(_SYSCLK_);

	/* Set the System Clock */
	MC_ME.DRUN_MC.R           = 0x00130031;       /* ME_DRUN_MC - enable XOSC and PLLs - PLL1 is sysclk */

	/* Trigger DRUN mode Transision */
	MC_ME.MCTL.R              = (DRUN_MODE << 28 | 0x00005AF0);		/* Mode & Key */
	MC_ME.MCTL.R              = (DRUN_MODE << 28 | 0x0000A50F);      /* Mode & Key inverted */
	while(MC_ME.GS.B.S_MTRANS == 1);            		/* Wait for mode entry to complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != DRUN_MODE);    	/* Check DRUN mode has been entered */
	
	MC_CGM.SC_DC1.B.DIV       = bridge_divider;		/* Peripheral Clock Divide by 2 */
	
	/* Configure System clock dividers */
	//MC_CGM.SC_DC[0].B.DE = 1;					/* System Clock Divide Enable */
	MC_CGM.SC_DC0.B.DIV       = DIVIDEBY1;			/* System Clock Divide by 1 */
	/* Enable and configure Aux clocks */
	
	/* AUX Clock Selector 0 */
//	MC_CGM.AC0_SC.B.SELCTL    = SELCTL_PLL0;		      /* PLL0 PHI */     
	MC_CGM.AC0_SC.B.SELCTL    = SELCTL_CRYSTAL_OSC;		/* External OSC  */     

	MC_CGM.AC0_DC0.B.DE       = ENABLED;            	/* Enable Auxilliary Clock 0 divider 0 (PIT) */
	MC_CGM.AC0_DC0.B.DIV      = DIVIDEBY1;			/* Divide by 1 */

	MC_CGM.AC0_DC1.B.DE       = ENABLED;				/* Enable Auxilliary Clock 0 divider 1 (SARADC clock) */
	MC_CGM.AC0_DC1.B.DIV      = DIVIDEBY6;			/* Divide by 6 */

	MC_CGM.AC0_DC2.B.DE       = ENABLED;				/* Enable Auxilliary Clock 0 divider 2 (CTU clock) */
	MC_CGM.AC0_DC2.B.DIV      = DIVIDEBY1; 			/* Divide by 4 */

	MC_CGM.AC0_DC3.B.DE       = ENABLED;				/* Enable Auxilliary Clock 0 divider 3 (DSPI_CLK0) */
	MC_CGM.AC0_DC3.B.DIV      = DIVIDEBY4;			/* Divide by 4 */

	MC_CGM.AC0_DC4.B.DE       = ENABLED;				/* Enable Auxilliary Clock 0 divider 4 (LIN_CLK) */
	MC_CGM.AC0_DC4.B.DIV      = lin_divider;			/* Divide by 4 */	
	
	MC_CGM.AC0_DC5.B.DE       = ENABLED;				/* Enable Auxilliary Clock 0 divider 4 (ETIMER) */
	MC_CGM.AC0_DC5.B.DIV      = DIVIDEBY1;			/* Divide by 1 */	

	/* Trigger DRUN mode Transision */
	MC_ME.DRUN_MC.R         = 0x00130072;       /* ME_DRUN_MC - enable XOSC and PLLs - PLL1 is sysclk */
	MC_ME.MCTL.R            = (DRUN_MODE << 28 | 0x00005AF0);		/* Mode & Key */
	MC_ME.MCTL.R            = (DRUN_MODE << 28 | 0x0000A50F);      /* Mode & Key inverted */
	while(MC_ME.GS.B.S_MTRANS == 1);            		/* Wait for mode entry to complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != DRUN_MODE);    	/* Check DRUN mode has been entered */ 
}
   
int targetInit(void)         		    
{
  bridge_divider          = DIVIDEBY2;
	pll0_clk                = _SYSCLK_;
  lin_divider             = DIVIDEBY1;
  
  MC_MODE_Init(); 
  initPIT();
  initINTC();
}

void initPIT(void)
{
  // System Clk 200MHz, Per Clk 50 MHz
   PIT_0.MCR.B.MDIS               = 1;        // enable PIT
   PIT_0.MCR.B.FRZ                = 1;        // freeze in debug mode
   PIT_0.TIMER[0].TCTRL.B.TEN     = 0;        // stop PIT   
   //PIT_0.TIMER[0].LDVAL.R         = 16000;    // 40 msec
   PIT_0.TIMER[0].LDVAL.R         = 40056;    // 1 msec
   
/* The correct IRQ #226 should be used for PIT0_0, but the Lavaredo has bug and IRQ# 240 is used 
   for PIT0_0 interrup insteead of PIT1_0 !! */   
//    INTC.PSR226_227.B.PRC_SELa     = 0x0F;      // CPU  2
//    INTC.PSR226_227.B.PRIa         = 0x10;     // priority 10    
   PIT_0.TIMER[0].TCTRL.B.TIE     = 0;        // disable PIT0 interrupt 
   PIT_0.TIMER[0].TFLG.B.TIF      = 1;        // clear interrupt flag  
   PIT_0.MCR.B.MDIS               = 0;   
}

void initINTC(void)
{
   e200zX_Interrupt_Setup();                  /* Initialize core's spr IVPR register */  
   INTC.IACKR[0].R                = (uint32_t) &intc_sw_mode_isr_vector_table[0];
   INTC.BCR.B.HVEN0               = 0;        /* Software vector mode used for Core 2 */
   INTC.BCR.B.HVEN1               = 0;        /* Software vector mode used for Core 2 */
   INTC.BCR.B.HVEN2               = 0;        /* Software vector mode used for Core 2 */
   INTC.PSR240_241.B.PRC_SELa     = 0x0F;      // CPU  0
   INTC.PSR240_241.B.PRIa         = 0x3;     // priority 10  
/* The correct IRQ #226 should be used for PIT0_0, but the Lavaredo has bug and IRQ# 240 is used 
   for PIT0_0 interrup insteead of PIT1_0 !! */
//    INTC.PSR226_227.B.PRC_SELa     = 0x0F;      // CPU  2
//    INTC.PSR226_227.B.PRIa         = 0x04;     // priority 10    
   INTC.CPR[0].B.PRI              = 0;        /* Lower core 0's INTC current priority to 0 */
  
}

void RtiInterruptRoutine(void){
} 

void disableWatchdog()
{
  meml(SWT_SR)            = 0xc520;
  meml(SWT_SR)            = 0xd928;
  meml(SWT_CR)            = 0xFF00010A;
}

void InterruptHandler()
{
  InterruptRoutine();
  
  PIT_0.TIMER[0].TCTRL.B.TIE = 0;   
  PIT_0.TIMER[0].TFLG.B.TIF  = 1; 
  PIT_0.TIMER[0].TCTRL.B.TIE = 1;  
}
