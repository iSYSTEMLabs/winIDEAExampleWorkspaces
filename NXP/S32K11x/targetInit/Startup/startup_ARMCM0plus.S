/**************************************************************************//**
 * @file     startup_ARMCM0plus.s
 * @brief    CMSIS Core Device Startup File for
 *           ARMCM0plus Device Series
 * @version  V5.00
 * @date     02. March 2016
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

	.syntax	unified
	.arch	armv6-m

	.section .stack
	.align	3
#ifdef __STACK_SIZE
	.equ	Stack_Size, __STACK_SIZE
#else
	.equ	Stack_Size, 0x00000400
#endif
	.globl	__StackTop
	.globl	__StackLimit
__StackLimit:
	.space	Stack_Size
	.size	__StackLimit, . - __StackLimit
__StackTop:
	.size	__StackTop, . - __StackTop

	.section .heap
	.align	3
#ifdef __HEAP_SIZE
	.equ	Heap_Size, __HEAP_SIZE
#else
	.equ	Heap_Size, 0x00000C00
#endif
	.globl	__HeapBase
	.globl	__HeapLimit
__HeapBase:
	.if	Heap_Size
	.space	Heap_Size
	.endif
	.size	__HeapBase, . - __HeapBase
__HeapLimit:
	.size	__HeapLimit, . - __HeapLimit

	.section .vectors, "a"
	.align 2
	.globl	__Vectors
__Vectors:
	.long	__StackTop            /* Top of Stack */
	.long	Reset_Handler         /* Reset Handler */
	.long	NMI_Handler           /* NMI Handler */
	.long	HardFault_Handler     /* Hard Fault Handler */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	SVC_Handler           /* SVCall Handler */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	PendSV_Handler        /* PendSV Handler */
	.long	SysTick_Handler       /* SysTick Handler */

	/* External interrupts */
	.long	DMA0_IRQHandler       /*  DMA channel 0 transfer complete    */
	.long	DMA1_IRQHandler       /*  DMA channel 1 transfer complete    */
	.long	DMA2_IRQHandler       /*  DMA channel 2 transfer complete    */
	.long	DMA3_IRQHandler       /*  DMA channel 3 transfer complete    */
	.long	DMA03_IRQHandler      /*  DMA error interrupt channels 0-3   */
	.long	ERM_IRQHandler        /*  ERM error correction    */
	.long	RTC_IRQHandler        /*  RTC alarm interrupt                */
	.long	0                     /*  RTC second interrupt               */
	.long	LPTIMER_IRQHandler    /*  LPTIMER interrupt request          */   
	.long	PORT_IRQHandler       /*  PORTA / PORTB / PORTC / PORTD interrupt    */
	.long	CAN0_IRQHandler       /* CAN0 interrupt                      */
	.long	0                     /* CAN0 message buffer                 */
	.long	FTM0_IRQHandler       /* FTM0 interrupt                      */
	.long	0                     /* FTM0 false interrupt                */
	.long	0                     /* FTM0 overwlof / reload interrupt    */
	.long	FTM1_IRQHandler       /* FTM1 interrupt                      */
	.long	0                     /* FTM1 false interrupt                */
	.long	0                     /* FTM1 overwlof / reload interrupt    */
	.long	FLASH_IRQHandler      /* Flash memory                        */   
	.long	PDB0_IRQHandler       /* PDB0 interrupt                      */
	.long	TimerInterruptHandler /* LPIT interrunt                      */
	.long	PMC_IRQHandler        /* PMC / SCG / CMU interrupt           */
	.long	WDOG_IRQHandler       /* WDOG interrupt                      */
  .long	RCM_IRQHandler        /* RCM interrupt                       */
	.long	LPI2CO_IRQHandler     /* LPI2CO interrupt                    */
	.long	FLEXIO_IRQHandler     /* FLEXIO interrupt                    */
	.long	LSPI0_IRQHandler      /* LSPI0 interrupt                     */
	.long	LSPI1_IRQHandler      /* LSPI1 interrupt                     */
	.long	ADC0_IRQHandler       /* ADC0 interrupt                      */
	.long	CMP0_IRQHandler       /* CMP0 interrupt                      */
  .long	LPUART1_IRQHandler    /* LPUART1 interrupt                   */
  .long	LPUART0_IRQHandler    /* LPUART0 interrupt                   */

	.size	__Vectors, . - __Vectors

	.text
	.thumb
	.thumb_func
	.align	1
	.globl	Reset_Handler
	.type	Reset_Handler, %function
Reset_Handler:
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
	ldr	r4, =__copy_table_start__
	ldr	r5, =__copy_table_end__

