#include "imxrt1020_sfr.h"

extern int main(void);
extern void InterruptRoutine(void);

extern unsigned long _estack;

extern unsigned long _isrVectorStart;
extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

void Reset() __attribute__ ( ( naked ) );
void Reset()
{
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  register unsigned long stackreg __asm("sp");
  stackreg = (unsigned long)&_estack;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;    
  
  /*Set ISR vector table pointer.*/
  System_Control_Space_System_Control_Block.VTOR.R = (volatile unsigned long int)&_isrVectorStart;
  
  main();
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}

void SysTick_Handler(){
  
}



void TimerInterruptHandler()
{
  /* disable interrupts, execute ISR, re-enable interrupts */
  
  targetDisableInterrupts();
  /*Clear the GPT1 interrupt flag*/
  GPT1_SR |= 0x01;
  InterruptRoutine();
  targetEnableInterrupts();
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&_estack),              // The initial stack pointer
    Reset,                                  // The reset handler
    IntDefaultHandler,                      // The NMI handler
    IntDefaultHandler,                      // The hard fault handler
    IntDefaultHandler,                      // The MPU fault handler
    IntDefaultHandler,                      // The bus fault handler
    IntDefaultHandler,                      // The usage fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
    0,                                      // Reserved
    IntDefaultHandler,                      // PendSV Handler
    SysTick_Handler,                        // not sure if SysTick
    
    0,                                      // IRQ0
    0,                                      // IRQ1
    0,                                      // IRQ2
    0,                                      // IRQ3
    0,                                      // IRQ4
    0,                                      // IRQ5
    0,                                      // IRQ6
    0,                                      // IRQ7
    0,                                      // IRQ8
    0,                                      // IRQ9
    0,                                      // IRQ10
    0,                                      // IRQ11
    0,                                      // IRQ12
    0,                                      // IRQ13
    0,                                      // IRQ14
    0,                                      // IRQ15
    0,                                      // IRQ16
    0,                                      // IRQ17
    0,                                      // IRQ18
    0,                                      // IRQ19
    0,                                      // IRQ20
    0,                                      // IRQ21
    0,                                      // IRQ22
    0,                                      // IRQ23
    0,                                      // IRQ24
    0,                                      // IRQ25
    0,                                      // IRQ26
    0,                                      // IRQ27
    0,                                      // IRQ28
    0,                                      // IRQ29
    0,                                      // IRQ30
    0,                                      // IRQ31
    0,                                      // IRQ32
    0,                                      // IRQ33
    0,                                      // IRQ34
    0,                                      // IRQ35
    0,                                      // IRQ36
    0,                                      // IRQ37
    0,                                      // IRQ38
    0,                                      // IRQ39
    0,                                      // IRQ40
    0,                                      // IRQ41
    0,                                      // IRQ42
    0,                                      // IRQ43
    0,                                      // IRQ44
    0,                                      // IRQ45
    0,                                      // IRQ46
    0,                                      // IRQ47
    0,                                      // IRQ48
    0,                                      // IRQ49
    0,                                      // IRQ50
    0,                                      // IRQ51
    0,                                      // IRQ52
    0,                                      // IRQ53
    0,                                      // IRQ54
    0,                                      // IRQ55
    0,                                      // IRQ56
    0,                                      // IRQ57
    0,                                      // IRQ58
    0,                                      // IRQ59
    0,                                      // IRQ60
    0,                                      // IRQ61
    0,                                      // IRQ62
    0,                                      // IRQ63
    0,                                      // IRQ64
    0,                                      // IRQ65
    0,                                      // IRQ66
    0,                                      // IRQ67
    0,                                      // IRQ68
    0,                                      // IRQ69
    0,                                      // IRQ70
    0,                                      // IRQ71
    0,                                      // IRQ72
    0,                                      // IRQ73
    0,                                      // IRQ74
    0,                                      // IRQ75
    0,                                      // IRQ76
    0,                                      // IRQ77
    0,                                      // IRQ78
    0,                                      // IRQ79
    0,                                      // IRQ80
    0,                                      // IRQ81
    0,                                      // IRQ82
    0,                                      // IRQ83
    0,                                      // IRQ84
    0,                                      // IRQ85
    0,                                      // IRQ86
    0,                                      // IRQ87
    0,                                      // IRQ88
    0,                                      // IRQ89
    0,                                      // IRQ90
    0,                                      // IRQ91
    0,                                      // IRQ92
    0,                                      // IRQ93
    0,                                      // IRQ94
    0,                                      // IRQ95
    0,                                      // IRQ96
    0,                                      // IRQ97
    0,                                      // IRQ98
    0,                                      // IRQ99
    TimerInterruptHandler,                  // IRQ100 - GPT1
};

