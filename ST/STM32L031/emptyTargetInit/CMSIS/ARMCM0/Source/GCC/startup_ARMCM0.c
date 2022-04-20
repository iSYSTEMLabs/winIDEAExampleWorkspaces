/**************************************************************************//**
 * @file     startup_ARMCM0.s
 * @brief    CMSIS Core Device Startup File for
 *           ARMCM0 Device Series
 * @version  V5.00
 * @date     26. March 2016
 ******************************************************************************/
/*
 * Copyright (c) 2009-2016 ARM Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdint.h>


/*----------------------------------------------------------------------------
  Linker generated Symbols
 *----------------------------------------------------------------------------*/
extern uint32_t __etext;
extern uint32_t __data_start__;
extern uint32_t __data_end__;
extern uint32_t __copy_table_start__;
extern uint32_t __copy_table_end__;
extern uint32_t __zero_table_start__;
extern uint32_t __zero_table_end__;
extern uint32_t __bss_start__;
extern uint32_t __bss_end__;
extern uint32_t __StackTop;

/*----------------------------------------------------------------------------
  Exception / Interrupt Handler Function Prototype
 *----------------------------------------------------------------------------*/
typedef void( *pFunc )( void );


/*----------------------------------------------------------------------------
  External References
 *----------------------------------------------------------------------------*/
#ifndef __START
extern void  main(void) __attribute__((noreturn));    /* PreeMain (C library entry point) */
#else
extern int  main(void) __attribute__((noreturn));    /* main entry point */
#endif

#ifndef __NO_SYSTEM_INIT
extern void SystemInit (void);            /* CMSIS System Initialization      */
#endif


/*----------------------------------------------------------------------------
  Internal References
 *----------------------------------------------------------------------------*/
void Default_Handler(void);                          /* Default empty handler */
void Reset_Handler(void);                            /* Reset Handler */


/*----------------------------------------------------------------------------
  User Initial Stack & Heap
 *----------------------------------------------------------------------------*/
#ifndef __STACK_SIZE
  #define	__STACK_SIZE  0x00000400
#endif
static uint8_t stack[__STACK_SIZE] __attribute__ ((aligned(8), used, section(".stack")));

#ifndef __HEAP_SIZE
  #define	__HEAP_SIZE   0x00000C00
#endif
#if __HEAP_SIZE > 0
static uint8_t heap[__HEAP_SIZE]   __attribute__ ((aligned(8), used, section(".heap")));
#endif


/*----------------------------------------------------------------------------
  Exception / Interrupt Handler
 *----------------------------------------------------------------------------*/
/* Cortex-M0 Processor Exceptions */
void NMI_Handler         (void) __attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler   (void) __attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler         (void) __attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler      (void) __attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler     (void) __attribute__ ((weak, alias("Default_Handler")));

/* ARMCM0 Specific Interrupts */
void IRQ00_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ01_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ02_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ03_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ04_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ05_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ06_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ07_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ08_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ09_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ10_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ11_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ12_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ13_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ14_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ15_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ16_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ17_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ18_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ19_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ20_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ21_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ22_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ23_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ24_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ25_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ26_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ27_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ28_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ29_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ30_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
void IRQ31_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));



/*----------------------------------------------------------------------------
  Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/
const pFunc __Vectors[] __attribute__ ((section(".vectors"))) = {
  /* Cortex-M0 Exceptions Handler */
  (pFunc)((uint32_t)&__StackTop),           /*      Initial Stack Pointer     */
  Reset_Handler,                            /*      Reset Handler             */
  NMI_Handler,                              /*      NMI Handler               */
  HardFault_Handler,                        /*      Hard Fault Handler        */
  0,                                        /*      Reserved                  */
  0,                                        /*      Reserved                  */
  0,                                        /*      Reserved                  */
  0,                                        /*      Reserved                  */
  0,                                        /*      Reserved                  */
  0,                                        /*      Reserved                  */
  0,                                        /*      Reserved                  */
  SVC_Handler,                              /*      SVCall Handler            */
  0,                                        /*      Reserved                  */
  0,                                        /*      Reserved                  */
  PendSV_Handler,                           /*      PendSV Handler            */
  SysTick_Handler,                          /*      SysTick Handler           */

  /* External interrupts */
  IRQ00_IRQHandler,                          /*  0:   */
  IRQ01_IRQHandler,                          /*  1:   */
  IRQ02_IRQHandler,                          /*  2:   */
  IRQ03_IRQHandler,                          /*  3:   */
  IRQ04_IRQHandler,                          /*  4:   */
  IRQ05_IRQHandler,                          /*  5:   */
  IRQ06_IRQHandler,                          /*  6:   */
  IRQ07_IRQHandler,                          /*  7:   */
  IRQ08_IRQHandler,                          /*  8:   */
  IRQ09_IRQHandler,                          /*  9:   */
  IRQ10_IRQHandler,                          /* 10:   */
  IRQ11_IRQHandler,                          /* 11:   */
  IRQ12_IRQHandler,                          /* 12:   */
  IRQ13_IRQHandler,                          /* 13:   */
  IRQ14_IRQHandler,                          /* 14:   */
  IRQ15_IRQHandler,                          /* 15:   */
  IRQ16_IRQHandler,                          /* 16:   */
  IRQ17_IRQHandler,                          /* 17:   */
  IRQ18_IRQHandler,                          /* 18:   */
  IRQ19_IRQHandler,                          /* 19:   */
  IRQ20_IRQHandler,                          /* 20:   */
  IRQ21_IRQHandler,                          /* 21:   */
  IRQ22_IRQHandler,                          /* 22:   */
  IRQ23_IRQHandler,                          /* 23:   */
  IRQ24_IRQHandler,                          /* 24:   */
  IRQ25_IRQHandler,                          /* 25:   */
  IRQ26_IRQHandler,                          /* 26:   */
  IRQ27_IRQHandler,                          /* 27:   */
  IRQ28_IRQHandler,                          /* 28:   */
  IRQ29_IRQHandler,                          /* 29:   */
  IRQ30_IRQHandler,                          /* 30:   */
  IRQ31_IRQHandler                           /* 31:   */
};


