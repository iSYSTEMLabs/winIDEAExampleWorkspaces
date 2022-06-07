#include "GD32F103.h"

void targetEnableInterrupts()
{
  ISER |= (1 << 28);                 //IRQ28 enable 
  IPR28 |= (3 << 5);                 //priority = 3
  targetEnableInterrupts();
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  
  #endif /* EMPTY_TARGET_INIT */
  }

void disableWatchdog()
{
}

void initClock()
{
  RCU_CFG0 |=(10 << PLLMF  |       //PLL multiplication factor = 27 -> 108MHz
              1 << PLLMF4);
              
  RCU_CTL |= (1 << PLLEN);            //PLL enable
  while(!(RCU_CTL & (1 << PLLSTB))); //wait for PLL status 
  
  RCU_CFG0 &= ~(1 << PLLSEL);       //IRC8M/2 PLL source clock 
  RCU_CFG0 |= (4 << APB1PSC |       //prescaler for APB1 -> 54MHz
               2 << ADCPSC  |       //prescaler for ADC -> 13.5MHz      
               1 << ADCPSC2);
  
  RCU_CFG0 |= 2 << SCS;             //CK_PLL as CK_SYS source 
  while(!(RCU_CFG0 & (2 << SCSS))); //wait for PLL status     
}

void initTimer()
{
  RCU_APB1EN |= (1 << TIMER1EN);      //Timer1 enable 
  TIMER1_PSC = (2000 - 1);            //PSC = 2000 -> TIMER_CK = 108Mhz/2000 = 54kHz
  TIMER1_CAR = (54 - 1);              //reload value 
  TIMER1_DMAINTEN |= (1 << UPIE);     //interrupt enable
  TIMER1_CTL0 |= (1 << CEN);          //enable counter 
}