.L_loop0:
	cmp	r4, r5
	bge	.L_loop0_done
	ldr	r1, [r4]
	ldr	r2, [r4, #4]
	ldr	r3, [r4, #8]

.L_loop0_0:
	subs	r3, #4
	blt	.L_loop0_0_done
	ldr	r0, [r1, r3]
	str	r0, [r2, r3]
	b	.L_loop0_0

.L_loop0_0_done:
	adds	r4, #12
	b	.L_loop0

.L_loop0_done:
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
 
 /*Load Stackpointer for RAM exec */
  ldr r0, =__stack
  mov sp, r0
  
	ldr	r1, =__etext
	ldr	r2, =__data_start__
	ldr	r3, =__data_end__
  
  subs r4, r4
  ldr r5, =__data_start__
  subs r0, #4

.init_ram:
  str r4, [r5]
  adds r5, #4
  subs r6, r0, r5
  bgt	.init_ram

	subs	r3, r2
	ble	.L_loop1_done

.L_loop1:
	subs	r3, #4
	ldr	r0, [r1,r3]
	str	r0, [r2,r3]
	bgt	.L_loop1

.L_loop1_done:
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
	ldr	r3, =__zero_table_start__
	ldr	r4, =__zero_table_end__

.L_loop2:
	cmp	r3, r4
	bge	.L_loop2_done
	ldr	r1, [r3]
	ldr	r2, [r3, #4]
	movs	r0, 0

.L_loop2_0:
	subs	r2, #4
	blt	.L_loop2_0_done
	str	r0, [r1, r2]
	b	.L_loop2_0
.L_loop2_0_done:

	adds	r3, #8
	b	.L_loop2
.L_loop2_done:
#elif defined (__STARTUP_CLEAR_BSS)
/*  Single BSS section scheme.
 *
 *  The BSS section is specified by following symbols
 *    __bss_start__: start of the BSS section.
 *    __bss_end__: end of the BSS section.
 *
 *  Both addresses must be aligned to 4 bytes boundary.
 */
	ldr	r1, =__bss_start__
	ldr	r2, =__bss_end__

	movs	r0, 0

	subs	r2, r1
	ble	.L_loop3_done

.L_loop3:
	subs	r2, #4
	str	r0, [r1, r2]
	bgt	.L_loop3
.L_loop3_done:
#endif /* __STARTUP_CLEAR_BSS_MULTIPLE || __VTOR_PRESENT == 1U */

#ifndef __NO_SYSTEM_INIT
	bl	SystemInit
#endif

#ifndef __START
#define __START main
#endif
	bl	__START

	.pool
	.size	Reset_Handler, . - Reset_Handler

	.align	1
	.thumb_func
	.weak	Default_Handler
	.type	Default_Handler, %function
Default_Handler:
	b	.
	.size	Default_Handler, . - Default_Handler
  

  

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
	.macro	def_irq_handler	handler_name
	.weak	\handler_name
	.set	\handler_name, Default_Handler
	.endm

	def_irq_handler	NMI_Handler
	def_irq_handler	HardFault_Handler
	def_irq_handler	SVC_Handler
	def_irq_handler	PendSV_Handler
	def_irq_handler	SysTick_Handler

	def_irq_handler DMA0_IRQHandler      
	def_irq_handler DMA1_IRQHandler       
	def_irq_handler DMA2_IRQHandler      
	def_irq_handler DMA3_IRQHandler       
	def_irq_handler DMA03_IRQHandler     
	def_irq_handler ERM_IRQHandler       
	def_irq_handler RTC_IRQHandler               
	def_irq_handler LPTIMER_IRQHandler   
	def_irq_handler PORT_IRQHandler      
	def_irq_handler CAN0_IRQHandler             
	def_irq_handler FTM0_IRQHandler                   
	def_irq_handler FTM1_IRQHandler         
	def_irq_handler FLASH_IRQHandler      
	def_irq_handler PDB0_IRQHandler       
	//def_irq_handler LPIT_IRQHandler       
	def_irq_handler PMC_IRQHandler       
	def_irq_handler WDOG_IRQHandler       
  def_irq_handler RCM_IRQHandler        
	def_irq_handler LPI2CO_IRQHandler     
	def_irq_handler FLEXIO_IRQHandler     
	def_irq_handler LSPI0_IRQHandler     
	def_irq_handler LSPI1_IRQHandler      
	def_irq_handler ADC0_IRQHandler       
	def_irq_handler CMP0_IRQHandler       
  def_irq_handler LPUART1_IRQHandler    
  def_irq_handler LPUART0_IRQHandler  

	.end
