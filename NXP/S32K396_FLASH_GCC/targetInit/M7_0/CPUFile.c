#include "S32K396.h"
#include "main.h"

extern void InterruptRoutine();

void disableWatchdog()
{
}


void triggerHardwareProcess()
{
  //Executes the changes made to MC_ME registers
  CTRL_KEY = 0x00005AF0;
  CTRL_KEY = 0x0000A50F;
}

void initClock()
{  
  //Enable clocks in partition 1 (needed for FXOSC and PIT 2 and potentially others)
  PRTN1_COFB0_CLKEN = MC_ME_PRTN1_COFB0_CLKEN_ALL_ON;
  PRTN1_COFB1_CLKEN = MC_ME_PRTN1_COFB1_CLKEN_ALL_ON;
  
  //Trigger hardware process
  PRTN1_PUPD = 0x01;

  //Commit transaction
  triggerHardwareProcess();
  

  //Disable osc. bypass.
  FXOSC_CTRL &= ~(0x01 << 31);
  //Enable crystal mode.
  FXOSC_CTRL |= (0x01 << 24);
  //Enable the osc.
  FXOSC_CTRL |= (0x01 << 0);
  //Wait until clock stable.
  while(!FXOSC_STAT);
    
  //Enable last mile regulator (must be enabled before PLL)
  PMC_CONFIG |= 1;   
  
  // Max freq allowed 160 MHz 
  // Disable PLL divider
  PLLODIV_0 &= ~(1 << 31);
  PLLODIV_1 &= ~(1 << 31);
  //Disabling PLL before configuration
  PLLCR |= (1 << 31);
  //Output frequency divider for raw PLL clock (sets it to 160 MHz)
  
  PLLDV = (PLLDV & ~(0x3f << 25)) | (1 << 25);            // divide by 1
  PLLDV =  (PLLDV & ~0xff) | 24;                          // multiply by 24
  
  PLLODIV_0 = (PLLODIV_0 & ~(0xff << 16)) | (2 << 16);    // divide by 3
  PLLODIV_1 = (PLLODIV_1 & ~(0xff << 16)) | (1 << 16);    // divide by 2
  
  //Enable PLL divider
  PLLODIV_0 |= (1 << 31);
  PLLODIV_1 |= (1 << 31);
  //Enable PLL back
  PLLCR = 0x00;
  //Wait until PLL lock
  while((PLLSR & (1 << 2)) == 0);
  
  //Set divider for system clock to 2
  MUX_0_DC_0.DIV = 1;
  //Set divider for medium-speed peripheral clock to 4
  MUX_0_DC_1.DIV = 3;
  //Set divider for slow-speed peripheral clock to 8
  MUX_0_DC_2.DIV = 7;
  //Set divider for trace
  MUX_11_DC_0.DIV = 3; 
  //Set divider for HSE clock
  MUX_0_DC_3.DIV = 3;
  //Set divider for DCM clock
  MUX_0_DC_4.DIV = 7;
  //Set divider for LBIST clock
  MUX_0_DC_5.DIV = 7;
  //Set divider for QSPI clock
  MUX_0_DC_6.DIV = 0;
  //Set divider for CM7 core clock
  MUX_0_DC_7.DIV = 0;
  
  //Immediate divider update
  MUX_0_DIV_TRIG_CTRL = 0x80000001;
  
  //Writing any value to this register provides triger to the dividers
  MUX_0_DIV_TRIG = 0xFFFFFFFF;
  
  //Select PLL as clock source for system clock
  MUX_0_CSC &= ~(0xf << 24);
  MUX_0_CSC |= 8 << 24;
  
  //Create lock switch request
  MUX_0_CSC |= 4;
  
  /*Check if clock switch was requested*/
  while((MUX_0_CSS & (1 << 2)) == 0);
  /*Check if clock switching is in progress*/
  while((MUX_0_CSS & (1 << 16)) != 0);
} 

void enableSecondaryCore()
{
  //Select the start address for core 1
  PRTN0_CORE1_PCONF = 1;
  PRTN0_CORE1_PUPD = 1;
  triggerHardwareProcess();
  
  //Select the start address for core 2
  PRTN0_CORE4_PCONF = 1;
  PRTN0_CORE4_PUPD = 1;
  triggerHardwareProcess();
  

  while(PRTN0_CORE4_PUPD != 0){}
  while(PRTN0_CORE4_STAT != 1){}
}

void __attribute__ ((interrupt ("IRQ"))) TimerInterruptHandler(void) 
{
  /* clearing the flag after calling the InterruptRoutine can cause interrupts at unexpected
  irregular time periods so prefer clearing it before the call as it is done here */
  PIT_2_TFLG0 |= 1;   // clear flag that was set by timer at the end of timer period
  InterruptRoutine();
}

//PIT 2 timer 0 enable periodic interrupts
void targetEnableInterrupts()
{ 
  PIT_2_TCTRL0.TIE = 1;   // enable interrupt when TIF flag is set
  PIT_2_TCTRL0.TEN = 1;   // enable timer
  NVIC_ISER3 |= (1 << 2); // enable interrupt for timer overflow
  PIT_2_TFLG0 |= 1;       // clear flag that is set by timer at the end of timer period
}

//PIT 2 timer 0 initialization function
void initTimer()
{
  PIT_2_MCR &= ~(1 << 1);                          // enable clock for module PIT 2
  PIT_2_LDVAL0 = PIT_2_COUNTER_CYCLE_LEN - 1;      // set starting timer count (timer counts down)
}

void initNVIC() {
  NVIC_VTOR = VECTORS_OFFSET;
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  enableSecondaryCore();
  initNVIC();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
