#include "mpc5744p.h"
#include "panther.h"


unsigned char gotoStopLowPowerMode;  
unsigned char gotoHaltLowPowerMode;  

extern const uint32_t IntcIsrVectorTable[];

extern void e200zX_Interrupt_Setup(void);

void initVariables(void)
{                             
  gotoStopLowPowerMode = 0;  
  gotoHaltLowPowerMode = 0;
}

void targetEnableInterrupts()
{
   PIT_0.TIMER[0].TCTRL.B.TEN = 0; //stop PIT
   PIT_0.TIMER[0].TFLG.B.TIF = 1; // clear interrupt flag
   PIT_0.TIMER[0].TCTRL.B.TIE = 1; //enable PIT0 interrupt
   PIT_0.TIMER[0].TCTRL.B.TEN = 1; //start PIT
   asm(" wrteei 1"); //enable external interrupts
}


void targetInit()
{ 
  #ifndef EMPTY_TARGET_INIT

  MC_MODE_INIT(); //on max CPU clock OCTB timestamp messages sometimes aren't generated.
  initINTC();
  initPIT();
  initVariables();                   
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void initPIT()
{
   // System Clk 160MHz, Per Clk 40 MHz
   SSCM.ERROR.B.RAE = 1;      //Mask 1N83B Errata, access to disabled PIT causes CPU to hang, if RAE == 0. Workaround causes other issues (unaccessible registers elsewhere).
   PIT_0.MCR.B.MDIS = 0;      //enable PIT
   PIT_0.MCR.B.FRZ = 1;       // freeze in debug mode
   PIT_0.TIMER[0].TCTRL.B.TEN = 0;      //stop PIT   
   PIT_0.TIMER[0].LDVAL.R = 20000;      //set the counter to reach 1ms 
   INTC_0.PSR226_227.B.PRC_SELa =0xE;   //CPU 0,1 and 2
   INTC_0.PSR226_227.B.PRIa = 0x1;      //priority 1    
   PIT_0.TIMER[0].TCTRL.B.TIE = 0;      //disable PIT0 interrupt 
   PIT_0.TIMER[0].TFLG.B.TIF = 1;       // clear interrupt flag    
}

void disableWatchdog()
{
   SWT_0.SR.R = 0xc520;
   SWT_0.SR.R = 0xd928;
   SWT_0.CR.R = 0xFF00010A;  
}

void initINTC()
{
  INTC_0.IACKR[0].R = (uint32_t) &intc_sw_mode_isr_vector_table[0];
  INTC_0.BCR.B.HVEN0 = 0;      /* Software vector mode used for Core 0 */
  INTC_0.CPR[0].B.PRI = 0;     /* Lower core 0's INTC current priority to 0 */
                               /* Load address of first ISR vector in table */
  e200zX_Interrupt_Setup();    /* Initialize core's spr IVPR register */
}


#define TRUE 1
#define FALSE 0

void targetEnterAndExitLowPowerMode()
{
  if(gotoStopLowPowerMode)
  {
    enterAndExitStopMode();
  }
  else
  {}
  
  if(gotoHaltLowPowerMode)
  {
    enterAndExitHaltMode();
  }
  else
  {}
}

void enterAndExitHaltMode()
{ 
  MC_ME.MCTL.R = 0x80005AF0;      // Enter HALT Mode & Key 
  MC_ME.MCTL.R = 0x8000A50F;      // Enter HALT Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}  // Wait for HALT mode transition to complete
}

void enterAndExitStopMode()
{                          
  MC_ME.MCTL.R = 0xA0005AF0;      // Enter STOP Mode & Key 
  MC_ME.MCTL.R = 0xA000A50F;      // Enter STOP Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}  // Wait for STOP mode transition to complete
}

void InterruptHandler()
{
  PIT_0.TIMER[0].TCTRL.B.TIE = 0;   
  PIT_0.TIMER[0].TFLG.B.TIF = 1; 
  
  InterruptRoutine();
  
  PIT_0.TIMER[0].TFLG.B.TIF = 1; 
  PIT_0.TIMER[0].TCTRL.B.TIE = 1;  
}