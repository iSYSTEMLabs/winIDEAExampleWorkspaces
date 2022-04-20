#include "mpc5675K.h"


void targetEnableInterrupts()
{
  //ensure INTC's current priority is 0
  INTC_CPR_PRC0 = 0;                            
  //enable external interrupts
  asm(" wrteei 1");  
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initCPU();
  initClock();
  InitializeINTC();
  initTimer();

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void initTimer(void) 
{
  //enable PIT
  PITMCR = 0;                     
  //timeout= 45K sysclks x 1sec/45M sysclks = 1 ms
  PIT_LDVAL1 = 45000;             
  //enable PIT1 interrupt & start PIT counting
  PIT_TCTRL1 = (1<<TIE) | (1<<TEN);               
  //PIT 1 interrupt vector with priority 1
  INTC_PSR60_63 = 0x01000000;                   

}


void InitializeINTC()
{
  e200zX_Interrupt_Setup();

  //initialize INTC for software vector mode
  //use default vector table entry offsets of 4 B   
  INTC_BCR = 0;

  //set INTC ISR vector table base address; must have vectors.c file
  INTC_IACKR = (uint32_t) &ISRVectorTable[0];  
}

void initClock(void)
{
  int timer = 0;
  int cnt = 3;
  MC_ME_DRUN_MC = 0x001F0030;              // Enable XOSC in DRUN mode
  
  
  /* Trigger DRUN mode Transision */
  MC_ME_MCTL = 0x30005AF0;                 /* Mode & Key */
  MC_ME_MCTL = 0x3000A50F;                 /* Mode & Key inverted */
  while(MC_ME_GS == 1);                    /* Wait for mode entry to complete */
  while(!!(MC_ME_GS & 3<<28) != 1);        /* Check DRUN mode has been entered */
  
  /* 1. set PLL to 180 MHz with 40 MHz XOSC, set ODF=3 */
  FMPLL_CR = 0;
  FMPLL_CR |= (1<<EN_PLL_SW);              // Enable progressive clock
  FMPLL_CR |= (3<<24);                     // ODF
  FMPLL_CR |= (1<<26);                     // IDF
  FMPLL_CR |= (36<<16);                    // NDIV
  
  /* 2. Enable PLL and wait 200 us; current clock is 8 MHz, internal */
  MC_CGM_AC3_SC |= (1<<SELCTL);            // Set Auxilary Clock 3 to XOSC
  MC_CGM_OCDS_SC |= (1<<SELCTL);           // Select output clock source; select XOSC
  MC_CGM_OC_EN |= (1<<EN);                 // Enable output clock source
  MC_ME_RUN_PC0 = 0x000000F8;              // Enable peripherials in DRUN and RUN0...3 mode
  MC_ME_DRUN_MC = 0x001F0074;              // Enable PLL0 and select PLL as source in DRUN mode
  
  MC_CGM_SC_DC1 = 0x83830000;              // PERIx_CLK divider set PITtimer clock to 45 MHz (max); 180/4 = 45
  
  while(timer<1600){
    timer++;
  }
  
  /* 3. Set PLL as system clock. RE enter the drun mode, to update the configuration */
  MC_ME_MCTL = 0x30005AF0;              /* Mode & Key */
  MC_ME_MCTL = 0x3000A50F;              /* Mode & Key inverted */
  while(MC_ME_GS == 1);                 /* Wait for mode entry to complete */
  while(!!(MC_ME_GS & 3<<28) != 1);     /* Check DRUN mode has been entered */ 
  
  /* 4. Change ODF 3->2->1->0 in 10 us intervals */
  
  for(cnt=3; cnt>-1; cnt--){
    FMPLL_CR = (FMPLL_CR & ~0x03000000) | ((cnt<<24) & 0x03000000);
    timer = 0;
    while(timer<1800){
      timer++;
    }
  }
}

void initCPU()
{
  /* Disable Watchdog */
  SWT_SR=0xc520;
  SWT_SR=0xd928;
  SWT_CR=0x8000010A;

  SSCM_DPM_BOOT=0x00080000;
  SSCM_DPM_KEY=0x5AF0;
  SSCM_DPM_KEY=0xA50F; 
}


void toggleGPIO()
{
  SIUL_GPDO148_151 ^= (1<<GPIO151);     // Toggle GPIO 151    
}


void TimerInterruptHandler(void)
{
  InterruptRoutine();
  //clear PIT 1 flag by writing 1
  PIT_TFLG1 = (1<<TIF);                         
}


void disableWatchdog()
{
}
