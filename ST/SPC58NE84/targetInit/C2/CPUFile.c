#include "SPC5884.h"    
#include "eiger.h"

void initGPIO(void);
void initPIT(void);
void initLowPowTimer(void);
void initINTC(void);

void toggleGPIOPort1(void);
void restartRtiTimer(void);

#define SWT2_SR 0xF4058010
#define SWT2_CR 0xF4058000         

unsigned char GpioOffOn  = 0;
unsigned char GpioOffOn1 = 0;
unsigned char gotoStopLowPowerMode;  
unsigned char gotoHaltLowPowerMode;  
unsigned char mustInitLPM;


void MC_MODE_INIT(void)
{
  /*! Clear faults | MC_RGM.DES, MC_RGM.FES, and MC_ME.ME */
  MC_RGM.DES.R 	      = 0x0380C73B;
  MC_RGM.FES.R 	      = 0x0380046F;
  MC_RGM.FRET.R 	    = 0x00;           // Functional Reset Escalation Reg cleared
  MC_RGM.DRET.R 	    = 0x00;           // Destructive Reset Escalation Reg cleared

  
  MC_ME.ME.R 	        = 0x0000FFFF;     // TEST, SAFE, DRUN; RUN0-RUN3, HALT, STOP
  
  /*! Add MC_ME.PCTL[x].R initializations here */  
  /*! Set RUN Configuration Registers | MC_ME.RUN_PC[n] */                     
  MC_ME.RUN_PCN[0].R  = 0x000000FE;      /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[1].R  = 0x000000FE;      /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[2].R  = 0x000000FE;      /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[3].R  = 0x000000FE;      /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[4].R  = 0x000000FE;      /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[5].R  = 0x000000FE;      /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[6].R  = 0x000000FE;      /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[7].R  = 0x000000FE;      /* Peripheral ON in every mode  */
  MC_ME.LP_PCN[0].R   = 0xFFFFFFFF;      /* Peripheral ON in every mode  */
	
	/* Turn On XOSC - PLL's remain off */
  MC_ME.DRUN_MC.R     = 0x00130030; 		 /* Enable the XOSC */
  
  MC_CGM.AC3_SC.B.SELCTL=1;         
  MC_CGM.AC4_SC.B.SELCTL=1;  
	
  /* Force transition mode */
  MC_ME.MCTL.R        = 0x30005AF0;      // DRUN Mode & Key
  MC_ME.MCTL.R        = 0x3000A50F;      // DRUN Mode & Key
  while(MC_ME.GS.B.S_MTRANS);            // Waiting for end of transaction
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3); // ME_GS Check DRUN mode has successfully been entered

  // XOSC = 40MHZ
  /* Configure PLL0 Dividers - PHI:160MHz PHI1:200MHz from 40Mhx XOSC - VCO:800MHz */
  /* Configure PLL0 Dividers - PHI:160MHz PHI1:160MHz from 16MHz IRC - VCO:800MHz */
  PLLDIG.PLL0DV.B.RFDPHI1 = 3;
  //PLLDIG.PLL0DV.B.RFDPHI1 = 12; //in order to have: fPLL0_PHI1 = (fpll0_ref * 2 * MFD) / (PREDIV * RFDPHI1 * 2) = 16 * 2 * 30 / 1 * 12 * 2 = 40MHz
  PLLDIG.PLL0DV.B.RFDPHI  = 3;
  PLLDIG.PLL0DV.B.PREDIV  = 1;   
  PLLDIG.PLL0DV.B.MFD     = 12;   //for XOSC
  //PLLDIG.PLL0DV.B.MFD = 30;     //for FIRC=16MHz   
