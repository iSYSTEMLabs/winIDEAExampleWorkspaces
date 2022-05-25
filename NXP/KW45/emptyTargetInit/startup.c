#include "main.h"
#include "KW45.h"

extern int main();
void ResetHandler(void);

extern unsigned long __StackTop, __bss_start__, __bss_end__, __etext, __data_start__, __data_end__;


void IntDefaultHandler()
{
  while(1)
  {
  }
}
/*
void SysTickHandler()
{
  InterruptRoutine();
}
*/

void TimerInterruptHandler()
{
  InterruptRoutine();
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&__StackTop),           // Initial Stack Pointer
    ResetHandler,                           // Initial Program Counter
    IntDefaultHandler,                      // Non-Maskable Interrupt (NMI)
    IntDefaultHandler,                      // Hard Fault handler
    IntDefaultHandler,                      // MemManage Fault handler
    IntDefaultHandler,                      // Bus Fault / TRDC handler
    IntDefaultHandler,                      // Usage Fault handler
    IntDefaultHandler,                      // Secure Fault
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // Supervisor Call (SVCall) handler
    IntDefaultHandler,                      // Debug Monitor handler
    0,                                      // Reserved
    IntDefaultHandler,                      // Pendable request for system service
    TimerInterruptHandler,                         // System Tick Timer
    IntDefaultHandler,                      // Cross Trigger Interface interrupt
    IntDefaultHandler,                      // Core Mode Controller interrupt
    IntDefaultHandler,                      // eDMA channel 0
    IntDefaultHandler,                      // eDMA channel 1
    IntDefaultHandler,                      // eDMA channel 2
    IntDefaultHandler,                      // eDMA channel 3
    IntDefaultHandler,                      // eDMA channel 4
    IntDefaultHandler,                      // eDMA channel 5
    IntDefaultHandler,                      // eDMA channel 6
    IntDefaultHandler,                      // eDMA channel 7
    IntDefaultHandler,                      // eDMA channel 8
    IntDefaultHandler,                      // eDMA channel 9
    IntDefaultHandler,                      // eDMA channel 10
    IntDefaultHandler,                      // eDMA channel 11
    IntDefaultHandler,                      // eDMA channel 12
    IntDefaultHandler,                      // eDMA channel 13
    IntDefaultHandler,                      // eDMA channel 14
    IntDefaultHandler,                      // eDMA channel 15
    IntDefaultHandler,                      // External Watchdog Monitor 0 interrupt
    IntDefaultHandler,                      // Miscellaneous Control Module interrupt
    IntDefaultHandler,                      // Miscellaneous System Control Module interrupt
    IntDefaultHandler,                      // System Power Controller 0 interrupt
    IntDefaultHandler,                      // Wake-Up Unit 0 interrupt
    IntDefaultHandler,                      // Watchdog Timer 0 interrupt
    IntDefaultHandler,                      // Watchdog Timer 1 interrupt
    IntDefaultHandler,                      // System Clock Generator 0 interrupt
    IntDefaultHandler,                      // Singal Frequency Analyzer 0 interrupt
    IntDefaultHandler,                      // Flash Memory Unit 0 interrupt
    IntDefaultHandler,                      // EdgeLock enclave command interface interrupt
    IntDefaultHandler,                      // EdgeLock enclave interrupt
    IntDefaultHandler,                      // EdgeLock enclave non-secure interrupt
    IntDefaultHandler,                      // Trusted Resource Domain Controller 0 interrupt
    IntDefaultHandler,                      // Real Time Clock 0 alarm interrupt
    IntDefaultHandler,                      // Real Time Clock 0 seconds interrupt
    IntDefaultHandler,                      // Low-Power Timer0 interrupt
    IntDefaultHandler,                      // Low-Power Timer1 interrupt
    IntDefaultHandler,                      // Low-Power Periodic Interrupt Timer 0 interrupt
    IntDefaultHandler,                      // Timer / PWM Module 0 interrupt
    IntDefaultHandler,                      // Timer / PWM Module 1 interrupt
    IntDefaultHandler,                      // Low-Power Inter Integrated Circuit 0 interrupt
    IntDefaultHandler,                      // Low-Power Inter Integrated Circuit 1 interrupt
    IntDefaultHandler,                      // Improved Inter-Integrated Circuit 0 interrupt
    IntDefaultHandler,                      // Low-Power Serial Peripheral Interface 0 interrupt
    IntDefaultHandler,                      // Low-Power Serial Peripheral Interface 1 interrupt
    IntDefaultHandler,                      // Low-Power Universal Asynchronous Receiver/Transmitter 0 interrupt
    IntDefaultHandler,                      // Low-Power Universal Asynchronous Receiver/Transmitter 1 interrupt
    IntDefaultHandler,                      // Flexible Input/Output 0 interrupt
    IntDefaultHandler,                      // Controller Area Network 0 interrupt
    IntDefaultHandler,                      // Radio IMU interrupt 0 
    IntDefaultHandler,                      // Radio IMU interrupt 1
    IntDefaultHandler,                      // Radio NBU timeout interrupt
    IntDefaultHandler,                      // Radio FMU interrupt
    IntDefaultHandler,                      // Radio WOR RX FAIL interrupt
    0,                                      // Reserved
    IntDefaultHandler,                      // Radio Frequency 2.4 GHz - Generic Link Layer interrupt
    IntDefaultHandler,                      // Radio Frequency 2.4 GHz - BRIC interrupt
    IntDefaultHandler,                      // Radio Transceiver - Radio LANT_SW interrupt
    IntDefaultHandler,                      // RFMC interrupt
    IntDefaultHandler,                      // Data Stream Buffer interrupt
    IntDefaultHandler,                      // General Purpose Input/Output A interrupt 0
    IntDefaultHandler,                      // General Purpose Input/Output A interrupt 1
    IntDefaultHandler,                      // General Purpose Input/Output B interrupt 0
    IntDefaultHandler,                      // General Purpose Input/Output B interrupt 1
    IntDefaultHandler,                      // General Purpose Input/Output C interrupt 0
    IntDefaultHandler,                      // General Purpose Input/Output C interrupt 1
    IntDefaultHandler,                      // General Purpose Input/Output D interrupt 0
    IntDefaultHandler,                      // General Purpose Input/Output D interrupt 1
    IntDefaultHandler,                      // Port A EFT interrupt
    IntDefaultHandler,                      // Port B EFT interrupt
    IntDefaultHandler,                      // Port C EFT interrupt
    IntDefaultHandler,                      // Port D EFT interrupt
    IntDefaultHandler,                      // Analog-to-Digital Converter 0 interrupt
    IntDefaultHandler,                      // Low-Power Comparator 0 interrupt
    IntDefaultHandler,                      // Low-Power Comparator 1 interrupt
    IntDefaultHandler,                      // Smart Power Switch Domain interrupt
};

__attribute__ ((naked))
void ResetHandler()
{
  volatile unsigned long *pulDest = &__data_start__;
  volatile unsigned long *pulSrc = &__etext;
  
  VTOR = (unsigned volatile int) &g_pfnVectors;
  
  __asm__("ldr R0, =__StackTop");
  __asm__("mov sp, R0");
  
  while (pulDest < &__data_end__)
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = &__bss_start__;
  while ( pulDest < &__bss_end__ )
  {
    *pulDest++ = 0;
  }
  
  main();
  while(1);
}