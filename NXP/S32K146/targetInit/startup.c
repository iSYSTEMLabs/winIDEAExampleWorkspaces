//*****************************************************************************
//
// startup_gcc.c - Startup code for use with GNU tools.
//
// Copyright (c) 2006-2007 Luminary Micro, Inc.  All rights reserved.
// 
// Software License Agreement
// 
// Luminary Micro, Inc. (LMI) is supplying this software for use solely and
// exclusively on LMI's microcontroller products.
// 
// The software is owned by LMI and/or its suppliers, and is protected under
// applicable copyright laws.  All rights are reserved.  Any use in violation
// of the foregoing restrictions may subject the user to criminal sanctions
// under applicable laws, as well as to civil liability for the breach of the
// terms and conditions of this license.
// 
// THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
// OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
// LMI SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
// CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 1427 of the Stellaris Peripheral Driver Library.
//
//*****************************************************************************

#include "VectM.h" 
#include "S32K146.h"

//*****************************************************************************
//
// The entry point for the application.
//
//*****************************************************************************
extern int main(void);
extern int InterruptRoutine(void);

//*****************************************************************************
//
// The following are constructs created by the linker, indicating where the
// the "data" and "bss" segments reside in memory.  The initializers for the
// for the "data" segment resides immediately following the "text" segment.
//
//*****************************************************************************
extern unsigned long _text;
extern unsigned long _text_end;
extern unsigned long _data;
extern unsigned long _data_end;
extern unsigned long _bss;
extern unsigned long _bss_end;

#ifdef IMMEDIATE_INIT
void ImmInit();
#endif

//*****************************************************************************
//
// This is the code that gets called when the processor first starts execution
// following a reset event.  Only the absolutely necessary set is performed,
// after which the application supplied entry() routine is called.  Any fancy
// actions (such as making decisions based on the reset cause register, and
// resetting the bits in that register) are left solely in the hands of the
// application.
//
//*****************************************************************************
void ResetISR(void)
{
    unsigned long *pulSrc, *pulDest;

    register unsigned long stackreg __asm("sp");
    stackreg = (unsigned long)&_stack_top;

    //
    // Copy the data segment initializers from flash to SRAM.
    //
    pulSrc = &_text_end;
    for(pulDest = &_data; pulDest < &_data_end; )
    {
        *pulDest++ = *pulSrc++;
    }

    //
    // Zero fill the bss segment.
    //
    for(pulDest = &_bss; pulDest < &_bss_end; )
    {
        *pulDest++ = 0;
    }

    //
    // Call the application's entry point.
    //
    call_main();
}

// needed for HWBP test
int call_main(void)
{
    main();
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives a NMI.  This
// simply enters an infinite loop, preserving the system state for examination
// by a debugger.
//
//*****************************************************************************
void NmiSR(void)
{
    //
    // Enter an infinite loop.
    //
    while(1)
    {
    }
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives a fault
// interrupt.  This simply enters an infinite loop, preserving the system state
// for examination by a debugger.
//
//*****************************************************************************
void FaultISR(void)
{
    //
    // Enter an infinite loop.
    //
    while(1)
    {
    }
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives an unexpected
// interrupt.  This simply enters an infinite loop, preserving the system state
// for examination by a debugger.
//
//*****************************************************************************
void IntDefaultHandler(void)
{
    //
    // Go into an infinite loop.
    //
    while(1)
    {
    }
}

void TimerInterruptHandler()
{
  LPIT0_MSR |= (0x1 << LPIT0_MSR_TIF0);  
  InterruptRoutine();
}
  
__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_stack_top),               // The initial stack pointer
    ResetISR,                                  // The reset handler
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
    IntDefaultHandler,                      // The PendSV handler
    IntDefaultHandler,                      // The SysTick handler
    IntDefaultHandler,                      // DMA channel 0 transfer complete
    IntDefaultHandler,                      // DMA channel 1 transfer complete
    IntDefaultHandler,                      // DMA channel 2 transfer complete
    IntDefaultHandler,                      // DMA channel 3 transfer complete
    IntDefaultHandler,                      // DMA channel 4 transfer complete
    IntDefaultHandler,                      // DMA channel 5 transfer complete 
    IntDefaultHandler,                      // DMA channel 6 transfer complete
    IntDefaultHandler,                      // DMA channel 7 transfer complete
    IntDefaultHandler,                      // DMA channel 8 transfer complete
    IntDefaultHandler,                      // DMA channel 9 transfer complete
    IntDefaultHandler,                      // DMA channel 10 transfer complete
    IntDefaultHandler,                      // DMA channel 11 transfer complete
    IntDefaultHandler,                      // DMA channel 12 transfer complete
    IntDefaultHandler,                      // DMA channel 13 transfer complete
    IntDefaultHandler,                      // DMA channel 14 transfer complete
    IntDefaultHandler,                      // DMA channel 15 transfer complete
    IntDefaultHandler,                      // DMA error interrupt channels 0-15
    IntDefaultHandler,                      // MCM FPU sources
    IntDefaultHandler,                      // Flash memory Command complete
    IntDefaultHandler,                      // Flash memory Read collision
    IntDefaultHandler,                      // PMC Low-voltage detect, low-voltage warning
    IntDefaultHandler,                      // Flash memory Double bit fault detect interrupt
    IntDefaultHandler,                      // WDOG or EWM Both watchdog modules share this interrupt
    0,                                      // Reserved
    IntDefaultHandler,                      // LPI2C0
    IntDefaultHandler,                      // LPI2C1
    IntDefaultHandler,                      // LPSPI0 Single interrupt vector for all sources
    IntDefaultHandler,                      // LPSPI1 Single interrupt vector for all sources
    0,                                      // Reserved 
    IntDefaultHandler,                      // PWT
    0,                                      // Reserved 
    IntDefaultHandler,                      // LPUART0 LPUART0 transmit interrupt 
    IntDefaultHandler,                      // LPUART0 receive interrupt 
    IntDefaultHandler,                      // LPUART1 transmit interrupt 
    IntDefaultHandler,                      // LPUART1 receive interrupt 
    IntDefaultHandler,                      // LPUART2 transmit interrupt 
    IntDefaultHandler,                      // LPUART2 receive interrupt 
    0,                                      // Reserved 
    0,                                      // Reserved 
    IntDefaultHandler,                      // ADC0 
    IntDefaultHandler,                      // CMP0 
    IntDefaultHandler,                      // CMP1 
    IntDefaultHandler,                      // FTM0 Single interrupt vector for all sources
    IntDefaultHandler,                      // FTM1 Single interrupt vector for all sources
    IntDefaultHandler,                      // FTM2 Single interrupt vector for all sources
    0,                                      // Reserved 
    IntDefaultHandler,                      // RTC 
    IntDefaultHandler,                      // RTC Seconds interrupt 
    TimerInterruptHandler,                  // LPIT Channel 0
    IntDefaultHandler,                      // LPIT Channel 1
    IntDefaultHandler,                      // LPIT Channel 2
    IntDefaultHandler                       // LPIT Channel 3
};