//! fPLL0_VCO = (fpll0_ref * 2 * MFD) / PREDIV
//! fPLL0_VCO = (40 MHz * 2 * 12) / 1
//! fPLL0_VCO = (960 MHz/1 )
//! fPLL0_VCO =  960 MHz    Max VCO for Eiger PLL0 is 1400MHz
//! fPLL0_PHI = (fpll0_ref * 2 * MFD) / (PREDIV * RFDPHI * 2)
//! fPLL0_PHI = (40 MHz * 2 * 12) / (1 * 3 * 2)
//! fPLL0_PHI = (960MHz /6)
//! fPLL0_PHI = 160 MHz
//! fPLL0_PHI1 = (fpll0_ref * 2 * MFD) / (PREDIV * RFDPHI1 * 2)
/*Put PLL0 into Normal mode*/
  PLLDIG.PLL0CR.B.CLKCFG  = 3;
/* Configure PLL1 Dividers - 200MHz Out from 40Mhz XOSC - VCO:800MHz - No FM*/
//! fPLL1_VCO = (fpll1_ref * MFD) 
//! fPLL1_VCO = (40 MHz * 20) 
//! fPLL1_VCO =  800 MHz (Max VCO for Eiger PLL1 is 1400MHz)
//! fPLL1_PHI = (fpll1_ref * MFD) http://www.rtvslo.si/slovenija/brezposelnost-se-naprej-upada-vendar-se-povecuje-delez-zensk/371184/ (RFDPHI * 2)
//! fPLL1_PHI = (40 MHz * 20) / (2 * 2)
//! fPLL1_PHI =  200 MHz
  PLLDIG.PLL1DV.B.RFDPHI  = 2;   
  //PLLDIG.PLL1DV.B.MFD = 5;      //for PH1=160MHz
  PLLDIG.PLL1DV.B.MFD     = 18;   //for PH1=40MHz, in order to have: fPLL1_PHI = (fpll1_ref * MFD) / (RFDPHI * 2) = 40 * 18 / 2 * 2 = 180MHz
  PLLDIG.PLL1FD.R=0;
 /*Put PLL1 into Normal mode*/
  PLLDIG.PLL1CR.B.CLKCFG  = 3;     

  MC_ME.DRUN_MC.R         = 0x001300F4;    /* Enable XOSC and PLLs - PLL1 is sysclk */ //200Mhz
  MC_ME.RUN0_MC.R         = 0x001300F4;    /* Enable XOSC and PLLs - PLL1 is sysclk */ //200Mhz
  MC_ME.RUN1_MC.R         = 0x001300F4;    /* Enable XOSC and PLLs - PLL1 is sysclk */ //200Mhz
  MC_ME.RUN2_MC.R         = 0x001300F4;    /* Enable XOSC and PLLs - PLL1 is sysclk */ //200Mhz
  MC_ME.RUN3_MC.R         = 0x001300F4;    /* Enable XOSC and PLLs - PLL1 is sysclk */ //200Mhz

 /*! Execute mode change: Re-enter the DRUN mode to start cores, clock tree dividers, PCS, and PLL1 */
  MC_ME.MCTL.R            = 0x30005AF0;    /*! Write Mode and Key | MC_ME.MCTL */
  MC_ME.MCTL.R            = 0x3000A50F;    /*! Write Mode and Key inverted | MC_ME.MCTL */
  while(MC_ME.GS.B.S_MTRANS == 1);         /*! Wait for mode entry complete | MC_ME.GS[S_MTRANS] */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3); /*! Check DRUN mode entered |MC_ME.GS[S_CURRENT_MODE] */         
}

void MC_RUN_CORES(void){
  MC_ME.CCTL0.R    = 0x00FE;             // Enable core 2(IOP)
  MC_ME.CCTL1.R    = 0x00FE;             // enable core 0 in all modes 
  MC_ME.CCTL2.R    = 0x00FE;             // enable lock step core 
  MC_ME.CCTL3.R    = 0x00FE;             // enable core 1 in all modes 
  MC_ME.CCTL4.R    = 0x00FE;             // Enable HSM cores in all modes
   
  MC_ME.CADDR1.R   = 0x01002001;         // Set Start address for core 0: Will reset and start
  MC_ME.CADDR3.R   = 0x01022001;         // Set Start address for core 1: Will reset and start 
  //MC_ME.CADDR4.R   = 0x00622001;         // Set Start address for HSM core: Will reset and start
  MC_ME.CADDR4.R   = 0x01042001;
  
  /* RE enter the drun mode, to update the configuration */
  MC_ME.MCTL.R = 0x30005AF0;                       /* Mode & Key */
  MC_ME.MCTL.R = 0x3000A50F;                /* Mode & Key inverted */
                                        
  while(MC_ME.GS.B.S_MTRANS == 1);               /* Wait for mode entry to complete */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode has been entered */
    
}