/*----------------------------------------------------------------------------
  Reset Handler called on controller reset
 *----------------------------------------------------------------------------*/
void Reset_Handler(void) {
  uint32_t *pSrc, *pDest;
  uint32_t *pTable __attribute__((unused));

/*  Firstly it copies data from read only memory to RAM. There are two schemes
 *  to copy. One can copy more than one sections. Another can only copy
 *  one section.  The former scheme needs more instructions and read-only
 *  data to implement than the latter.
 *  Macro __STARTUP_COPY_MULTIPLE is used to choose between two schemes.  */

#ifdef __STARTUP_COPY_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of triplets, each of which specify:
 *    offset 0: LMA of start of a section to copy from
 *    offset 4: VMA of start of a section to copy to
 *    offset 8: size of the section to copy. Must be multiply of 4
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
  pTable = &__copy_table_start__;

  for (; pTable < &__copy_table_end__; pTable = pTable + 3) {
		pSrc  = (uint32_t*)*(pTable + 0);
		pDest = (uint32_t*)*(pTable + 1);
		for (; pDest < (uint32_t*)(*(pTable + 1) + *(pTable + 2)) ; ) {
      *pDest++ = *pSrc++;
		}
	}
#else
/*  Single section scheme.
 *
 *  The ranges of copy from/to are specified by following symbols
 *    __etext: LMA of start of the section to copy from. Usually end of text
 *    __data_start__: VMA of start of the section to copy to
 *    __data_end__: VMA of end of the section to copy to
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
  pSrc  = &__etext;
  pDest = &__data_start__;

  for ( ; pDest < &__data_end__ ; ) {
    *pDest++ = *pSrc++;
  }
#endif /*__STARTUP_COPY_MULTIPLE */

/*  This part of work usually is done in C library startup code. Otherwise,
 *  define this macro to enable it in this startup.
 *
 *  There are two schemes too. One can clear multiple BSS sections. Another
 *  can only clear one section. The former is more size expensive than the
 *  latter.
 *
 *  Define macro __STARTUP_CLEAR_BSS_MULTIPLE to choose the former.
 *  Otherwise efine macro __STARTUP_CLEAR_BSS to choose the later.
 */
#ifdef __STARTUP_CLEAR_BSS_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of tuples specifying:
 *    offset 0: Start of a BSS section
 *    offset 4: Size of this BSS section. Must be multiply of 4
 */
  pTable = &__zero_table_start__;

  for (; pTable < &__zero_table_end__; pTable = pTable + 2) {
		pDest = (uint32_t*)*(pTable + 0);
		for (; pDest < (uint32_t*)(*(pTable + 0) + *(pTable + 1)) ; ) {
      *pDest++ = 0;
		}
	}
#elif defined (__STARTUP_CLEAR_BSS)
/*  Single BSS section scheme.
 *
 *  The BSS section is specified by following symbols
 *    __bss_start__: start of the BSS section.
 *    __bss_end__: end of the BSS section.
 *
 *  Both addresses must be aligned to 4 bytes boundary.
 */
  pDest = &__bss_start__;

  for ( ; pDest < &__bss_end__ ; ) {
    *pDest++ = 0ul;
  }
#endif /* __STARTUP_CLEAR_BSS_MULTIPLE || __STARTUP_CLEAR_BSS */

#ifndef __NO_SYSTEM_INIT
	SystemInit();
#endif

#ifndef __START
#define __START main
#endif
	__START();

}


/*----------------------------------------------------------------------------
  Default Handler for Exceptions / Interrupts
 *----------------------------------------------------------------------------*/
void Default_Handler(void) {

	while(1);
}
