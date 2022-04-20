#include "lm4f.h"
#include "VectM.h"


#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address)  (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)

void InitClocks()
{
  RCGC1 = 0x00010000; //enable timer 0 clock
  RCGC2 = 0x08; //enable GPIOD clock
}  

void InitTimer()
{
  GPTMTAMR = 0x22; //timer a mode register
  GPTMIMR = 0x1; //enable interrupts
  GPTMTAILR = 0x3fff; //counter reload value
  GPTMCTL = 0x01; //enable counter a
}


void targetEnableInterrupts()
{
  INT_0_31_SET_EN = 0x00080000; //enable timer0A interrupt
  asm("CPSIE i \n");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  InitClocks(); 
  InitTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void TimerInterruptHandler()
{
  GPTMICR = 0x1; //clear flag
  InterruptRoutine();
}


__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))(&_stack_top),
    ResetISR,               //Reset 0x0000_0004
    NmiSR,                  //NMI 0x0000_0008
    FaultISR,               //HardFault 0x0000_000C
    IntDefaultHandler,      //MemManage 0x0000_0010
    IntDefaultHandler,      //BusFault 0x0000_0014
    IntDefaultHandler,      //UsageFault 0x0000_0018
    0,                      //Reserved 0x0000_001C                                             
    0,                      //Reserved 0x0000_0020
    0,                      //Reserved 0x0000_0024
    0,                      //Reserved 0x0000_0028
    IntDefaultHandler,      //SVCall 0x0000_002C
    IntDefaultHandler,      //Debug Monitor 0x0000_0030
    0,                      //Reserved 0x0000_0034
    IntDefaultHandler,      //PendSV 0x0000_0038
    IntDefaultHandler,      //SysTick 0x0000_003C 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,
    TimerInterruptHandler,
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,
    IntDefaultHandler,
};

void disableWatchdog()
{
}