void MC_STOP_CORE(void)
{
   MC_ME.CCTL4.R = 0x000;                 // disable HSM cores in all modes
   /* RE enter the drun mode, to update the configuration */
   MC_ME.MCTL.R = 0x30005AF0;             /* Mode & Key */
   MC_ME.MCTL.R = 0x3000A50F;             /* Mode & Key inverted */
                                        
   while(MC_ME.GS.B.S_MTRANS == 1);       /* Wait for mode entry to complete */
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3); /* Check DRUN mode has been entered */
}

/******************** Configure the Mode and Clock Tree **********************/

void initVariables(void)
{                             
  gotoStopLowPowerMode = 0;  
  gotoHaltLowPowerMode = 0;
  mustInitLPM          = 1;
}


void targetInit()
{   
  MC_MODE_INIT();   //on max CPU clock OCTB timestamp messages sometimes aren't generated.
  MC_RUN_CORES();
  initGPIO();
  initINTC();
  initPIT();
  initLowPowTimer();
  initVariables();                    
  initLPM(); 
  targetEnableInterrupts();
  
}

void initGPIO(void)                   /* PA[0] and PA[1] Ports  */
{
   SIUL2.MSCR_ION[0].B.OERC   = 0x1;  // Output medium strenght 
   SIUL2.MSCR_ION[0].B.ODC    = 0x02; // Push-Pull 
   SIUL2.MSCR_ION[0].B.IBE    = 0x0;  // disable input buffer
   SIUL2.MSCR_ION[0].B.SMC    = 0x1;  // enable 
   SIUL2.GPDON[0].B.PDO       = 0x0;  // PA0 off
   
   SIUL2.MSCR_ION[1].B.OERC   = 0x1;  // Output medium strenght 
   SIUL2.MSCR_ION[1].B.ODC    = 0x02; // Push-Pull 
   SIUL2.MSCR_ION[1].B.IBE    = 0x0;  // disable input buffer
   SIUL2.GPDON[1].B.PDO       = 0x0;  // PA1 off
}

void targetEnableInterrupts()
{
   INTC_1.CPRN[1].B.PRI        = 0;   // lower current INTC priority 
   PIT_0.SUB0[0].TCTRLN.B.TEN  = 0;   // stop PIT
   PIT_0.SUB0[0].TFLGN.B.TIF   = 1;   // clear interrupt flag
   PIT_0.SUB0[0].TCTRLN.B.TIE  = 1;   // enable PIT0 interrupt   
   PIT_0.SUB0[0].TCTRLN.B.TEN  = 1;   // start PIT
   asm(" wrteei 1");                  //enable external interrupts
   
}

void targetEnableWakeupInterrupts(void)
{
   PIT_0.RTI_TCTRL.B.TEN       = 0;    
   PIT_0.RTI_TFLG.B.TIF        = 1;    
   PIT_0.RTI_TCTRL.B.TIE       = 1;
   
   asm(" wrteei 1");                  //enable external interrupts 
}

void targetDisableWakeupInterrupts(void)
{
  asm(" wrteei 0");                   //disable external interrupts
  PIT_0.RTI_TCTRL.B.TEN        = 0;    
  PIT_0.RTI_TFLG.B.TIF         = 0;    
  PIT_0.RTI_TCTRL.B.TIE        = 0;  
}

