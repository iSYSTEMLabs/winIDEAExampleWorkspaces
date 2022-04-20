#include "BerninaC2.h"
#include "eiger.h"
#include "Eiger_6M_header_beta5.h"

//rt FunctionMinGrossTime: toleranceInPercent = 1 
//rt FunctionMaxGrossTime: toleranceInPercent = 1
//rt FunctionMinNetTime: toleranceInPercent = 1 
//rt FunctionMaxNetTime: toleranceInPercent = 1

//rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.00, maxDeltaPeriodPct=5
//rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=50000, maxDeltaPeriodInPercents=4


void clockInit(void)
{
  MC_RGM.DES.R 	= 0xFFFF;
  MC_RGM.FES.R 	= 0xFFFF;
  MC_ME.ME.R 	= 0x000005FF;
  MC_ME.ME.R = 0x0000FFFF;
  
  /*! Set RUN Configuration Registers | MC_ME.RUN_PC[n] */
  MC_ME.RUN_PCN[0].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[1].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[2].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[3].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[4].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[5].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[6].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[7].R=0x000000FE;              /* Peripheral ON in every mode  */

  MC_ME.LP_PCN[0].R=0xFFFFFFFF;              /* Peripheral ON in every mode  */
	
  /* Route XOSC to the PLL's - IRC is default */
  MC_CGM.AC3_SC.B.SELCTL=1;                        /* Connect XOSC to PLL0 */  
  MC_ME.DRUN_MC.R = 0x00130030;                      
 
  /* Configure PLL0 Dividers - PHI:160MHz PHI1:180MHz from 16MHz IRC - VCO:800MHz */
  //PLLDIG.PLL0DV.B.RFDPHI1 = 4;
  // Measured xosc: 40 Mhz
  // pll0 will retain the same clock as xosc.
  // In order to reatain the same clock: fPLL0_PHI1 = (fpll0_ref * MFD) / (PREDIV * RFDPHI) = 4 * 1 / 1 * 4 = 40MHz
  PLLDIG.PLL0DV.B.RFDPHI = 4;
  PLLDIG.PLL0DV.B.PREDIV = 1;
   
  PLLDIG.PLL0DV.B.MFD = 4; //for XOSC

  /*Put PLL0 into Normal mode*/
  PLLDIG.PLL0CR.B.CLKCFG = 3; 
  
  MC_ME.DRUN_MC.R = 0x00130070; 			  /* Enable the XOSC and pll0 */
    
  /* Force transition mode */
  MC_ME.MCTL.R = 0x30005AF0;        		// DRUN Mode & Key
  MC_ME.MCTL.R = 0x3000A50F;        		// DRUN Mode & Key

  while(MC_ME.GS.B.S_MTRANS);                   // Waiting for end of transaction
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3); // ME_GS Check DRUN mode has successfully been entered
   
  // Wait for lock to be set on pll0 to continue.
  while(PLLDIG.PLL0SR.B.LOCK != 1)
  {}  
  
  // Connect pll1 ref. clock to pll0 clock.
  MC_CGM.AC4_SC.B.SELCTL  = 3;                        /* Connect PHI1 to PLL1 */
  
  PLLDIG.PLL1DV.B.RFDPHI  = 2;
  PLLDIG.PLL1DV.B.MFD     = 18;
  PLLDIG.PLL1FD.R         = 0;
    
 /*Put PLL1 into Normal mode*/
  PLLDIG.PLL1CR.B.CLKCFG  = 3;   

  MC_ME.DRUN_MC.R         = 0x001300F4; 
  MC_ME.RUN0_MC.R         = 0x001300F4;
  MC_ME.RUN1_MC.R         = 0x001300F4; 
  MC_ME.RUN2_MC.R         = 0x001300F4; 
  MC_ME.RUN3_MC.R         = 0x001300F4;
 /*! Execute mode change: Re-enter the DRUN mode to start cores, clock tree dividers, PCS, and PLL1 */
  MC_ME.MCTL.R = 0x30005AF0;                    /*! Write Mode and Key | MC_ME.MCTL */
  MC_ME.MCTL.R = 0x3000A50F;                    /*! Write Mode and Key inverted | MC_ME.MCTL */
  while(MC_ME.GS.B.S_MTRANS == 1);              /*! Wait for mode entry complete | MC_ME.GS[S_MTRANS] */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);      /*! Check DRUN mode entered |MC_ME.GS[S_CURRENT_MODE] */         
}

void RtiInterruptRoutine(void){
  PIT_0.RTI_TCTRL.B.TEN   = 0;    
  PIT_0.RTI_TFLG.B.TIF    = 1;    
  PIT_0.RTI_TCTRL.B.TIE   = 1;
  PIT_0.RTI_TCTRL.B.TEN   = 1;  
} 

void runSecondaryCores(void)
{

  MC_ME.CCTL0.R = 0x00FE;   // Enable core 2(IOP)
  MC_ME.CCTL1.R = 0x00FE;   // enable core 0 in all modes 
  MC_ME.CCTL3.R = 0x00FE;   // enable core 1 in all modes 
  MC_ME.CCTL4.R = 0x00FE;   // Enable HSM cores in all modes
   
  MC_ME.CADDR1.R = 0x01012001; // Set Start address for core 0: Will reset and start
  MC_ME.CADDR3.R = 0x01022001; // Set Start address for core 1: Will reset and start 
  MC_ME.CADDR4.R = 0x00622001; // Set Start address for HSM core: Will reset and start  
   
  /* RE enter the drun mode, to update the configuration */
  MC_ME.MCTL.R = 0x30005AF0;                       /* Mode & Key */
  MC_ME.MCTL.R = 0x3000A50F;                /* Mode & Key inverted */
                                        
  while(MC_ME.GS.B.S_MTRANS == 1);               /* Wait for mode entry to complete */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode has been entered */
}

