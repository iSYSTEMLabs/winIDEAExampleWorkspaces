#include "TLE9844.h"


/*
  Init timer   
*/
void initTimer(){  
  GPT1_T3CON &= ~(0x1 << GPT1_T3CON_T3R);     // Reset and stop timer 3       
  GPT1_T3 = 0x2510;   
  GPT1_T3CON |= (0x1 << GPT1_T3CON_T3UD);     // Counter counting down  
  GPT1_T3CON |= (0x1 << GPT1_T3CON_BPS1);     // Set timer prescaler                        
}


/*
  Init clock (Internal osc: 5 Mhz, no ext. osc.) to 40 MHz (Max)
*/
void initClock(){ 
  // While setting PLL parameters PLL must be in VCP bypass mode
  PLL_CON |= (0x101 << PLL_CON_VCOBYP);
  
  // Select VCO range and K2 divider  
  PASSWD |= (0b10011 << PASSWD_PASS);
  CMCON1 &= ~(0x3 << CMCON1_K2DIV);
  
  // Set PLL N divider and reset lock state
  PASSWD |= (0b10011 << PASSWD_PASS);
  CMCON1 |= (0x1 << CMCON1_PDIV);    
  PASSWD |= (0b10011 << PASSWD_PASS);
  PLL_CON &= ~(0xF << PLL_CON_NDIV);
  PASSWD |= (0b10011 << PASSWD_PASS);
  PLL_CON |= (0xA << PLL_CON_NDIV);
  PLL_CON |= (0x1 << PLL_CON_RESLD);
  while (!(PLL_CON & (0x1 << PLL_CON_LOCK)));
  
  // PLL is set, change PLL mode to normal mode
  PLL_CON ^= (0x101 << PLL_CON_VCOBYP);
}

void targetEnableInterrupts(void)
{
  // enable interrupts on CPU
  INT_0_31_SET_EN |= 0x1;
  SCU_IEN0 |= (0x1 << SCU_IEN0_EA);
  GPT12ICLR |= (0x1 << GPT12ICLR_T3C);
  __asm("cpsie i");
  // Accept only timer 3 interrupts and run it
  GPT12IEN &= ~(0x1 << GPT12IEN_T4); 
  GPT12IEN &= ~(0x1 << GPT12IEN_T2); 
  GPT12IEN |= (0x1 << GPT12IEN_T3);
  GPT1_T3CON |= (0x1 << GPT1_T3CON_T3R);
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
