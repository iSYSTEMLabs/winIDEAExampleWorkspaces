#include "startupM7.h"
#include "IMXRT1015_sfr.h"

extern unsigned volatile long _estack;

extern unsigned volatile long _isrVector;
extern unsigned volatile long _etext;
extern unsigned volatile long _sdata;
extern unsigned volatile long _edata;
extern unsigned volatile long _sbss;
extern unsigned volatile long _ebss;

extern int main(void);
extern void TimerInterruptHandler(void);

__attribute__((naked))
void Reset(void)
{
  asm("ldr sp,=_estack");
 
  unsigned volatile long *pulSrc = &_etext;
  unsigned volatile long *pulDst = &_sdata;

  while (pulDst < &_edata) *pulDst++ = *pulSrc++;
  
  pulDst = &_sbss;
  while (pulDst < &_ebss) *pulDst++ = 0;
  
  setVTOR();
  enableFPU();
  
  main();
}


void IntDefaultHandler()
{
  while(1);
}

void NMIHandler()
{
  while(1);
}

void HardFaultHandler()
{
  while(1);
}

void setVTOR(void) {
  System_Control_Space_System_Control_Block.VTOR.R = (unsigned long)&_isrVector;
}

void enableFPU(void) {
  System_Control_Space_System_Control_Block.CPACR.B.CP10 = 0x3;
  System_Control_Space_System_Control_Block.CPACR.B.CP11 = 0x3;
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),  // Initial stack pointer
  Reset,                       // Reset handler
  NMIHandler,                  // NMI handler
  HardFaultHandler,            // Hard fault handler
  IntDefaultHandler,           
  IntDefaultHandler,           
  IntDefaultHandler,           
  0,                           
  0,                           
  0,                           
  0,                            
  IntDefaultHandler,           
  IntDefaultHandler,           
  0,                           
  IntDefaultHandler,           
  IntDefaultHandler,
  
  IntDefaultHandler,    // IRQ0
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
  IntDefaultHandler,  // IRQ40
  IntDefaultHandler,
  0,
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
  IntDefaultHandler,
  0,
  0,
  0,
  0,
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
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  0,
  0,  // IRQ100
  0,
  IntDefaultHandler,
  0,
  0,
  0,
  IntDefaultHandler,
  0,
  0,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  TimerInterruptHandler,  // IRQ 122
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
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
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
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
