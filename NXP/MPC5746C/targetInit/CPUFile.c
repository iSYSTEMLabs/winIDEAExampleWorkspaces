#include "calypso.h"


unsigned char gotoStopLowPowerMode;  
unsigned char gotoHaltLowPowerMode;  
unsigned char mustInitLPM;

extern const uint32_t IntcIsrVectorTable[];
extern void  IVPR_init_core_0(void);
extern void  IVPR_init_core_1(void);
extern const vuint32_t intc_sw_mode_isr_vector_table [];

void initSTM(void);

void initVariables(void)
{                             
  gotoStopLowPowerMode = 1;  
  gotoHaltLowPowerMode = 0;
  mustInitLPM = 1;
}

void enableSecondCore()
{
   MC_RGM.DES.R = 0xFFFF;
   MC_RGM.FES.R = 0xFFFF;
   MC_ME.ME.R = 0x000005FF;
   
   /* Trigger DRUN mode Transision */
   MC_ME.MCTL.R = 0x30005AF0;                     // Mode & Key 
   MC_ME.MCTL.R = 0x3000A50F;                     // Mode & Key inverted 
   while(MC_ME.GS.B.S_MTRANS == 1);               // Wait for mode entry to complete 
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       // Check DRUN mode has been entered 

   MC_ME.CCTL[2].R = 0x00FE;   // enable core 1 (Z4B) in all modes
   MC_ME.CCTL[3].R = 0x00FE;   // enable core 2 (Z2) in all modes 

   MC_ME.CADDR[2].R = 0x00FF2001; // Set Start address for core 1 (Z4B). Will reset and start
   MC_ME.CADDR[3].R = 0x00FE2001; // Set Start address for core 2 (Z2). Will reset and start 
   
   /* RE enter the drun mode, to update the configuration */
   MC_ME.MCTL.R = 0x30005AF0;                // Mode & Key 
   MC_ME.MCTL.R = 0x3000A50F;                // Mode & Key inverted 
                                        
   while(MC_ME.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode has been entered 
              
}

void targetEnableInterrupts()
{
  PIT.TIMER[0].TCTRL.B.TEN  = 0; //start PIT
  PIT.TIMER[0].TCTRL.B.TIE  = 1; //enable PIT0 interrupt
  PIT.TIMER[0].TFLG.B.TIF   = 1; // clear interrupt flag
  PIT.TIMER[0].TCTRL.B.TEN  = 1; //start PIT  
  
  asm(" wrteei 1");              //enable external interrupts
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT


  initClockGating();  
  initINTC();     
  initPIT();       
  //initSTM();  
  //initVariables();     
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


#define PFLASH_PFCR1_REG  PFLASH.PFCR1.R  /* PFLASH registers */
#define PFLASH_PFCR2_REG  PFLASH.PFCR2.R
#define PFLASH_PFCR3_REG  PFLASH.PFCR3.R
#define PFLASH_PFAPR_REG  PFLASH.PFAPR.R
#define PFLASH_PFCR4_REG  PFLASH.PFCR4.R

#define PFLASH_PFCR1_VALUE_16MHz 0x00152117  /* Flash port p0 configuration:  */
    /* Port 0 prefetch enables for masters 0,3,5 (core I-busses) only,       */
    /* APC=1 Pipelined access can be intiazted 1 cyc before prev data valid, */
    /* RWSC=1 Read Wait State Control: 1 add'l wait states (160 MHz),        */
    /* P0_DPFEN=0 No prefetching is triggerd by a data read access,          */
    /* P0_IPFEN=1 Prefetching may be triggered by any instruction read access*/
    /* P0_PFLIM=3 Prefetch on miss or hit,                                   */
    /* P0_BFEN=1 Line read buffers are enabled.                              */
#define PFLASH_PFCR1_VALUE_160MHz 0x00152417  /* Flash port p0 configuration: */
    /* RWSC=4 r Read Wait State Control: 4 add'l wait states (16 MHz),       */
    /* All other fields same as for 16 MHz.                                  */
#define PFLASH_PFCR2_VALUE_BASIC 0x00150017  /* Flash port p1 configuration:  */
    /* Configured same as Port 0 except for not present fields of APC, RWSC. */
#define PFLASH_PFCR3_VALUE_BASIC 0x00000000  /* Flash way cfg, arb., BAF dis. */
    /* All ports have both buffers available for any flash access,           */
    /* BAF_DIS=0 Executable access to BAF flash region is allowed,           */
    /* ARBM=0 Fixed priority arbitration with AHB p0>p1>p2.                  */
#define PFLASH_PFAPR_VALUE_BASIC 0xFFFFFFFF  /* R/W access to flash array:    */
    /* All masters have both read/write access to flash array.               */
#define PFLASH_PFCR4_VALUE_BASIC 0x00150017  /* Flash port p2 configuration:  */
    /* Configured same as Port 0 except for not present fields of APC, RWSC. */


void initClockGating(void) {
  
  MC_ME.RUN_PC[0].R = 0x000000FE;   /* gate off clock for all RUN modes */
  MC_ME.RUN_PC[1].R = 0x000000FE;   /* config. peri clock for all RUN modes */  
	MC_ME.RUN_PC[2].R = 0x000000FE;     /* Peripheral ON in every mode */
	MC_ME.RUN_PC[3].R = 0x000000FE;     /* Peripheral ON in every mode */
	MC_ME.RUN_PC[4].R = 0x000000FE;     /* Peripheral ON in every mode */
	MC_ME.RUN_PC[5].R = 0x000000FE;     /* Peripheral ON in every mode */
	MC_ME.RUN_PC[6].R = 0x000000FE;     /* Peripheral ON in every mode */
	MC_ME.RUN_PC[7].R = 0x000000FE;     /* Peripheral ON in every mode */
  MC_ME.LP_PC[0].R = 0x00002400;   /* gate off clock for all RUN modes */
  MC_ME.LP_PC[1].R = 0x00002400;   /* config. peri clock for all RUN modes */  
	MC_ME.LP_PC[2].R = 0x00002400;     /* Peripheral ON in every mode */
	MC_ME.LP_PC[3].R = 0x00002400;     /* Peripheral ON in every mode */
	MC_ME.LP_PC[4].R = 0x00002400;     /* Peripheral ON in every mode */
	MC_ME.LP_PC[5].R = 0x00002400;     /* Peripheral ON in every mode */
	MC_ME.LP_PC[6].R = 0x00002400;     /* Peripheral ON in every mode */
	MC_ME.LP_PC[7].R = 0x00002400;     /* Peripheral ON in every mode */
  MC_ME.PCTL[70].B.RUN_CFG = 0x1;   /* FlexCAN 0: select peri. cfg. RUN_PC[1] */
  MC_ME.PCTL[71].B.RUN_CFG = 0x1;   /* FlexCAN 1: select peri. cfg. RUN_PC[1] */
  MC_ME.PCTL[94].B.RUN_CFG = 0x1;   /* SIUL:    select peri. cfg. RUN_PC[1] */
  MC_ME.PCTL[70].B.LP_CFG = 0x1;   /* FlexCAN 0: select peri. cfg. RUN_PC[1] */
  MC_ME.PCTL[71].B.LP_CFG = 0x1;   /* FlexCAN 1: select peri. cfg. RUN_PC[1] */
  MC_ME.PCTL[94].B.LP_CFG = 0x1;   /* SIUL:    select peri. cfg. RUN_PC[1] */

  // F160 - max 160 MHz 
  MC_CGM.SC_DC0.B.DIV = 0;          // Freq = sysclk / (0+1) = sysclk 
  MC_CGM.SC_DC0.B.DE  = 1;          // Enable divided clock   
  
  // S80 - max 80 MHz 
  MC_CGM.SC_DC1.B.DIV = 1;          // Freq = sysclk / 1+1) = sysclk/2 
  // MC_CGM.SC_DC1.B.DIV = 3;       // Freq = sysclk / 3+1) = sysclk/4  - Half Clk Speed Test
  MC_CGM.SC_DC1.B.DE  = 1;          // Enable divided clock 
  
  // FS80 - max 80 MHz 
  // MC_CGM_SC_DC1[DIV] and MC_CGM_SC_DC5[DIV] must be equal at all times 
  MC_CGM.SC_DC5.R = MC_CGM.SC_DC1.R;  // 80 MHz max 
  
  // S40 - max 40 MHz 
  MC_CGM.SC_DC2.B.DIV = 3;          // Freq = sysclk / (3+1) = sysclk/4  
  MC_CGM.SC_DC2.B.DE  = 1;          // Enable divided clock  
  MC_CGM.AC5_SC.B.SELCTL=1;         /* Select XOSC as PLL source */
  
  PLLDIG.PLLDV.B.MFD = 79;          /*  MFD=79 */ 
  PLLDIG.PLLDV.B.PREDIV = 0x02;     /*  PREDIV=2 */ 
  PLLDIG.PLLDV.B.RFDPHI = 0x01;     /*  RFDPHI=1 */ 
  PLLDIG.PLLDV.B.RFDPHI1 = 0x02;    /*  RFDPHI1=2 */ 
  PLLDIG.PLLCAL3.R = 0x00004062;    /* Set MFDEN a nonzero value (0x1 here) */
  PLLDIG.PLLFD.B.SMDEN = 1;         /* Disable sigma delta modulation */
  PLLDIG.PLLCR.R= 0x00000000;       /* Disable PLL interrupts (default) */

  MC_ME.ME.R = 0x000005FF;          /* Enable desired modes - all in this case */
  MC_ME.DRUN_MC.R = 0x00130072;     /* DRUN cfg: PLLON=FXOSCON=FIRCON=1 SYSCLK=PLL*/   
  MC_ME.STOP_MC.R = 0x00130072;     /* DRUN cfg: PLLON=FXOSCON=FIRCON=1 SYSCLK=PLL*/   
  MC_ME.MCTL.R = 0x30005AF0;        /* DRUN (3) mode entry & key */ 
  MC_ME.MCTL.R = 0x3000A50F;        /* DRUN (3) mode entry & inverted key */
  while(MC_ME.GS.B.S_MTRANS == 1)   /* Wait for mode transition complete */
     {}                             /* Note: A timer like watchdog can prevent infinite loop */
  if (MC_ME.GS.B.S_CURRENT_MODE != 3) /* Verify desired mode was entered */
     {}                             /* Note: Code to handle a different mode can prevent infinite loop */
}


void targetEnableWakeupInterrupts()
{
   STM_0.CR.B.TEN                = 0;
   STM_0.CNT.R                   = 0; 
   STM_0.CR.B.TEN                = 1; 
   STM_0.CHANNEL[0].CIR.B.CIF    = 1;
   STM_0.CHANNEL[0].CCR.B.CEN    = 1;   
   asm(" wrteei 1"); //enable external interrupts 
}


void targetDisableWakeupInterrupts()
{
  asm(" wrteei 0"); //disable external interrupts
  
  STM_0.CR.B.TEN                = 0; 
  STM_0.CHANNEL[0].CIR.B.CIF    = 1;
  STM_0.CHANNEL[0].CCR.B.CEN    = 0;   
}


void initSTM(void)
{ 
  STM_0.CR.B.TEN                = 0; 
  STM_0.CR.B.CPS                = 4; 
  STM_0.CR.B.FRZ                = 1; 
  STM_0.CR.B.CSL                = 1; 
  STM_0.CNT.R                   = 0; 
//   STM_0.CHANNEL[0].CCR.B.CEN    = 0; 
  STM_0.CHANNEL[0].CIR.B.CIF    = 1; 
  STM_0.CHANNEL[0].CMP.R        = 15000000; 
}

void initPIT(void)
{ 
  PIT.MCR.B.MDIS    = 0;  /* Enable PIT module. NOTE: PIT module must be       */
                          /* enabled BEFORE writing to it's registers.         */
                          /* Other cores will write to PIT registers so the    */
                          /* PIT is enabled here before starting other cores.  */
  PIT.MCR.B.FRZ     = 1;  /* Freeze PIT timers in debug mode */
  
             /* Initalize PIT channel 0 for desired SYSCLK counts*/
             /* timeout= 40M  PITclks x 4 sysclks/1 PITclk x 1 sec/160Msysck */ 
             /*        = 40M x 4 / 160M = 160/160 = 1 sec.  */
#define  CLOCK_COUNT  40000
  
  PIT.TIMER[0].LDVAL.R      = CLOCK_COUNT;  /* Load # Pit clocks to count */
  PIT.TIMER[0].TCTRL.B.TIE  = 0;      /* Enable interrupt */
  INTC.PSR[226].B.PRC_SELN  = 0x8;    /* IRQ sent to Core 0 */
  INTC.PSR[226].B.PRIN      = 11;     /* IRQ priority = 10 (15 = highest) */

}

void disableWatchdog()
{
}

void initINTC()
{
  INTC.IACKR[0].R = (uint32_t) &intc_sw_mode_isr_vector_table[0];
  INTC.BCR.B.HVEN0 = 0;      /* Software vector mode used for Core 0 */
  INTC.CPR[0].B.PRI = 0;     /* Lower core 0's INTC current priority to 0 */
                             /* Load address of first ISR vector in table */
  IVPR_init_core_0();        /* Initialize core's spr IVPR register */
}


void initLPM()
{  
  MC_ME.ME.R = 0x000004FD;       // Enable RUN0,RUN3, STOP, HALT, DRUN, other modes 
  
  /* Mode change Re-enter the drun mode, to start cores, clock tree & PLL1 */
	MC_ME.MCTL.R = 0x30005AF0;                                  /* Mode & Key */
	MC_ME.MCTL.R = 0x3000A50F;                         /* Mode & Key inverted */
										
	while(MC_ME.GS.B.S_MTRANS == 1);          /* Wait for mode entry complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode entered */
 
  MC_ME.DRUN_MC.R     = 0x00130070;  // DRUN cfg: 16MHIRCON=1, syclk=16 MHz FIRC
  MC_ME.RUN_MC[3].R   = 0x00130070;  // RUN3 cfg: 16MHIRCON=1, syclk=16 MHz FIRC
  MC_ME.STOP_MC.R     = 0x00130071;  // 56xxB STOP cfg: FIRCON=MVRON=1, flash LP, no sysclk  
  MC_ME.HALT_MC.R     = 0x00130071;  // 56xxB HALT0 cfg: FIRCON=MVRON=1, flash running, sysclk

  MC_ME.RUN_PC[7].R = 0x00000088;  // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.LP_PC[7].R = 0x00002400;   // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  MC_ME.PCTL[30].R = 0x3F; 	     // PIT_RTC0: select ME.RUNPC[7], ME.LPPC[7]

  while (MC_ME.GS.B.S_MTRANS) {}  // Ensure any STANDBY to DRUN mode transition completed 
  
  MC_ME.MCTL.R = 0x70005AF0;      // Enter RUN3 Mode & Key 
  MC_ME.MCTL.R = 0x7000A50F;      // Enter RUN3 Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}  // Wait for RUN3 mode transition to complete     
                               // Note: could wait here using timer and//or I_TC IRQ 
  while(MC_ME.GS.B.S_CURRENT_MODE != 7) {} // Verify RUN3 (0x7) is the current mode
  
  MC_CGM.AC6_SC.B.SELCTL = 0;
  MC_CGM.AC6_DC0.B.DE = 1;
  MC_CGM.AC6_DC0.B.DIV = 0;
  
  while(MC_CGM.AC6_SS.B.SELSTAT != 0){}   
  
 targetEnableWakeupInterrupts();
}

#define TRUE 1
#define FALSE 0

void targetEnterAndExitLowPowerMode()
{
  if(mustInitLPM)
  {
    initLPM();
    mustInitLPM = FALSE;
  }
  else
  {}
  MC_ME.IMTS.R        = 0xFC000000;
  MC_ME.IS.R          = 0xFC400000;

  if(gotoStopLowPowerMode)
  {
    enterAndExitStopMode();
  }
  else
  {}
}

void enterAndExitHaltMode()
{ 
  MC_ME.MCTL.R        = 0x80005AF0;      // Enter HALT Mode & Key 
  MC_ME.MCTL.R        = 0x8000A50F;      // Enter HALT Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}  // Wait for HALT mode transition to complete
}

void enterAndExitStopMode()
{   
  STM_0.CHANNEL[0].CIR.B.CIF    = 1; 
  STM_0.CHANNEL[1].CIR.B.CIF    = 1; 
  STM_0.CHANNEL[2].CIR.B.CIF    = 1; 
  STM_0.CR.B.TEN                = 0;
  STM_0.CNT.R                   = 0;   
  STM_0.CHANNEL[0].CMP.R        = 15000000;  
  STM_0.CR.B.TEN                = 1; 
 
  MC_ME.MCTL.R = 0xA0005AF0;      // Enter STOP Mode & Key 
  MC_ME.MCTL.R = 0xA000A50F;      // Enter STOP Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}  // Wait for STOP mode transition to complete

}

void InterruptHandler()
{  
  InterruptRoutine();
  PIT.TIMER[0].TFLG.R = 1;       
}