#include "bluenrg-1.h"
#include "VectM.h"


void CPU_Init()
{        
  //InitPLL_LPC11xx();
  // When the system uses an external XO at 32 MHz instead of 16 MHz, the following steps
  // need to be done:
  unsigned char config[4]; 
  config[0] = 0x02;
  config[1] = 0x3A;
  config[2] = 0x44;
  config[3] = 0x00;
  
  //In preactive state, operate as follow routine:
  BLUE_CTRL_RADIO_CONFIG = 0x10000 | (unsigned short) (
    (unsigned int)config & 0x0000FFFF );
  while((BLUE_CTRL_RADIO_CONFIG & 0x10000) != 0);
  
  // Set the bitfield MHZ32_SEL of register SYSTEM_CTRL, for the digital part
  SYSTEM_CTRL = 0; // 16 Mhz ext. oscilator 
  
  // Wait the state machine is in active state by using the follow routine:
  unsigned int fsm_status;
  unsigned short cnt_time = 0;
  do {
    cnt_time++;
    fsm_status = 0x00004382;
    BLUE_CTRL_RADIO_CONFIG = 0x10000 | (unsigned short) ( (
    (unsigned int)(&fsm_status) ) & 0x0000FFFF);
  while((BLUE_CTRL_RADIO_CONFIG & 0x10000) != 0);
  } while(((fsm_status>>16) != 0x05) && (cnt_time<1000));
  
  // After switching to active state (and not before), write 0x15 in the COMMAND register
  // of AHBUPCONV peripheral.
  AHBUPCONV |= 0x14; // Select 16 Mhz for bus
}

void Timer_Init(void)
{  
  // Enable MFT1 timer and Select Mode 3: Dual independent timer/counter
  MFT1_TNMCTRL = 0x00000082;
  
  // Set reload count value
  MFT1_TNCRA = 0x3500;  
  
  // Use prescaler clock
  MFT1_TNCKC = 0x1;
  
}

/* Initialize GPIO pin 0 as output in GPIO mode*/
void GPIO_Init(void)
{
  GPIO_MODE0 &= ~(0x7);
  GPIO_OEN |= 0x1;
}

void targetEnableInterrupts(void)
{ 
  MFT1_TNICTRL |= 0x00000010;     // Set interrupts to TIM1 A
  INT_0_31_SET_EN = 0x00020000;   //Enable the MFT1 A interrupts.
  __asm volatile ("cpsie i");     // Enable interrupts.
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  Timer_Init();
  GPIO_Init();                                                     
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void TimerInterruptHandler()
{
  INT_0_31_CLR_PEND   = 0x00020000;
  MFT1_TNICLR = 1;
  InterruptRoutine();  
}


void disableWatchdog()
{
}
