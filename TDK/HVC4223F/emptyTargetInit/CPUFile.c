#include "HVC4223F.h"
#include "VectM.h"


void Flash_Unlock()
{
  // Unlock a memory region in flash by setting 
  // the unlock code in register FLASH_ULA and inverse code in FLASH_ULB. 
  FLASH_ULA = 0x7260322B;
  FLASH_ULB = 0x8D9FCDD4;
}

void Timer_Init()
{
  // Enable timer module
  TIM0_CR = 0x00000001;   
  // Set the top count value to timer 0  
  TIM0_AR = 0x5000;
  // Set the prescaler
  TIM0_PS = 0x0000;
}

void TimerInterruptHandler()
{
  INT_0_31_CLR_PEND   = 0x00000002; //Clears interrupt pending flag.
  TIM0_EIPND = 0x0001;
  InterruptRoutine();  
}

void targetEnableInterrupts(void)
{
  // Enable interrupts
  TIM0_IEN = 0x00000001;
    
  INT_0_31_SET_EN     = 0x00000002; //Enables timer0 interrupt.
  INT_0_3_PRI         = 0xE0E0E0E0; //Sets interrupt priority.  
  INT_0_31_CLR_PEND   = 0x00000002; //Clears interrupt pending flag.
}

/* Init GPIO ports  */
void GPIO_Init()
{
  // Push-pull, out mode
  LGPIO_DD |= 0x70;
  LGPIO_C0 &= ~(0x70);
  LGPIO_C1 &= ~(0x70);
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  /* Clock is already initialized to 20 MHz (max) */
  Flash_Unlock();
  Timer_Init();
  GPIO_Init();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
