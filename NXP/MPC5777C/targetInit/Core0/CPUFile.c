#include "MPC5777C.h"
#include "typedefs.h"

extern uint32_t ISRVectorTable;


/*
  Set second core start address, there is flash (approx. 8M) on 0x940000
  and up for this.
*/
void enableSecondCore(){          
  SIU_RSTVEC1 = 0x940000;
}


/*
  Initialize PIT timer to generate interrupt every 1 ms
*/
void initTimer(){
  PIT_MCR = 0x0;
  PIT_LDVAL0 = 0x7530;                   
}
/*
  Call asm interrupt setup function.
  Set IACKR so that upper 16b are the same as upper 16b of start of interrupt vector.
  Set priorties of MCU and PIT interrupt (id 301).
*/
void initInterrupts(){
  e200zX_Interrupt_Setup();                       
  INTC_IACKR_PRC0 = (0x1 << 16);
  INTC_PSR301 &= ~(0x3 << INTC_PSR301_PRC_SEL);
  INTC_PSR301 |= (0xE << INTC_PSR301_PRI); 
  PIT_TCTRL0 |= (0x1 << PIT_TCTRL0_TIE); 
  INTC_CPR_PRC0 &= ~(0xF << INTC_CPR_PRC0_PRI);  
}

/*
  Enable timer and interrupts, clear timer interrupt flag.
*/
void targetEnableInterrupts(){ 
  PIT_TCTRL0 |= (0x1 << PIT_TCTRL0_TEN);
  PIT_TFLG0 |= (0x1 << PIT_TFLG0_TIF);
  asm("wrteei 1");
}


/*
  Since there is no externall osc. on board 416DS (from rev. X3 up), PLL is
  initialized from internal 16 MHz osc. System clock: 246 MHz (max 264 MHz).
*/
void initClock(){
  SIU_SYSDIV |= (0x1 << SIU_SYSDIV_PLL0SEL);
  PLLDIG_PLL0DV = 0x00000000;
  PLLDIG_PLL0DV |= (0xD << PLLDIG_PLL0DV_RFDPHI1);
  PLLDIG_PLL0DV |= (0x1 << PLLDIG_PLL0DV_RFDPHI);
  PLLDIG_PLL0DV |= (0x1 << PLLDIG_PLL0DV_PREDIV);
  PLLDIG_PLL0DV |= (0x19 << PLLDIG_PLL0DV_MFD);
  PLLDIG_PLL0CR |= (0x3 << PLLDIG_PLL0CR_CLKCFG);
  while(!(PLLDIG_PLL0SR & (1 << PLLDIG_PLL0SR_LOCK)));
  
  
  SIU_SYSDIV |= (0x1 << SIU_SYSDIV_PLL1SEL);
  PLLDIG_PLL1DV = 0x00000000;                    
  PLLDIG_PLL1DV |= (0x1 << PLLDIG_PLL1DV_RFDPHI);
  PLLDIG_PLL1DV |= (0x10 << PLLDIG_PLL1DV_MFD);  
  PLLDIG_PLL1CR |= (0x3 << PLLDIG_PLL1CR_CLKCFG);
  while(!(PLLDIG_PLL1SR & (1 << PLLDIG_PLL1SR_LOCK)));
  
  SIU_SYSDIV = 0x00000000;                 
  SIU_PSCLKCFG |= (0xC7 << SIU_PSCLKCFG_PSDIV1M);
  
  SIU_SYSDIV |= (0x1 << SIU_SYSDIV_PERCLKSEL);
  SIU_SYSDIV |= (0x1 << SIU_SYSDIV_MCANSEL);
  SIU_SYSDIV |= (0x1 << SIU_SYSDIV_FMPERDIV);
  SIU_SYSDIV |= (0x4 << SIU_SYSDIV_SYSCLKDIV);
  SIU_ECCR |= (0x1 << SIU_ECCR_EBDF);
  
  SIU_SYSDIV |= (0x2 << SIU_SYSDIV_SYSCLKSEL);
}

void targetInit(){
  #ifndef EMPTY_TARGET_INIT

  initClock();
  enableSecondCore();
  initTimer();   
  initInterrupts();   
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}             


/*
  Interrupt handlers   
*/
void TimerInterruptHandlerC(){
  InterruptRoutine();
  PIT_TFLG0 |= (0x1 << PIT_TFLG0_TIF);
}

void IntDefaultHandler(){
  while(1);
}

void disableWatchdog()
{
}