void disableWatchdog()
{
  SWT2_SR = 0xc520;
  SWT2_SR = 0xd928;
  SWT2_CR = 0xFF00010A;
}

void clearResetFlags()
{
  MC_RGM.FRET.R = 0;
  MC_RGM.DRET.R = 0;
  MC_RGM.DES.R = 0xFFFFFFFF;//'Destructive' Event Status Register
}

void initPIT(void)
{
  // System Clk 200MHz, Per Clk 50 MHz
  PIT_0.MCR.B.MDIS               = 0;        // enable PIT
  PIT_0.MCR.B.FRZ                = 1;        // freeze in debug mode
  PIT_0.SUB0[0].TCTRLN.B.TEN     = 0;        // stop PIT   
//   PIT_0.SUB0[0].LDVALN.R         = 793532;    //set the counter to reach 1ms 
  PIT_0.SUB0[0].LDVALN.R         = 16000;    // 1 msec
  INTC_1.PSRN[226].B.PRC_SELN    = 0x2;      // CPU  2
  INTC_1.PSRN[226].B.PRIN        = 0x10;     // priority 10    
  PIT_0.SUB0[0].TCTRLN.B.TIE     = 0;        // disable PIT0 interrupt 
  PIT_0.SUB0[0].TFLGN.B.TIF      = 1;        // clear interrupt flag            
}

void initINTC(void)
{
   e200zX_Interrupt_Setup();                  /* Initialize core's spr IVPR register */  
   INTC_1.MPROT.B.MPROT           = 0;
   INTC_1.MPROT.B.ID              = 2;        /* CPU 2 is master */
   INTC_1.IACKRN[2].R             = (uint32_t) &intc_sw_mode_isr_vector_table[0];
   INTC_1.BCR.B.HVEN2             = 0;        /* Software vector mode used for Core 2 */
   INTC_1.CPRN[2].B.PRI           = 0;        /* Lower core 0's INTC current priority to 0 */
}



void targetInit()
{ 
  clearResetFlags();
  clockInit();  
  initINTC();
  initPIT();
  runSecondaryCores();  
}

void taretEnableInterrupts()
{
   INTC_1.CPRN[1].B.PRI        = 0;   // lower current INTC priority 
   PIT_0.SUB0[0].TCTRLN.B.TEN  = 0;   // stop PIT
   PIT_0.SUB0[0].TFLGN.B.TIF   = 1;   // clear interrupt flag
   PIT_0.SUB0[0].TCTRLN.B.TIE  = 1;   // enable PIT0 interrupt   
   PIT_0.SUB0[0].TCTRLN.B.TEN  = 1;   // start PIT
   asm(" wrteei 1");                  //enable external interrupts
}

void targetDisableInterrupts()
{
   asm(" wrteei 0");                 // disable external interrupts
   PIT_0.SUB0[0].TCTRLN.B.TEN   = 0; // stop PIT
   PIT_0.SUB0[0].TCTRLN.B.TIE   = 0; // disable PIT0 interrupt   
   PIT_0.SUB0[0].TFLGN.B.TIF    = 1; 
}


void profilerAddTestMessages(void)
{
  asm("e_li r10,2");
  asm("mtspr PID0,r10"); //rt ProfilerITMOTM: id=data1value1, symbol=OTM, value=0x02
  asm("e_li r10,3");
  asm("mtspr PID0,r10"); //rt ProfilerITMOTM: id=data1value2, symbol=OTM, value=0x03
  asm("e_li r10,4");
  asm("mtspr PID0,r10"); //rt ProfilerITMOTM: id=data1value3, symbol=OTM, value=0x04

  #define DEVENT 975
  #define DAMM 576  
  asm("e_lis r10, 0x0");    
  asm("mtspr 975,r10"); //Set DQTAG to 0
  asm("e_li r10,3");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value4, symbol=DQM(0), value=0x03
  asm("e_li r10,4");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value5, symbol=DQM(0), value=0x04
  asm("e_lis r6, 0x8765");
  asm("e_li r7, 0x4321");
  asm("se_or r6,r7");
  asm("mtspr 576,r6"); //rt ProfilerITMOTM: id=data1value6, symbol=DQM(0), value=0x87654321
  
  asm("e_lis r10, 0x1200");    
  asm("mtspr 975,r10"); //Set DQTAG to 18
  asm("e_li r10,1");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value7, symbol=DQM(18), value=0x01
  asm("e_li r10,2");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value8, symbol=DQM(18), value=0x02
  asm("e_lis r6, 0x1234");
  asm("e_li r7, 0x5678");
  asm("se_or r6,r7");
  asm("mtspr 576,r6"); //rt ProfilerITMOTM: id=data1value9, symbol=DQM(18), value=0x12345678
}

void InterruptHandler()
{
  InterruptRoutine();
  
  PIT_0.SUB0[0].TCTRLN.B.TIE = 0;   
  PIT_0.SUB0[0].TFLGN.B.TIF  = 1; 
  PIT_0.SUB0[0].TCTRLN.B.TIE = 1;
}

