#include "MKL25Z4.h"

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

//*****************************************************************************
//
// Forward declaration of the default fault handlers.
//
//*****************************************************************************
void ResetISR(void);
static void NmiSR(void);
static void FaultISR(void);
static void IntDefaultHandler(void);
static void TimerInterruptHandler(void);

//*****************************************************************************
//
// External declaration for the interrupt handler used by the application.
//
//*****************************************************************************
extern void ADCIntHandler(void);

//*****************************************************************************
//
// The entry point for the application.
//
//*****************************************************************************
extern int main(void);

//*****************************************************************************
//
// Reserve space for the system stack.
//
//*****************************************************************************
__attribute__ ((section(".stack")))
static unsigned long pulStack[256];

//*****************************************************************************
//
// The minimal vector table for a Cortex M3.  Note that the proper constructs
// must be placed on this to ensure that it ends up at physical address
// 0x0000.0000.
//
//*****************************************************************************
__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))((unsigned long)pulStack + sizeof(pulStack)),
                                            // The initial stack pointer
    ResetISR,                               // Initial program counter
    NmiSR,                                  // Non-maskable interrupt (NMI)
    FaultISR,                               // Hard fault
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // Supervisor call (SVCall)
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // Pendable request for system service
    TimerInterruptHandler,                      // System tick timer
    IntDefaultHandler,                      // (DMA) DMA channel 0 transfer complete and error
    IntDefaultHandler,                      // (DMA) DMA channel 1 transfer complete and error
    IntDefaultHandler,                      // (DMA) DMA channel 2 transfer complete and error
    IntDefaultHandler,                      // (DMA) DMA channel 3 transfer complete and error
    0,                                      // Reserved 
    IntDefaultHandler,                      // (FTFA) Command complete and read collision
    IntDefaultHandler,                      // (PMC) Low-voltage detect, low-voltage warning
    IntDefaultHandler,                      // (LLWU) Low Leakage Wakeup
    IntDefaultHandler,                      // (I2C0) Status and Timeout and wakeup flags
    IntDefaultHandler,                      // (I2C1) Status and Timeout and wakeup flags
    IntDefaultHandler,                      // (SPI0) Single interrupt vector for all sources
    IntDefaultHandler,                      // (SPI1) Single interrupt vector for all sources
    IntDefaultHandler,                      // (LPUART0) Status and error
    IntDefaultHandler,                      // (LPUART1) Status and error
    IntDefaultHandler,                      // (UART2 or FlexIO) Status and error
    IntDefaultHandler,                      // (ADC0) Conversion complete
    IntDefaultHandler,                      // (CMP0) Rising or falling edge of comparator output
    IntDefaultHandler,                      // (TPM0) Overflow or channel interrupt
    IntDefaultHandler,                      // (TPM1) Overflow or channel interrupt
    IntDefaultHandler,                      // (TPM2) Overflow or channel interrupt
    IntDefaultHandler,                      // (RTC) Alarm interrupt
    IntDefaultHandler,                      // (RTC) Seconds interrupt
    TimerInterruptHandler,                  // (PIT) Single interrupt vector for all channels
    IntDefaultHandler,                      // (I2S0) Single interrupt vector for all sources
    IntDefaultHandler,                      // (USB) USB
    IntDefaultHandler,                      // (DAC0) DAC0
    IntDefaultHandler,                      // Reserved
    IntDefaultHandler,                      // Reserved
    IntDefaultHandler,                      // (LPTMR0) LP Timer compare match
    IntDefaultHandler,                      // (SLCD) SLCD
    IntDefaultHandler,                      // (Port control module) Pin detect (Port A)
    IntDefaultHandler                       // (Port control module) Pin detect (Single interrupt vector for Port C, Port D)
};

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
extern unsigned long _stack_top;

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
    unsigned volatile long *pulSrc, *pulDest;

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
    main();
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives a NMI.  This
// simply enters an infinite loop, preserving the system state for examination
// by a debugger.
//
//*****************************************************************************
static void NmiSR(void)
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
static void FaultISR(void)
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
static void IntDefaultHandler(void)
{
    //
    // Go into an infinite loop.
    //
    while(1)
    {
    }
}

extern void InterruptRoutine();

static void TimerInterruptHandler(void){
  InterruptRoutine();
}
