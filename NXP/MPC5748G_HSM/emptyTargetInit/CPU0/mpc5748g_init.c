/*****************************************************************************/
/* FILE NAME: mcu_init.c                       COPYRIGHT (c) Freescale 2012  */
/*                                                      All Rights Reserved  */
/* DESCRIPTION: Provides function to Initilise MPC5746M MCU                 */
/*                                                                           */
/*****************************************************************************/

#include "typedefs.h"
//#include "MPC57xx.h"
#include "MPC5748G_2112.h"

/******************** Configure the Mode and Clock Tree **********************/

void MC_MODE_INIT(void){

#if 0
	/* Setting RUN Configuration Register ME_RUN_PC[0] */
	MC_ME.RUN_PC[0].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[1].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[2].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[3].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[4].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[5].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[6].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[7].R=0x000000FE;              /* Peripheral ON in every mode */

	/* Turn On XOSC - PLL's remain off */
	MC_ME.DRUN_MC.R = 0x00130020; 			  /* Enable the XOSC */

	/* Route XOSC to the PLL's - IRC is default */
	MC_CGM.AC3_SC.B.SELCTL=1;                  /* Connect XOSC to PLL0 */
	MC_CGM.AC4_SC.B.SELCTL=1;                  /* Connect XOSC to PLL1 */

	/* Configure PLL0 Dividers - 200MHz from 40Mhz XOSC */
	PLLDIG.PLL0DV.B.RFDPHI1 = 4;  
	PLLDIG.PLL0DV.B.RFDPHI = 2;   
	PLLDIG.PLL0DV.B.PREDIV = 2;   
	PLLDIG.PLL0DV.B.MFD = 40;     

	/*Put PLL0 into Normal mode*/
	PLLDIG.PLL0CR.B.CLKCFG = 3;

	/* Configure PLL1 Dividers - 200MHz from 40Mhz XOSC */
	PLLDIG.PLL1DV.B.RFDPHI = 2;  
	PLLDIG.PLL1DV.B.MFD = 20;      

	/*Put PLL1 into Normal mode*/
	PLLDIG.PLL1CR.B.CLKCFG = 3;

	/* Enable loss of lock interrupts */
	PLLDIG.PLL0CR.B.LOLIE = 1;
	PLLDIG.PLL1CR.B.LOLIE = 1;

	/* Set the System Clock */
	// MC_ME.DRUN_MC.R = 0x001300F0;    /* Enable XOSC and PLLs - IRC is sysclk  */
	// MC_ME.DRUN_MC.R = 0x001300F1;    /* Enable XOSC and PLLs - XOSC is sysclk */
	// MC_ME.DRUN_MC.R = 0x001300F2;    /* Enable XOSC and PLLs - PLL0 is sysclk */
	MC_ME.DRUN_MC.R = 0x001300F4;    /* Enable XOSC and PLLs - PLL1 is sysclk */  
	  
	/* Configure System clock dividers */
	MC_CGM.SC_DC[0].B.DIV=0;         /* Fast crossbar Clock Divide by 0 */
	MC_CGM.SC_DC[0].B.DE=1;          /* Fast crossbar Clock Divide Enable */

	MC_CGM.SC_DC[1].B.DIV=1;         /* Slow crossbar Clock Divide by 2 */
	MC_CGM.SC_DC[1].B.DE=1;          /* Slow crossbar Clock Divide Enable */

	MC_CGM.SC_DC[2].B.DIV=3;         /* PBRIDGE Clock Divide by 4 */
	MC_CGM.SC_DC[2].B.DE=1;          /* PBRIDGE Clock Divide Enable */

	/* Enable and configure Aux clocks */
	MC_CGM.AC0_SC.B.SELCTL=2;        /* PLL0 PHI */

	MC_CGM.AC0_DC[0].B.DIV=4;        /* Divide by 5 -> 40MHz*/
	MC_CGM.AC0_DC[0].B.DE=1;         /* Enable Auxilliary Clock 0 divider 0 (general peripheral clock) */

	MC_CGM.AC0_DC[1].B.DIV=4;        /* Divide by 5 */   
	MC_CGM.AC0_DC[1].B.DE=1;         /* Enable Auxilliary Clock 0 divider 1 (SDADC clock) */

	MC_CGM.AC0_DC[2].B.DIV=4;        /* Divide by 5 */
	MC_CGM.AC0_DC[2].B.DE=1;         /* Enable Auxilliary Clock 0 divider 2 (SARADC clock) */

	/* Not Implemented on Cut 1 Silicon */
	//MC_CGM.AC0_DC[3].B.DIV=3;        /* Divide by 4 */
	//MC_CGM.AC0_DC[3].B.DE=1;         /* Enable Auxilliary Clock 0 divider 3 (DSPI_CLK0) */

	/* Not Implemented on Cut 1 Silicon */
	//MC_CGM.AC0_DC[4].B.DIV=3;        /* Divide by 4 */
	//MC_CGM.AC0_DC[4].B.DE=1;         /* Enable Auxilliary Clock 0 divider 4 (DSPI_CLK1/LIN_CLK) */

	MC_CGM.AC2_DC[0].B.DIV=3;        /* Divide by 4 */
	MC_CGM.AC2_DC[0].B.DE=1;         /* Enable Auxilliary Clock 2 divider 0 (FlexRay) */
	MC_CGM.AC2_DC[1].B.DIV=3;        /* Divide by 6 */
	MC_CGM.AC2_DC[1].B.DE=1;         /* Enable Auxilliary Clock 2 divider 1 (SENT) */

	MC_CGM.AC5_DC0.B.DIV=3;          /* Divide by 4 */
	MC_CGM.AC5_DC0.B.DE=1;           /* Enable Auxilliary Clock 5 divider 0 (PSI5) */

	MC_CGM.AC5_DC1.B.DIV=3;          /* Divide by 4 */
	MC_CGM.AC5_DC1.B.DE=1;           /* Enable Auxilliary Clock 5 divider 1 (PSI5) */

	MC_CGM.AC5_DC2.B.DIV=3;          /* Divide by 4 */
	MC_CGM.AC5_DC2.B.DE=1;           /* Enable Auxilliary Clock 5 divider 2 (PSI5) */

	/* Set Up clock selectors to allow clock out to be viewed */
	MC_CGM.AC6_SC.B.SELCTL=2;        /* Select PLL0-sysclk0 */
	MC_CGM.AC6_DC0.B.DE=1;           /* Enable AC2 divider 0 (SYSCLK0)*/
	MC_CGM.AC6_DC0.B.DIV=9;          /* Divide by 10 */

	MC_CGM.AC7_SC.B.SELCTL=4;        /* Select PLL1-sysclk1 */
	MC_CGM.AC7_DC0.B.DE=1;           /* Enable AC2 divider 1 (SYSCLK1)*/
	MC_CGM.AC7_DC0.B.DIV=9;          /* Divide by 10 */

	/* Configure Pins for Clock out */
	SIUL2.MSCR[15].R = 0x22800001;                          /* PA15 as Sysclk1 */
	SIUL2.MSCR[88].R = 0x22800001;                           /* PF8 as Sysclk0 */
	
	/* CAN Clock Runs from XOSC by Default */
	MC_CGM.AC8_SC.R = 0x01000000;
	//MC_CGM.AC8_DC0.B.DE =1;                                  // Enable Auxilliary Clock 8 divider 0 (CAN Clock)
	//MC_CGM.AC8_DC0.B.DIV=7;                                  // CAN Clock Clock Divide by 4
	// Enable Auxilliary Clock 8 divider 0 (CAN Clock)
	// CAN Clock Clock Divide by 1
	MC_CGM.AC8_DC0.R = 0x80040000;

	MC_CGM.AC9_SC.B.SELCTL=1;       /* XOSC */   
	MC_CGM.AC9_DC0.B.DE =1;         /* Enable Auxilliary Clock 8 divider 0 (RTI/PIT?) */
	MC_CGM.AC9_DC0.B.DIV=3;         /* CAN Clock Clock Divide by 4 */

	MC_CGM.AC10_DC0.B.DE =1;                                // Enable Auxilliary Clock 10 divider 0 (ENET)
	MC_CGM.AC10_DC0.B.DIV=4;                                // Divide by 6

	/* Enable core 2 in all modes */
	MC_ME.CCTL[0].R = 0x00FE;
   
	/* Mode change Re-enter the drun mode, to start cores, clock tree & PLL1 */
	MC_ME.MCTL.R = 0x30005AF0;                                  /* Mode & Key */
	MC_ME.MCTL.R = 0x3000A50F;                         /* Mode & Key inverted */
										
	while(MC_ME.GS.B.S_MTRANS == 1);          /* Wait for mode entry complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode entered */
  
#endif  /* if 0 */  
  
}
