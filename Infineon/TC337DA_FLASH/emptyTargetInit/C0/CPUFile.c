#include "TriCore.h"

extern void InterruptRoutine(void);


void disableENDINIT()
{
  // disable ENDINIT
  CBS_OCNTRL = 0x000000C0;
}

/* This function disables watchdog timers that are enabled by default */
void disableWatchdog()
{
  int key;
    
  /* Disable system watchdog */
  key = SCU_WDTSCON0;
  key ^= (0x3F << SCU_WDTSCON0_PW);         /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTSCON0_LCK);        /* Clear lock bit */
  key |= (0x1 << SCU_WDTSCON0_ENDINIT);     /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTSCON0 = key;
  SCU_WDTSCON1 |= (0x1 << SCU_WDTSCON1_DR); /* Update password protected disable WDT field */
  key |= (0x1 << SCU_WDTSCON0_LCK);
  SCU_WDTSCON0 = key;
  
  /* Disable primary core watchdog, other cores watchdogs are disabled by default */
  key = SCU_WDTCPU0CON0;
  key ^= (0x3F << SCU_WDTCPU0CON0_PW);            /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTCPU0CON0_LCK);           /* Clear lock bit */
  key |= (0x1 << SCU_WDTCPU0CON0_ENDINIT);        /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTCPU0CON0 = key;
  SCU_WDTCPU0CON1 |= (0x1 << SCU_WDTCPU0CON1_DR); /* Update password protected disable WDT field */
  key |= (0x1 << SCU_WDTCPU0CON0_LCK);
  SCU_WDTCPU0CON0 = key;
}

void enableSecondaryCores()
{
  PC1 = 0xA0000800;
  CPU1_SYSCON = 0;
}

void initClock(void)
{
  //Enable external crystal oscillator (20MHz crystal)
  SCU_OSCCON &= ~(SCU_OSCCON_MODE_1 | SCU_OSCCON_MODE_0);
  
  // Set OSCVAL to 5 (OSCVAL-1 + 16MHz = 20MHz)
  SCU_OSCCON |= (SCU_OSCCON_OSCVAL_2 | SCU_OSCCON_OSCVAL_0); 
  
  // Wait for PLL valid status bits to be set
  while(!(SCU_OSCCON & (SCU_OSCCON_PLLHV | SCU_OSCCON_PLLLV)));
  
  // Select Fosc0 as PLL input clock
  SCU_SYSPLLCON0 |= SCU_SYSPLLCON0_INSEL_0;
  
  // Enable System PLL, Pdiv=0 (+1), Ndiv=29x(+1), K2div=5(+1)
  // SYSPLL fDCO = 600MHz; fPLL0 = 100MHz
  SCU_SYSPLLCON0 |= SCU_SYSPLLCON0_PLLPWD;  
  SCU_SYSPLLCON1 = 0x00000005;
  
  // Enable Peripheral PLL, Pdiv=0 (+1), Ndiv=31x(+1)
  // PERPLL fDCO = 640MHz; fPLL1 = 320MHz; fPLL2 = 200MHz
  SCU_PERPLLCON0 |= SCU_PERPLLCON0_PLLPWD; 
  
  // Wait for PLL lock to be set
  while (!(SCU_PERPLLSTAT & SCU_PERPLLSTAT_LOCK));
  while (!(SCU_SYSPLLSTAT & SCU_SYSPLLSTAT_LOCK));
  
  // Set K2div=1(+1), K3div=1(+1)
  SCU_PERPLLCON1 |= SCU_PERPLLCON1_K2DIV_0 | SCU_PERPLLCON1_K3DIV_0; 
  
  // Configure CCUCON0 and CCUCON1 to first target setting
  SCU_CCUCON0 = 0x07230113;
  SCU_CCUCON1 = 0x21210312;
  SCU_CCUCON2 = 0x07001201;
  SCU_CCUCON5 = 0x40000132;
  
  // Wait for unlock of the SCU_CCUCON0 register
  while(!(SCU_CCUCON0 & SCU_CCUCON0_LCK));  
  
  // Switch CCU Clock input clock to PLL
  SCU_CCUCON0 |= (SCU_CCUCON0_CLKSEL_0 | SCU_CCUCON0_UP);

  // Increase the system clock frequency step by step to the final target frequency
  // Increase system clock to 150MHz
  SCU_SYSPLLCON1 = 0x00000003;

  // Wait a little for supply ripple to settle
  delayLoop(LOOP_DELAY);

  // Increase system clock to 200MHz
  SCU_SYSPLLCON1 = 0x00000002;

  // Wait a little for supply ripple to settle
  delayLoop(LOOP_DELAY);

  // Final increase step, system clock frequency at maximum speed: 300MHz
  SCU_SYSPLLCON1 = 0x00000001;
  //SYSPLL fDCO = 600MHz; fPLL0 = 300MHz
  //fSTM = 100MHz; fGTM = 200MHz; fSRI = 300MHz; fSPB = 100MHz;
  //fBBB = 150MHz; fFSI = 100MHz; fFSI2 = 300MHz;
  //fGETH = 150MHz; fMCANH = 100MHz; fADAS = 300MHz;
  //fMCAN = 80MHz; fI2C = 66.6MHz; fMSC = 200MHz; fQSPI = 200MHz;
  //fASCLINF = 200MHz; fASCLINS = 80MHz; fEBU = 160MHz; fERAY = 80MHz;
  //fHSPDM_320 = 320MHz; fHSPDM_160 = 160MHz;
  //fADC = 160MHz; fHSCT = 320MHz; fRAM = 200MHz;
  //fREFCLK1 = 12.5MHz; fREFCLK2 = 6.67MHz;

  // Short delay for supply ripple to settle
  delayLoop(LOOP_DELAY);
}

