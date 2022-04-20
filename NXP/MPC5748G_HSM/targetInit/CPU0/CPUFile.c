#include "calypso.h"


unsigned char gotoStopLowPowerMode;  
unsigned char gotoHaltLowPowerMode;  
unsigned char mustInitLPM;

extern const uint32_t IntcIsrVectorTable[];
extern void  IVPR_init_core_0(void);
extern void  IVPR_init_core_1(void);
extern void  IVPR_init_core_2(void);
extern const vuint32_t intc_sw_mode_isr_vector_table [];


void peri_clock_gating (void);
void system160mhz(void);
void enter_STOP_mode (void);

void initVariables(void)
{                             
  gotoStopLowPowerMode = 1;  
  gotoHaltLowPowerMode = 0;
  mustInitLPM = 1;
}

void enableAllCores()
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

   MC_ME.CADDR[2].R = 0x00FB2001; // Set Start address for core 1 (Z4B). Will reset and start
   MC_ME.CADDR[3].R = 0x00FD2001; // Set Start address for core 2 (Z2). Will reset and start 
   								  // Start address for HSM detected automatically from reset vectors. Core starts immediately from reset. 
   
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


void targetDisableInterrupts()
{
  asm(" wrteei 0"); //disable external interrupts
  PIT.TIMER[0].TCTRL.B.TIE    = 0;     //stop PIT0
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

   MC_RGM.FRET.R=0;
   MC_RGM.DRET.R=0;
   MC_RGM_DES=0xFFFFFFFF;//'Destructive' Event Status Register  

   peri_clock_gating(); /* configure gating/enabling peri. clocks for modes*/
    /* configuraiton occurs after mode transition */
   system160mhz();

  // //  initClockGating();  
   initINTC();     
   initPIT();        
   initVariables();    
   enableAllCores();
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
  
  peri_clock_gating(); /* configure gating/enabling peri. clocks for modes*/
  /* configuraiton occurs after mode transition */
  system160mhz();
}


void targetEnableWakeupInterrupts()
{ 
    WKPU.WIREER.R                 = 0x00000042;
    WKPU.WIFER.R                  = 0x00000040;
    WKPU.WRER.R                   = 0x00000002;
    WKPU.WIPUER.R                 = 0x000FFFFF;
}

void interruptHandler()
{
  int dummy = INTC.IACKR[2].R; 

  InterruptRoutine();

  PIT.TIMER[0].TFLG.R         = 1;      
}


void targetDisableWakeupInterrupts()
{
  asm(" wrteei 0"); //disable external interrupts
  
  STM_0.CR.B.TEN                = 0; 
  STM_0.CHANNEL[0].CIR.B.CIF    = 1;
  STM_0.CHANNEL[0].CCR.B.CEN    = 0;   
}


void initPIT(void)
{ 
  PIT.MCR.B.MDIS    = 0;  /* Enable PIT module. NOTE: PIT module must be       */
                          /* enabled BEFORE writing to it's registers.         */
                          /* Other cores will write to PIT registers so the    */
                          /* PIT is enabled here before starting other cores.  */
  PIT.MCR.B.FRZ     = 0;  /* Freeze PIT timers in debug mode */
  
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
  SWT_0.SR.R = 0xc520;
  SWT_0.SR.R = 0xd928;
  SWT_0.CR.R = 0xFF00010A; 

  SWT_1.SR.R = 0xc520;
  SWT_1.SR.R = 0xd928;
  SWT_1.CR.R = 0xFF00010A;

  SWT_2.SR.R = 0xc520;
  SWT_2.SR.R = 0xd928;
  SWT_2.CR.R = 0xFF00010A;
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
//    targetEnableWakeupInterrupts();
}

#define TRUE 1
#define FALSE 0

