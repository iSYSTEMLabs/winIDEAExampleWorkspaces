#include "KW36.h"


/*
  Sample notes: KW36, Cortex-M0+, single core
  -
*/


/*
  Initialize timer:
  - timer clock source, timer frequency
*/
void initTimer(){
    
  /* TPM counter clock -->  MCGFLLCLK */
  SIM.SIM_SOPT2.R  |=  0x01 << 24 ; 
  
  /* Enable timer0 clock SIM.SCGC6 */
  SIM.SIM_SCGC6.R  |=  0x1  << 24 ;
  
  /* 1 ms  <--> at 48 Mhz */
  //TPM0.TPM0_MOD.R = 48000;  /* TODO: This causes hard fault */
  #define TPM0_MOD_REG (*(volatile short *) 0x40038008)
  TPM0_MOD_REG = 48000  ;
  
  // set prescallers
  // enable timer interrupts
   TPM0.TPM0_SC.R  =   0x01 << 3 |   /* TPM counter increments on every TPM counter clock  */    
                       0x01 << 6 ;   /* Enable timer Interrupts */
  
  
}

  
/*
   Initialize clock:
   - what is source clock, crystal marking
   - final core clock, final peripheral clock, ...
*/
void initClock(){                            
  
  
  /*  Default mode is FEI ---> FLL Engaged Internal*/
  /*  Becuse FLL setting will be chaneged  it will be UNSTABLE,  meanwhile CPU will use internal refernce aka FBI */


  MCG.MCG_C1.R  |=  0x1 << 6 ; /* switch to internal clock */ 
  
  while ( (MCG.MCG_S.R &  (0x11 << 2 )) ==  0  );   // Wait while FLL is still used   
  
  MCG.MCG_C2.R |= 0x1 << 0 ;   /*select fast clock */
  
  /* ----------  Raise CPU clock ------------ */
  //SIM.SIM_CLKDIV1.R = 0x1 << 16 ; /*Bus clock = Main clock  / 2 */
  
  /* DRST_DRS  set to b01 to obtain 48 Mhz */
  MCG.MCG_C4.R |= 101  << 5 ;  /* DMX =1  DRST_DRS = 01 should be close to 48 Mhz */ 
  
  /* Wait for the FLL lock time to guarantee FLL is running at new C4[DRST_DRS] and C4[DMX32] programmed frequency. */
  /* tfll_acquire FLL target frequency acquisition time  1 ms */
  for(int i = 0 ; i < 25000 ; i++);
  
  /*Now FLL is stable use it as CPU clock again */
  
  MCG.MCG_C1.R  &=  ~(0x11 << 6) ; /* switch to FLL agin clock */
  
  /* check if  FLL is used agin */
  while ( (MCG.MCG_S.R & ( 0x11 << 2 ) )  > 0 ) ;
  
}


void targetEnableInterrupts(){
  // use CMSIS functions
    NVIC_EnableIRQ(TPM0_IRQn);
     __enable_irq();
}


void targetInit(void){  
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();                                                                
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