void initTimer(void){
  
  // Request GPT120 module enable
  GPT120_CLC &= ~GPT120_CLC_DISR;   
  
  // Wait for module GPT120 to be enabled
  while(GPT120_CLC & GPT120_CLC_DISS);  
  
  // T4 in reload mode, provides reload value to T3
  GPT120_T4CON |= GPT120_T4CON_T4M_2;  
  
  // T4 trigger for reload: any transition of T3 toggle latch (T3OTL)
  GPT120_T4CON |= (GPT120_T4CON_T4I_2 | GPT120_T4CON_T4I_1 | GPT120_T4CON_T4I_0); 
  
  // Block Prescaler to 32x (maximum)
  // FGPT = FSPB = 100Mhz -> Timers clocked by 100Mhz / 32 = 3.125MHz
  GPT120_T3CON |= GPT120_T3CON_BPS1_1;  
  
  // 1ms = 3125 (0xC35) ticks, Reload value: 0xFFFF - 0xC35 = 0xF3CA
  // Set the reload value
  GPT120_T4 = 0xF3CA;
  GPT120_T3 = GPT120_T4;  
  
  // Set GPT120 Timer 3 interrupt (SRC )priority
  SRC_GPT120T3 |= GPT120_T3_SRC_PRIORITY;   
  
  // Start General Purpose Timer 3
  GPT120_T3CON |= GPT120_T3CON_T3R;
}


void targetEnableInterrupts(void)
{
  // GPT12 Timer 3, Service Request enable
  SRC_GPT120T3 |= SRC_GPT120T3_SRE;
  
  // Enable interrupts
  __enable();
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  disableENDINIT();
  enableSecondaryCores();

  initClock();  // Set system clock to maximum frequency (300MHz)
  initTimer();  // Set timer to generate interrupt every 1ms
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void delayLoop(unsigned int dwDelay){
  unsigned int dwCntr = 0;
  while(dwCntr++ < dwDelay);
}

void __interrupt(GPT120_T3_SRC_PRIORITY) TimerInterruptHandler(void)
{
  InterruptRoutine();
}
