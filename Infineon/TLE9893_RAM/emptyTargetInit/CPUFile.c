#include "TLE9893.h"


void targetEnableInterrupts(void)
{
    NVIC_ISER = (0x1 << IRQEN7);                                            //IRQ7 interrupt set enable
    GPTISC |= (0x1 << GPT1T3CLR);                                           //General Purpose Timer 1 T3 Interrupt Status Clear //Write only
    NVIC_IPR1 |= (0x1F << PRI_N7);                                          //IRQ7 interrupt priority set to 31
    GPTIEN  |= (0x1 << GPT1T3EN);                                           //Timer 1 T3 Interrupt Enable
    T3CON |= (0x1 << T3R);                                                  //Timer T3 Run
    __asm__("cpsie i");                                                     //Global Enable interrupts
}


/*
  Init clock (Internal osc: 40Mhz, no ext. osc.) to 60 MHz           
*/
void initClock(){ 

  SCU_NMICON &= ~(0x1 << NMIPLL0EN);                                      //Disable NMIXPLL
  PLL_CON0 &= ~(0b11 << PLL_INSEL);                                       //Hp_async, HP_CLK selected asynchronously as reference clock (use 
  PLL_CON0 |= (0b10 << PLL_INSEL);                                        //if no XTAL_CLK is available

  PLL_CON0 &= ~(0b111111 << PLL_PDIV);                                    //Divider Setting PDIV= 5
  PLL_CON0 |= (0b000101 << PLL_PDIV);  
  
  PLL_CON0 &= ~(0b111<< PLL_K2DIV);                                       //Divider setting K2DIV = 2
  
  PLL_CON0 &= ~(0b11111111 << PLL_NDIV);
  PLL_CON0 |= (0b01110100 << PLL_NDIV);                                   //N-Divider Setting NDIV=116
 
  PLL_SPCTR &= ~(0b11111111 << SPUPVAL0);                                 //NDIV value updated each 2 PLL cycles
  PLL_SPCTR |= (0b00000010 << SPUPVAL0);                                     
  PLL_SPCTR |= (0b01 << SPRANGE0);                                        //SPREAD2, NDIV Spread in Range of +/- 2 Value

  PLL_CON0 &= ~(0x1 << PLL_FREERUN);                                      //Reference Clock is connected to the PLL
  PLL_CON0 |= (0x1 << PLL_EN);                                            //PLL Enable
  
  PLL_SPCTR |= (0x1 << SPEN0);                                            //NDIV PLL0 Spread Enable
  
  while (!(PLL_STAT & (0x1 << LCK0))){}                                   //Wait for PLL to lock
  
  PLL_STATC |= (0x1 << PLL0_LOL_STSCLR);                                  //Clear PLL0 Loss of Lock status flag
  
  //NMISRC |= (0x1 << NMIPLL0CLR);                                        //Clear PLL0 Loss of Lock NMI Status - THIS THROWS US TO DEFAULT HANDLER - DONT KNOW WHY YET!!!
  
  SCU_NMICON |= (0x1 << NMIPLL0EN);                                       //Enable NMIXPLL

}


void initTimer(){  
    
  T3CON &= ~(0x1 << T3R);                                                 //Timer T3 Stop
  T3_CNTREG = 0x2710;                                                     //Timer couter value register
  T3CON |= (0x1 << T3UD);                                                 //Timer T3 counts down
  T3CON |= (0b01 << BPS1);                                                //

}
void targetInit(void)
{  
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();  
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