void initLowPowTimer(void)
{ 
  RTC_API.RTCSUPV.B.SUPV       = 0; 
  RTC_API.RTCC.B.CNTEN         = 0;
  RTC_API.RTCC.R               = 0x7000C000;
  RTC_API.RTC_APIVAL.R         = 0xF000;
  RTC_API.RTC_VAL.R            = 0xF0F0;
  RTC_API.RTCC.B.RTCVAL        = 0x0FFF;
  RTC_API.RTCC.B.APIVAL        = 0x02FF; 

  PIT_0.RTI_TCTRL.B.TEN        = 0;  
  PIT_0.RTI_TCTRL.B.TIE        = 0;  
  
  PIT_0.MCR.B.MDIS_RTI         = 0;        // enable PIT
  PIT_0.MCR.B.FRZ              = 1;        // freeze in debug mode
  PIT_0.RTI_LDVAL.R            = 0x00800000;
  PIT_0.RTI_TFLG.B.TIF         = 1;
  PIT_0.RTI_TCTRL.R            = 0x00000001;
}

void enableSecondCore(void)
{
}

void RtiInterruptRoutine(void){
  PIT_0.RTI_TCTRL.B.TEN   = 0;    
  PIT_0.RTI_TFLG.B.TIF    = 1;    
  PIT_0.RTI_TCTRL.B.TIE   = 1;
  PIT_0.RTI_TCTRL.B.TEN   = 1;  
}  
  
void restartRtiTimer(void){
  PIT_0.RTI_TCTRL.B.TEN   = 0;    
  PIT_0.RTI_TFLG.B.TIF    = 1;    
  PIT_0.RTI_TCTRL.B.TEN   = 1;  
}  
  
   
  //rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.00, maxDeltaPeriodPct=5
  //rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=50000, maxDeltaPeriodInPercents=5

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

void GPIOPinToggle(void)
{
  GpioOffOn = !GpioOffOn; 
  if (GpioOffOn)
  { 
    SIUL2.GPDON[0].B.PDO = 0x1;         // set PA[0], BGA292 A17, LQFP176 137, motherboard PA0
  }
  else
  {
    SIUL2.GPDON[0].B.PDO = 0x0;         // clear PA[0]  
  }
}

void toggleGPIOPort1(void)
{
  GpioOffOn1 = !GpioOffOn1; 
  if (GpioOffOn1)
  { 
    SIUL2.GPDON[1].B.PDO = 0x1;         // set PA[0], BGA292 A17, LQFP176 137, motherboard PA0
  }
  else
  {
    SIUL2.GPDON[1].B.PDO = 0x0;         // clear PA[0]  
  }
}

#define TRUE 1
#define FALSE 0

void targetEnterAndExitLowPowerMode(void)
{   
  if(mustInitLPM){

    initLPM();
    mustInitLPM = FALSE;
  }
  else
  {}
  MC_ME.IMTS.R            = 0xFC000000;
  MC_ME.IS.R              = 0xFC400000;
  RTC_API.RTCC.B.CNTEN    = 1; 
  restartRtiTimer();
  

  if(gotoHaltLowPowerMode)
  {
    GPIOPinToggle();
    enterAndExitHaltMode();
    GPIOPinToggle();
  } 

  restartRtiTimer();
  if(gotoStopLowPowerMode)
  {
    toggleGPIOPort1();
    enterAndExitStopMode();
    toggleGPIOPort1();
  }
  else
  {}  
}  
  
void enterAndExitHaltMode(void)
{ 
  MC_ME.MCTL.R                = 0x80005AF0; // Enter HALT Mode & Key  
  MC_ME.MCTL.R                = 0x8000A50F; // Enter HALT Mode & Inverted Key   
  while(MC_ME.GS.B.S_MTRANS == 1) {}        // Wait for HALT mode transition to complete
}

void enterAndExitStopMode()
{                          
  MC_ME.MCTL.R                = 0xA0005AF0; // Enter STOP Mode & Key 
  MC_ME.MCTL.R                = 0xA000A50F; // Enter STOP Mode & Inverted Key   
  while(MC_ME.GS.B.S_MTRANS == 1) {}        // Wait for STOP mode transition to complete 
}


