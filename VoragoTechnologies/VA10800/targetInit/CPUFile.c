

/*
  Sample notes: target name, Cortex-M x, single/multi? core
  -
  -
*/

#include "__VA10800__.h"


/*
  Initialize timer:
  - timer clock source, timer frequency
*/
void initTimer(){

  // enable IRQ Selector Peripheral clock
  SYSCONFIG.PERIPHERAL_CLK_ENABLE |= 0x200000;
  // connect TIM0 interrupt signal to IRQ5 NVIC interrupt signal in IRQ Selector Peripheral (and set priority if needed)
  IRQSEL.TIM_0 = 0x5;
  // disable IRQ Selector Peripheral and enable timer TIM0 clock
  SYSCONFIG.PERIPHERAL_CLK_ENABLE &= ~(0x200000);
  SYSCONFIG.TIM_CLK_ENABLE |= 0x1;
  // set prescallers
  TIM0.RST_VALUE = 0xC350;
  // enable timer (and timer interrupts)
  TIM0.CTRL.B.ENABLE = 0x1;
  TIM0.CTRL.B.IRQ_ENB = 0x1;
}

  
/*
   Initialize clock:
   - what is source clock, crystal marking
   - final core clock, final peripheral clock, ...
*/
void initClock(){                            
  
}


void targetEnableInterrupts(){
  // no use of CMSIS
  // enable correct NVIC interrupt
  System_Control_Space_NVIC.INT_0_31_SET_EN |= 0x20;
  // use CMSIS functions
    // NVIC_EnableIRQ();
    // __enable_irq();
}


void targetInit(void)
{  
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();                                                                

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void){
} 
