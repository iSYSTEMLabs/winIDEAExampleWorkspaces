#include "dr7f701503.dvf.h"
#include "dr7f701503_irq.h"


void InterruptRoutine();

#define BIT_SET(reg, bit)    ((reg) |= (1UL << (bit)))
#define BIT_CLEAR(reg, bit)  ((reg) &= ~(1UL << (bit)))


/**************************************************************************************************
  Pins used in this project:
    - P0_1 (GPIO toggle pin (interrupt routine))
    - P1_13 (GPIO self reset pin)
**************************************************************************************************/


void CPU_Init(void)
{
  MOSCC=0x05;           // Set MainOSC gain (8MHz < MOSC frequency =< 16MHz)
  MOSCST=0xFFFF;        // Set MainOSC stabilization time to max (8,19 ms)
  PROTCMD0=0xA5;        // Trigger Enable (protected write)
  MOSCE=0x01;                                                                    
  MOSCE=(~0x01);
  MOSCE=0x01;                                                                    
  while (MOSCS != 0x7); // Wait for stable MainOSC
  
  // Prepare PLL                                                               
  PLL0C=0x00000a3b;      // 16 MHz MainOSC -> 120MHz PLL
  PROTCMD1=0xA5;        // Enable PLL (protected write)
  PLL0E=0x01;
  PLL0E=(~0x01);
  PLL0E=0x01;
  while(PLL0S!=0x07);    // Wait for stable PLL
                                                                                   
  // CPU Clock divider = 1                                                     
  PROTCMD1=0xA5;
  CKSC_CPUCLKD_CTL=0x01;
  CKSC_CPUCLKD_CTL=(~0x01);
  CKSC_CPUCLKD_CTL=0x01;
  while(CKSC_CPUCLKD_ACT!=0x01);
  
  // PLL -> CPU Clock                                                         
  PROTCMD1=0xA5; 
  CKSC_CPUCLKS_CTL=0x03;
  CKSC_CPUCLKS_CTL=(~0x03);
  CKSC_CPUCLKS_CTL=0x03;
  while(CKSC_CPUCLKS_ACT!=0x03);
  
  //IO Setup
  // P0_1 (GPIO toggle pin (interrupt routine))
  BIT_CLEAR(PIBC0, 1);   // no input buffer
  BIT_CLEAR(PBDC0, 1);   // disable bidirectional mode
  BIT_CLEAR(PM0, 1);     // set as output pin
  BIT_CLEAR(PMC0, 1);    // no alternative function

  // P1_13 (GPIO self reset pin)
  BIT_SET(P1, 13); // set pin HIGH
  BIT_CLEAR(PIBC1, 13);   // no input buffer
  BIT_CLEAR(PBDC1, 13);   // disable bidirectional mode
  BIT_CLEAR(PMC1, 13);    // no alternative function
  BIT_CLEAR(PM1, 13);     // set as output pin
  BIT_SET(P1, 13); // set pin HIGH
}

void InitOSTM()
{
  /* Start OS Timer */
  OSTM0CMP=0x0000EA00;  // load compare value
  OSTM0CTL=0x1;           // select interrupt mode
  PFSSICOSTM0=0x0;     // disable interrupt masking
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

void targetDisableInterrupts()
{
  __DI();
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  InitOSTM(); 
  PFSSG0MEV0 = 1u;  // Tell PE2 that clock/timer init is done
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void targetSelfReset(void)
{
  /*
    Stop after reset means, that (on hardware reset) we try to initialize debug session and stop the core, while we
    can't be sure where exactly it will stop, since reset pulse can occure for a very short period of time and there
    might not me enough time to create debug session properly.
    
    Latch reset help us here, extending any reset event to length we can properly init debug session. 
    
    TARGET and RESET METHOD SPECIFIC!!!     
  */
  
  // do some magic to properly reset CPU
  targetDisableInterrupts();

  BIT_CLEAR(P1, 13);
}


void disableWatchdog()
{
}
