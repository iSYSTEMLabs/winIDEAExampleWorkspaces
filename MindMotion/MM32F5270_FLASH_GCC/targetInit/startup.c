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

#include "MM32F5270.h"

//*****************************************************************************
//
// Forward declaration of the default fault handlers.
//
//*****************************************************************************
void ResetISR(void);
static void NmiSR(void);
static void FaultISR(void);
static void IntDefaultHandler(void);
static void IntSystickHandler(void);
static void TimerInterruptHandler(void);
static void TIM10_Handler(void);

//*****************************************************************************
//
// External declaration for the interrupt handler used by the application.
//
//*****************************************************************************
extern unsigned long _stack_top;

//*****************************************************************************
//
// The entry point for the application.
//
//*****************************************************************************
extern int main(void);

//*****************************************************************************
//
// The minimal vector table for a Cortex M3.  Note that the proper constructs
// must be placed on this to ensure that it ends up at physical address
// 0x0000.0000.
//
// NOTE: The stack pointer is always initialized with the value from address 0.
// If this project is in RAM, the first value from this table will not be the
// one used to initialize the stack pointer, since it is not at address 0.
// To initialize stack pointer, winIDEA initialization sequence must be used
// in emulation options and must initialize the stack pointer to the top of stack
// which is the first value from this vector table. To get the proper value,
// perform a download and inspect the first downloaded value in the g_pfnVectors.
// It should be something like 0x20001038.
//
//*****************************************************************************
__attribute__((section(".isr_vector"))) void (*const g_pfnVectors[])(void) =
    {
        (void (*)(void))(&_stack_top),
        ResetISR,              //Reset 0x0000_0004
        NmiSR,                 //NMI 0x0000_0008
        FaultISR,              //HardFault 0x0000_000C
        IntDefaultHandler,     //MemManage 0x0000_0010
        IntDefaultHandler,     //BusFault 0x0000_0014
        IntDefaultHandler,     //UsageFault 0x0000_0018
        0,                     //Reserved 0x0000_001C
        0,                     //Reserved 0x0000_0020
        0,                     //Reserved 0x0000_0024
        0,                     //Reserved 0x0000_0028
        IntDefaultHandler,     //SVCall 0x0000_002C
        IntDefaultHandler,     //Debug Monitor 0x0000_0030
        0,                     //Reserved 0x0000_0034
        IntDefaultHandler,     //PendSV 0x0000_0038
        IntSystickHandler,     //SysTick 0x0000_003C
        IntDefaultHandler,     /* Window watchdog interrupt (IWDGis EXTI21) */
        IntDefaultHandler,     /* Power voltage detection (PVD) interrupt (EXTI16) */
        IntDefaultHandler,     /* BKP intrusion detection interrupt */
        IntDefaultHandler,     /* RTCglobal interrupt */
        IntDefaultHandler,     /* Flash global interrupt */
        IntDefaultHandler,     /* RCC and CRS global interrupt */
        IntDefaultHandler,     /* EXTI line 0 interrupt */
        IntDefaultHandler,     /* EXTI line 1 interrupt */
        IntDefaultHandler,     /* EXTI line 2 interrupt */
        IntDefaultHandler,     /* EXTI line 3 interrupt */
        IntDefaultHandler,     /* EXTI line 4 interrupt */
        IntDefaultHandler,     /* DMA1 channel 1 global interrupt */
        IntDefaultHandler,     /* DMA1 channel 2 global interrupt */
        IntDefaultHandler,     /* DMA1 channel 3 global interrupt */
        IntDefaultHandler,     /* DMA1 channel 4 global interrupt */
        IntDefaultHandler,     /* DMA1 channel 5 global interrupt */
        IntDefaultHandler,     /* DMA1 channel 6 global interrupt */
        IntDefaultHandler,     /* DMA1 channel 7 global interrupt */
        IntDefaultHandler,     /* ADC1/2 global interrupt */
        0,                     /* Reserved */
        IntDefaultHandler,     /* DMA1 channel8 global interrupt */
        IntDefaultHandler,     /* FlexCAN1 global interrupt */
        0,                     /* Reserved */
        IntDefaultHandler,     /* EXTI line [9:5] interrupt */
        IntDefaultHandler,     /* TIM1 brake interrupt */
        IntDefaultHandler,     /* TIM1 update interrupt */
        IntDefaultHandler,     /* TIM1 trigger/COM interrupt */
        IntDefaultHandler,     /* TIM1 capture compare interrupt */
        TimerInterruptHandler, /* TIM2 global interrupt */
        IntDefaultHandler,     /* TIM3 global interrupt */
        IntDefaultHandler,     /* TIM4 global interrupt */
        IntDefaultHandler,     /* I2C1 global interrupt */
        0,                     /* Reserved */
        IntDefaultHandler,     /* I2C2 global interrupt */
        IntDefaultHandler,     /* Reserved */
        IntDefaultHandler,     /* SPI1 global interrupt */
        IntDefaultHandler,     /* SPI2 global interrupt */
        IntDefaultHandler,     /* UART1 global interrupt */
        IntDefaultHandler,     /* UART2 global interrupt */
        IntDefaultHandler,     /* UART3 global interrupt */
        IntDefaultHandler,     /* EXTI line [15:10] interrupt */
        IntDefaultHandler,     /* RTC clock interrupt (EXTI17) */
        IntDefaultHandler,     /* USB wake-up interrupt (EXTI18) */
        IntDefaultHandler,     /* TIM8 brake interrupt */
        IntDefaultHandler,     /* TIM8 update interrupt */
        IntDefaultHandler,     /* TIM8 trigger/COM interrupt */
        IntDefaultHandler,     /* TIM8 capture compare interrupt */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        IntDefaultHandler,     /* TIM5 global interrupt */
        IntDefaultHandler,     /* SPI3 global interrupt */
        IntDefaultHandler,     /* UART4 global interrupt */
        IntDefaultHandler,     /* UART5 global interrupt */
        IntDefaultHandler,     /* TIM6 global interrupt */
        IntDefaultHandler,     /* TIM7 global interrupt */
        IntDefaultHandler,     /* DMA2 channel1 global interrupt */
        IntDefaultHandler,     /* DMA2 channel2 global interrupt */
        IntDefaultHandler,     /* DMA2 channel3 global interrupt */
        IntDefaultHandler,     /* DMA2 channel4 global interrupt */
        IntDefaultHandler,     /* DMA2 channel5 global interrupt */
        IntDefaultHandler,     /* ENET global interrupt */
        IntDefaultHandler,     /* ENET wake-up interrupt (EXTI25) */
        0,                     /* Reserved */
        IntDefaultHandler,     /* Comparator 1/2/3 global interrupt (EXTI19/20/24) */
        IntDefaultHandler,     /* FLexCAN2 global interrupt */
        0,                     /* Reserved */
        IntDefaultHandler,     /* USB_FS global interrupt */
        IntDefaultHandler,     /* DMA2 channel6 global interrupt */
        IntDefaultHandler,     /* DMA2 channel7 global interrupt */
        IntDefaultHandler,     /* DMA2 channel8 global interrupt */
        IntDefaultHandler,     /* UART6 global interrupt */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        IntDefaultHandler,     /* UART7 global interrupt */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        IntDefaultHandler,     /* QSPI global interrupt */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0,                     /* Reserved */
        IntDefaultHandler,     /* LPTIM global interrupt (EXTI22) */
        0,                     /* Reserved */
        IntDefaultHandler,     /* LPUART global interrupt (EXTI23) */
        0,                     /* Reserved */
        0,                     /* Reserved */
        0                      /* Reserved */
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
void ResetISR(void) __attribute__((naked));
void ResetISR(void)
{
    unsigned long *pulSrc, *pulDest;

    register unsigned long stackreg __asm("sp");
    stackreg = (unsigned long)&_stack_top;

    //
    // Copy the data segment initializers from flash to SRAM.
    //
    pulSrc = &_text_end;
    for (pulDest = &_data; pulDest < &_data_end;)
    {
        *pulDest++ = *pulSrc++;
    }
    
    //
    // Zero fill the bss segment.
    //
    for (pulDest = &_bss; pulDest < &_bss_end;)
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
static void NmiSR(void)
{
    //
    // Enter an infinite loop.
    //
    while (1)
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
    while (1)
    {
    }
}
typedef struct
{
    unsigned long m_dwExR0;
    unsigned long m_dwExR1;
    unsigned long m_dwExR2;
    unsigned long m_dwExR3;
    unsigned long m_dwExR12;
    unsigned long m_dwExLR;
    unsigned long m_dwExPC;
    unsigned long m_dwExPSR;
} SCortexM3ExContext;

//*****************************************************************************
//
// This is the code that gets called when the processor receives an unexpected
// interrupt.  This simply enters an infinite loop, preserving the system state
// for examination by a debugger.
//
//*****************************************************************************
__attribute__((naked)) static void IntDefaultHandler(void)
{
    register SCortexM3ExContext *psCortexM3ExContext __asm("r0");
    register unsigned long dwLR __asm("lr");

    if (dwLR & 4)
        asm(" mrs r0, psp");
    else
        asm(" mrs r0, msp");

    while (1)
        ;
}

static void IntSystickHandler(void)
{
    InterruptRoutine();
}

//*****************************************************************************
//
// TIM2 interrupt handler.
//
//*****************************************************************************
void TimerInterruptHandler(void)
{
  TIM2_SR &= ~(1 << UIE); // clear interrupt
  InterruptRoutine();
}