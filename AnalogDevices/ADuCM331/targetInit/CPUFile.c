#include "ADuCM331.h"

void disableWatchdog()
{
  
}

void init_GPIO(){
  // configure pin 3 to work as GPIO (GPIO2)
  GPIO_GP0CON &= ~(3 << 4);
  // set GPIO pin 3 as output (GPIO2)
  GPIO_GP0OEN |= (1 << 2);
}


void init_timer(){
  T0EN = 0;
  // Wait until the enable is synchronized to the timer clock domain.
  while (T0ISTA & (1 << 8));
  T0CON = 0;

  // 1 ms
  T0TOFC0 = 0x1000;
  T0TOFC1 = 0x0; 
  
  T0IEN |= (1 << 2);
  T0CLRI |= (1 << 2);
  T0EN = 1;
}

void targetEnableInterrupts()
{
  
  
  ISER0 |= (1 << 4);
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  init_GPIO();
  init_timer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
