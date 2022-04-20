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

#include "stm32f3.h"

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
        IntDefaultHandler,     //WWDG 0x0000_0040
        IntDefaultHandler,     //PVD 0x0000_0044
        IntDefaultHandler,     //TAMPER 0x0000_0048
        IntDefaultHandler,     //RTC 0x0000_004C
        IntDefaultHandler,     //FLASH 0x0000_0050
        IntDefaultHandler,     //RCC 0x0000_0054
        IntDefaultHandler,     //EXTI0 0x0000_0058
        IntDefaultHandler,     //EXTI1 0x0000_005C
        IntDefaultHandler,     //EXTI2 0x0000_0060
        IntDefaultHandler,     //EXTI3 0x0000_0064
        IntDefaultHandler,     //EXTI4 0x0000_0068
        IntDefaultHandler,     //DMA_Channel1 0x0000_006C
        IntDefaultHandler,     //DMA_Channel2 0x0000_0070
        IntDefaultHandler,     //DMA_Channel3 0x0000_0074
        IntDefaultHandler,     //DMA_Channel4 0x0000_0078
        IntDefaultHandler,     //DMA_Channel5 0x0000_007C
        IntDefaultHandler,     //DMA_Channel6 0x0000_0080
        IntDefaultHandler,     //DMA_Channel7 0x0000_0084
        IntDefaultHandler,     //ADC1_2 0x0000_0088
        IntDefaultHandler,     //USB_HP_CAN_TC 0x0000_008C
        IntDefaultHandler,     //USB_LP_CAN_RX0 0x0000_0090
        IntDefaultHandler,     //CAN_RX1 0x0000_0094
        IntDefaultHandler,     //CAN_SCE 0x0000_0098
        IntDefaultHandler,     //EXTI9_5 0x0000_009C
        IntDefaultHandler,     //TIM1_BRK 0x0000_00A0
        IntDefaultHandler,     //TIM1_UP 0x0000_00A4
        IntDefaultHandler,     //TIM1_TRG_COM 0x0000_00A8
        IntDefaultHandler,     //TIM1_CC 0x0000_00AC
        TimerInterruptHandler, //TIM2 0x0000_00B0
        IntDefaultHandler,     //TIM3 0x0000_00B4
        IntDefaultHandler,     //TIM4 0x0000_00B8
        IntDefaultHandler,     //I2C1_EV 0x0000_00BC
        IntDefaultHandler,     //I2C1_ER 0x0000_00C0
        IntDefaultHandler,     //I2C2_EV 0x0000_00C4
        IntDefaultHandler,     //I2C2_ER 0x0000_00C8
        IntDefaultHandler,     //SPI1 0x0000_00CC
        IntDefaultHandler,     //SPI2 0x0000_00D0
        IntDefaultHandler,     //USART1 0x0000_00D4
        IntDefaultHandler,     //USART2 0x0000_00D8
        IntDefaultHandler,     //USART3 0x0000_00DC
        IntDefaultHandler,     //EXTI15_10 0x0000_00E0
        IntDefaultHandler,     //RTCAlarm 0x0000_00E4
        IntDefaultHandler,     //USBWakeup 0x0000_00E8
        IntDefaultHandler,     //TIM8_BRK 0x0000_00EC
        IntDefaultHandler,     //TIM8_UP 0x0000_00F0
        IntDefaultHandler,     //TIM8_TRG_COM 0x0000_00F4
        IntDefaultHandler,     //TIM8_CC 0x0000_00F8
        IntDefaultHandler,     //ADC3 0x0000_00FC
        IntDefaultHandler,     //FSMC 0x0000_0100
        IntDefaultHandler,     //SDIO 0x0000_0104
        IntDefaultHandler,     //TIM5 0x0000_0108
        IntDefaultHandler,     //SPI3 0x0000_010C
        IntDefaultHandler,     //UART4 0x0000_0110
        IntDefaultHandler,     //UART5 0x0000_0114
        IntDefaultHandler,     //TIM6 0x0000_0118
        IntDefaultHandler,     //TIM7 0x0000_011C
        IntDefaultHandler,     //DMA2_Channel1 0x0000_0120
        IntDefaultHandler,     //DMA2_Channel2 0x0000_0124
        IntDefaultHandler,     //DMA2_Channel3 0x0000_0128
        IntDefaultHandler,     //DMA2_Channel4_5 0x0000_012C
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
    TIM2_SR &= ~(1 << CC1IF); // clear interrupt
    InterruptRoutine();

    TIM2_CR1 |= (1 << CEN); //enable interrupt

    /*if (TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET)
    {
        InterruptRoutine();

        TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
    }*/
}