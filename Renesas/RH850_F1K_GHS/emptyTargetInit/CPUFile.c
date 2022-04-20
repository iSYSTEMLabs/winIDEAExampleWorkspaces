#include "rh850.h"


void InterruptRoutine(void);


/*
  Clock is running on 80 MHz   
*/
void CPU_Init(void)
{
  while (CLKCTLROSCS != 0x07)	// High speed int OSC not running?
  {
    protected_write(PROTCMD0, CLKCTLROSCE, 0x01);
  }

  // stop main osc in standby (this is the default value, but anyway...)
  MOSCSTPM = 0x02;
  // stop int. 8MHz osc in standby (this is the default value, but anyway...)
  ROSCSTPM = 0x02;			// stop in standby

  // Prepare MainOsc 
  MOSCC = 0x02;                  // Set MainOSC gain for 16MHz 
  MOSCST = 0x0000FFFF; 	        // Set MainOSC stabilization time to 4 ms
  protected_write1(PROTCMD0, PROTS0, MOSCE, 0x01);  // Trigger MainOsc start (protected write) 
  while ((MOSCS & 0x04) != 0x4); // Wait for active MainOSC 

  // Prepare PLL                 
  PLLC = 0x00010B28;               // 16 MHz MainOSC setting
  protected_write1(PROTCMD1, PROTS1, PLLE, 0x01);   // enable PLL 
  while ((PLLS & 0x04) != 0x04); //Wait for active PLL
  
  // CPLLOUT = VCOOUT * 1/4 = 120 MHz (for Premium Device)
  protected_write1(PROTCMD1, PROTS1, CKSC_CPUCLKD_CTL, 0x11);
  while (CKSC_CPUCLKD_ACT != 0x11);
  
  // PLL -> CPU Clock 
  protected_write1(PROTCMD1, PROTS1, CKSC_CPUCLKS_CTL, 0x03);
  while (CKSC_CPUCLKS_ACT != 0x03);
  
  // PPLLOUT -> PPLLCLK (Set Peripheral Clock to PLL)
  protected_write1(PROTCMD1, PROTS1, CKSC_PPLLCLKS_CTL, 0x03);
  while (CKSC_PPLLCLKS_ACT != 0x03);     
  
  //IO Setup
  PM10 = 0x0;
  P10 = 0x0;
}

void InitOSTM()
{
  /* Start OS Timer */
  OSTM0CMP=0x0000A040;                          
  OSTM0CTL=0x1;           // select interrupt mode
  ICOSTM0=0x0;     // disable interrupt masking
}

__interrupt void TimerInterruptHandler(void)
{
  #pragma ghs interrupt
  __DI();
  InterruptRoutine();
  __EI();
}

void targetEnableInterrupts(void)
{
  OSTM0TS=0x1;            // start trigger
  __EI();
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  InitOSTM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