void initLPM(void)
{  
  MC_ME.ME.R              = 0x000005FD;       // Enable RUN0,RUN3, STOP, HALT, DRUN, other modes  
  /* Mode change Re-enter the drun mode, to start cores, clock tree & PLL1 */
	MC_ME.MCTL.R            = 0x30005AF0;       /* Mode & Key */
	MC_ME.MCTL.R            = 0x3000A50F;       /* Mode & Key inverted */										
	while(MC_ME.GS.B.S_MTRANS == 1);            /* Wait for mode entry complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);    /* Check DRUN mode entered */
  MC_ME.DRUN_MC.R         = 0x30130071;       // DRUN cfg: 16MHIRCON=1, syclk=16 MHz FIRC
  MC_ME.RUN3_MC.R         = 0x30130071;       // RUN3 cfg: 16MHIRCON=1, syclk=16 MHz FIRC
  MC_ME.STOP0_MC.R        = 0x10130070;       // STOP cfg: FIRCON=MVRON=1, flash LP, no sysclk  
  MC_ME.HALT0_MC.R        = 0x10130070;       // HALT cfg: FIRCON=MVRON=1, flash running, sysclk
  MC_ME.RUN_PCN[0].R      = 0x000000FF;       // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.RUN_PCN[1].R      = 0x000000FF;       // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.RUN_PCN[2].R      = 0x000000FF;       // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.RUN_PCN[3].R      = 0x000000FF;       // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.RUN_PCN[4].R      = 0x000000FF;       // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.RUN_PCN[5].R      = 0x000000FF;       // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.RUN_PCN[6].R      = 0x000000FF;       // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.RUN_PCN[7].R      = 0x000000FF;       // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.LP_PCN[0].R       = 0x00002500;       // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  MC_ME.LP_PCN[1].R       = 0x00002500;       // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  MC_ME.LP_PCN[2].R       = 0x00002500;       // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  MC_ME.LP_PCN[3].R       = 0x00002500;       // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  MC_ME.LP_PCN[4].R       = 0x00002500;       // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  MC_ME.LP_PCN[5].R       = 0x00002500;       // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  MC_ME.LP_PCN[6].R       = 0x00002500;       // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  MC_ME.LP_PCN[7].R       = 0x00002500;       // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  MC_ME.PCTL30.R          = 0x7f; 	          // PIT_RTC0: select ME.RUNPC[7], ME.LPPC[7]
  MC_ME.MCTL.R            = 0x70005AF0;       // Enter RUN3 Mode & Key 
  MC_ME.MCTL.R            = 0x7000A50F;       // Enter RUN3 Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}              // Wait for RUN3 mode transition to complete     
                                              // Note: could wait here using timer and//or I_TC IRQ 
  while(MC_ME.GS.B.S_CURRENT_MODE != 7) {}    // Verify RUN3 (0x7) is the current mode 
  MC_CGM.AC6_SC.B.SELCTL    = 0;
  MC_CGM.AC6_SS.B.SELSTAT   = 0;
  MC_CGM.AC6_DC0.B.DE       = 1;
  MC_CGM.AC6_DC0.B.DIV      = 1;  

  MC_CGM.AC9_SC.B.SELCTL    = 0; 
  MC_CGM.AC9_SS.B.SELSTAT   = 0; 
  MC_CGM.AC9_DC0.B.DE       = 1; 
  MC_CGM.AC9_DC0.B.DIV      = 1; 
  MC_CGM.AC12_SC.B.SELCTL   = 0; 
  MC_CGM.AC12_DC0.B.DE      = 0; 
  MC_CGM.AC12_DC0.B.DIV     = 0; 
  while(MC_CGM.AC6_SS.B.SELSTAT != 0){}    
  targetEnableWakeupInterrupts();
}

void disableWatchdog()
{  
}

void InterruptHandler()
{
  InterruptRoutine();
  PIT_0.SUB0[0].TCTRLN.B.TIE = 0;   
  PIT_0.SUB0[0].TFLGN.B.TIF  = 1; 
  PIT_0.SUB0[0].TCTRLN.B.TIE = 1;  
  targetDisableWakeupInterrupts();  
}
