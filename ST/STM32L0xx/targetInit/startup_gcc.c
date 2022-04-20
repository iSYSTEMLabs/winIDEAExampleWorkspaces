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

#include "stm32L0.h"
#include "lowPowerMode.h"

//*****************************************************************************
//
// Forward declaration of the default fault handlers.
//
//*****************************************************************************
void ResetISR(void);
static void NmiSR(void);
static void FaultISR(void);
static void IntDefaultHandler(void);
static void IntWakeupHandler(void);
static void IntRTCWakeupHandler(void);
static void IntSystickHandler(void);
static void TimerInterruptHandler(void);

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
extern void gotoRTCInitMode(void);
extern void exitRTCInitMode(void);
extern void InterruptRoutine(void);

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
        IntDefaultHandler,     /* Window WatchDog              */
        IntDefaultHandler,     /* PVD through EXTI Line detection */
        IntRTCWakeupHandler,   /* RTC through the EXTI line     */
        IntDefaultHandler,     /* FLASH                        */
        IntDefaultHandler,     /* RCC and CRS                  */
        IntDefaultHandler,     /* EXTI Line 0 and 1            */
        IntDefaultHandler,     /* EXTI Line 2 and 3            */
        IntDefaultHandler,     /* EXTI Line 4 to 15            */
        IntDefaultHandler,     /* TSC                           */
        IntDefaultHandler,     /* DMA1 Channel 1               */
        IntDefaultHandler,     /* DMA1 Channel 2 and Channel 3 */
        IntDefaultHandler,     /* DMA1 Channel 4, Channel 5, Channel 6 and Channel 7*/
        IntDefaultHandler,     /* ADC1, COMP1 and COMP2        */
        IntDefaultHandler,     /* LPTIM1                       */
        0,                     /* Reserved                     */
        TimerInterruptHandler, /* TIM2                         */
        0,                     /* Reserved                     */
        IntDefaultHandler,     /* TIM6 and DAC                 */
        0,                     /* Reserved                     */
        0,                     /* Reserved                     */
        IntWakeupHandler,      /* TIM21                        */
        0,                     /* Reserved                     */
        IntDefaultHandler,     /* TIM22                        */
        IntDefaultHandler,     /* I2C1                         */
        IntDefaultHandler,     /* I2C2                         */
        IntDefaultHandler,     /* SPI1                         */
        IntDefaultHandler,     /* SPI2                         */
        IntDefaultHandler,     /* USART1                       */
        IntDefaultHandler,     /* USART2                       */
        IntDefaultHandler,     /* RNG and LPUART1              */
        IntDefaultHandler,     /* LCD                          */
        IntDefaultHandler,     /* USB                          */
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
    
    if (PWR_CSR & (0x1 << PWR_CSR_SBF))
    {
      RCC_APB1ENR |= (1 << PWREN); //Enable power interface - PWR
      PWR_CR |= (0x1 << PWR_CR_CWUF);
      PWR_CR |= (0x1 << PWR_CR_CSBF);
      onExitLowPowerModeTestBreakpoint(FROM_RESET);
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
    {
      asm(" mrs r0, psp");
    }
    else
    {
      asm(" mrs r0, msp");
    }

    while (1);
}

static void IntRTCWakeupHandler(void)
{
  EXTI_PR |= (0x1 << EXTI_PR_PR20);
  onExitLowPowerModeTestBreakpoint(FROM_INTERRUPT);
}

static void IntWakeupHandler(void)
{
  TIM21_SR &= ~(1 << CC1IF); // clear interrupt
  TIM21_SR &= ~(1 << CC2IF); // clear interrupt
  TIM21_SR &= ~(1 << UIF); // clear interrupt
  TIM21_CR1 &= ~(1 << CEN); //enable interrupt
  onExitLowPowerModeTestBreakpoint(FROM_INTERRUPT);
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
  TIM2_SR &= ~(1 << CC1IF); // clear interrupt
  InterruptRoutine();
  TIM2_CR1 |= (1 << CEN); //enable interrupt
}