#include "dr7f7010352afp_0.h"
#include "dr7f7010352afp_irq.h"
#include "RH850.h"


/*
I could not do 1ms toggling GIPO measurement on oscilloscope.
*/
void initClock(void)
{ 
  int i; 
  
  //detailed instructions are on page 474 of user manual 
  
  if((PLL0CLKS & 0X7) != 0){   // verify that PLL0 operation is stable
    
    //change clock source from PLL1 to PLL0
    protected_write(PROT1PHCMD, PROT1PS, CKSC0CTL, 0x23); 
    
    //wait for 160 cycles of the CPU clock -> one snooze instruction switches the CPU clock signal off for 32 clock cycles
    for(i=0; i<6; i++){
      asm("snooze");  
    }
    //making sure e that switching of a clock source for divider 0A is completed
    while((CKSC0CTL&(0x1F)) != (CKSC0ACT&(0x1F))); 
    //making sure e that switching of a clock source for divider 1A is completed
    while((CKSC1CTL&(0x1F)) != (CKSC1ACT&(0x1F)));
    
    //frequency division ratio of divider 0A is set to 1/2
    protected_write(PROT1PHCMD, PROT1PS, CLKD0DIV, 0x2);
    //frequency division ratio of divider 1A is set to 1/2
    protected_write(PROT1PHCMD, PROT1PS, CKSC1CTL, 0x22);
    
    //wait for 160 cycles of the CPU clock -> one snooze instruction switches the CPU clock signal off for 32 clock cycles
    for(i=0; i<6; i++){
      asm("snooze");  
    }
    //making sure e that switching of a clock source for divider 0A is completed
    while((CLKD0STAT&(1<<0)) != 1);
    
    //frequency division ratio of divider 0A is set to 1/1
    protected_write(PROT1PHCMD, PROT1PS, CLKD0DIV, 0x1);
    //frequency division ratio of divider 1A is set to 1/1
    protected_write(PROT1PHCMD, PROT1PS, CKSC1CTL, 0x24);
    
    //wait for 160 cycles of the CPU clock -> one snooze instruction switches the CPU clock signal off for 32 clock cycles
    for(i=0; i<6; i++){
      asm("snooze"); 
    }
    //making sure that switching of a clock source for divider 0A is completed
    while((CLKD0STAT&(1<<0)) != 1);
    
  }
  
}

void initOSTM(void)
{
  //OSTM0 is used 
  //counter clock is 40MHz CLK_LSB
  
  //Start value of the down-counter for 1ms reset @320MHz
  OSTM0CMP = 39999; 
  
  if((OSTM0TE & 1) == 0){
    //set interval timer mode (countdown) 
    OSTM0CTL |= 0x0; 
  }

  //start the coumter
  OSTM0TS |= 1; 
  
  //wait till counter is started
  while(OSTM0TE == 0); 
  
  /* OSTM0 Iterrupt channel settings */
  EIC25 &= ~(0x1 << 7)  ;      /* Enable iterrupt processing for this channel */
  EIC25 &= ~(0xF << 0)  ;      /* Priorty is 0 (highest) */
  EIC25 &= ~(0x1 << 6)  ;      /* Direct Vector Method   */
}

void targetEnableInterrupts(void)
{
  OSTM0TS=0x1;
  __EI(); 
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT


  //protective for loop 
  int i; 
  for(i = 0; i < 1000000; i++);

  initClock(); 
  initOSTM(); 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}

__interrupt void TimerInterruptHandler()
{
  #pragma ghs interrupt
  __DI();
  InterruptRoutine();
  __EI();
}