void targetEnterAndExitLowPowerMode()
{
//   if(mustInitLPM)
//   {
//     initLPM();
//     mustInitLPM = FALSE;
//   }
//   else
//   {}
// //   MC_ME.IMTS.R        = 0xFC000000;
// //   MC_ME.IS.R          = 0xFC400000;

  if(gotoStopLowPowerMode)
  {
  
      /* Additional mode configurations for STOP, RUN3 modes & enter RUN3 mode: */
      MC_ME.RUN_MC[3].R       = 0x001F0090; /* mvron=1 FLAON=RUN SIRCON=1 FIRCON=1 SYSCLK=FIRC */
      MC_ME.STOP_MC.R         = 0x00130090; /* MVRON=1 FLAON=RUN SIRCON=1 FIRCON=1 sysclk=FIRC */
      MC_ME.MCTL.R            = 0x70005AF0; /* Enter RUN3 Mode & Key */
      MC_ME.MCTL.R            = 0x7000A50F; /* Enter RUN3 Mode & Inverted Key */
      while (MC_ME.GS.B.S_MTRANS) {} /* Wait for RUN3 mode transition to complete */
      /* Note: could wait here using timer and/or I_TC IRQ */
      while(MC_ME.GS.B.S_CURRENT_MODE != 7) {} /* Verify RUN3 (0x7) is the current mode */
      
      MC_ME.CCTL[2].R = 0x0000;   // disable core 1 (Z4B) in all modes
      MC_ME.CCTL[3].R = 0x0000;   // disable core 2 (Z2) in all modes 
      
      MC_ME.CADDR[2].R = 0x00FB2001; // Set Start address for core 1 (Z4B). Will reset and start
      MC_ME.CADDR[3].R = 0x00FD2001; // Set Start address for core 2 (Z2). Will reset and start 
      
      /* RE enter the drun mode, to update the configuration */
      MC_ME.MCTL.R = 0x70005AF0;                // Mode & Key 
      MC_ME.MCTL.R = 0x7000A50F;                // Mode & Key inverted 
                                          
      while(MC_ME.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
      while(MC_ME.GS.B.S_CURRENT_MODE != 0x7);  // Check DRUN mode has been entered 
      
      /* Configure Wakeup Unit for low power exit */
      WKPU.WIREER.R           = 0x00000042; /* Enable rising edge events on RTC, PE[0] */
      WKPU.WIFER.R            = 0x00000040; /* Enable analog filters - , PE[0] */    
      WKPU.WRER.R             = 0x00000002; /* Enable wakeup events for RTC, but not PE[0] */
      WKPU.WIPUER.R           = 0x000FFFFF; /* Enable WKPU pins pullups to stop leakage*/
      RTC.RTCC.R             = 0x00000000; /* Clear CNTEN to reset */
      RTC.RTCC.R             = 0x80001000; /* CLKSEL = 128KHz SIRC, FRZEN=CNTEN=1*/
      RTC.RTCVAL.R           = 230400; /* #RTC clocks. Timeout=115.2K/128KHz=0.9 sec*/
      WKPU.WISR.R            = 0x00000002; /* Clear wake up flag RTC */
      enter_STOP_mode (); /* Enter STOP mode */
      /* On STOP mode Exit, Code continues here: */
      while(MC_ME.GS.B.S_CURRENT_MODE != 7) {} /* Verify RUN3 (0x7) is current mode */
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

void PLL_160MHz(void)
{
     MC_CGM.AC5_SC.B.SELCTL=1;   /* Select XOSC as PLL source */
  
  /* Configure PLL0 for 160MHz from 40Mhx XOSC, no frequency modulation: */
  /* F pll_ref (PLL input) = FXOSC = 40MHz
     PREDIV = 1 (divide input clock by 1)
     MFD    = 16 (range 10 to 150)
     MFN = 0(default)
     MFDEN = 1 (must be > MFN)
     F vco range = 600-1200MHz (per MPC5748G Ref Man rev 1 section 26.4)
     F vco = (F pll_ref / PREDIV ) x (MFD + MFN / MFDEN) 
           = (  40 MHz  / 1      ) x (16  +  0  /  1   )
     =   640 MHz
     RFDPHI = 1 (divides Fvco by 2)
     RFDPHI1 = 2 (secondary output clock)
     F pll_phi = F vco   / 2**(RFDPHI + 1)
               = 640 MHz / 2**2 = 160 MHz
  */
  PLLDIG.PLLDV.R = 0x04011010;    /* RFDPHI1=2 RFDPHI=1 PREDIV=1 MFD=16 */ 
  PLLDIG.PLLCAL3.R = 0x00004062;  /* Set MFDEN a nonzero value (0x1 here) */
  PLLDIG.PLLFD.B.SMDEN = 1;       /* Disable sigma delta modulation */
  PLLDIG.PLLCR.R= 0x00000000;     /* Disable PLL interrupts (default) */

  MC_ME.ME.R = 0x000005FF;      /* Enable desired modes - all in this case */
  MC_ME.DRUN_MC.R = 0x00130072; /* DRUN cfg: MVRON=FLAON=1 PLLON=FXOSCON=FIRCON=1 SYSCLK=PLL*/   
  MC_ME.MCTL.R = 0x30005AF0;          /* DRUN (3) mode entry & key */ 
  MC_ME.MCTL.R = 0x3000A50F;          /* DRUN (3) mode entry & inverted key */
  while(MC_ME.GS.B.S_MTRANS == 1){  /* Wait for mode transition complete */
  }   /* Note: A timer like watchdog can prevent infinite loop */
  if (MC_ME.GS.B.S_CURRENT_MODE != 3){ /* Verify desired mode was entered */
  }   /* Note: Code to handle a different mode can prevent infinite loop */
}

void system160mhz(void)
{
   /* RM, 202, 9.4 Peripheral clock generation
      RM, 217, 9.7 System Clock Distribution
     
      Module                  | HCLK | Peripheral CLK | BIU (Bus interface unit) CLK | Memory CLK | BAUD_CLK/Auxiliary CLK
      LINFlex_1 to LINFlex_17     -         F40                     -                       -               F80
      LINFlex_0                   -         F20                     -                       -               F40
      DSPI_2, DSPI_3              -         S40                     S40                     -               F80
      DSPI_0, DSPI_1              -         S40                     S40                     -               F40
      SPI_1, SPI_2                -         S40                     S40                     -               F80
      SPI_0                       -         S40                     S40                     -               F40
      FlexCAN                     -         FS80                    FS80                    FS80            Refer module clock diagram for details
      SIUL                        -         F40                     F40                     -               -
      
      Also check
      RM, 1240, 38.4.8.1 Example 1: Minimal Code to Bring Up a PLL
  */

  // F160 - max 160 MHz, configured to 160 MHz 
  MC_CGM.SC_DC0.B.DIV = 0;  // Freq = sysclk / (0+1) = sysclk 
  MC_CGM.SC_DC0.B.DE  = 1;  // Enable divided clock   
  
  // S80 - max 80 MHz, configured to 80 MHz 
  // MC_CGM_SC_DC1[DIV] and MC_CGM_SC_DC5[DIV] must be equal at all times 
  MC_CGM.SC_DC1.B.DIV = 1;  // Freq = sysclk / (2+1) = sysclk/2 
  MC_CGM.SC_DC1.B.DE  = 1;  // Enable divided clock 
  
  // FS80 - max 80 MHz, configured to 80 MHz 
  // MC_CGM_SC_DC1[DIV] and MC_CGM_SC_DC5[DIV] must be equal at all times 
  MC_CGM.SC_DC5.R = MC_CGM.SC_DC1.R;  // 80 MHz max 
  
  // S40 - max 40 MHz, configured to 40 MHz 
  MC_CGM.SC_DC2.B.DIV = 3;  // Freq = sysclk / (3+1) = sysclk/4  
  MC_CGM.SC_DC2.B.DE  = 1;  // Enable divided clock  
  
  PLL_160MHz();
}

void enter_STOP_mode (void) {
    MC_ME.MCTL.R            = 0xA0005AF0;       /* Enter STOP mode and key */
    MC_ME.MCTL.R            = 0xA000A50F;       /* Enter STOP mode and inverted key */
    while (MC_ME.GS.B.S_MTRANS) {}              /* Wait for STOP mode transition to complete */

    while(MC_ME.GS.B.S_CURRENT_MODE != 7) {} /* Verify RUN3 (0x7) is current mode */
    
}

/*****************************************************************************/
/* peri_clock_gating */
/* Description: Configures enabling clocks to peri modules or gating them off*/
/* Default PCTL[RUN_CFG]=0, so by default RUN_PC[0] is selected.*/
/* RUN_PC[0] is configured here to gate off all clocks. */
/*****************************************************************************/
void peri_clock_gating (void) {
    MC_ME.RUN_PC[0].R       = 0x00000000; /* gate off clock for all RUN modes */
    MC_ME.RUN_PC[1].R       = 0x000000FE; /* config. peri clock for all RUN modes */
    MC_ME.RUN_PC[7].R       = 0x00000088; /* Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes */
    MC_ME.LP_PC[7].R        = 0x00000400; /* LP Peri. Cfg. 7 settings: run in STOP */
    MC_ME.PCTL[91].B.RUN_CFG    = 0x1; /* PIT: select peri. cfg. RUN_PC[1] */    
    MC_ME.PCTL[93].B.RUN_CFG    = 0x3F; /* WKPU: select peri. cfg. RUN_PC[7], LP_PC[7] */
    MC_ME.PCTL[102].B.RUN_CFG   = 0x3F; /* RTC-API: select peri. cfg. RUN_PC[7], LP_PC[7] */
}    
 

void targetSelfReset(void)
{
  targetDisableInterrupts();
  
  SIUL2.GPDO[104].B.PDO_4n  = 0;			  /* Inialize LOW */
}
