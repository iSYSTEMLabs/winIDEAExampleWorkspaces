/**************************************************************************//**
 * @file     startup_ARMCM4.s
 * @brief    CMSIS Core Device Startup File for
 *           ARMCM4 Device Series
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
#define __STARTUP_CLEAR_BSS
	.syntax	unified
	.arch	armv7-m

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

	.section .vectors
	.align	2
	.globl	__Vectors
__Vectors:
	.long	__StackTop            /* Top of Stack */
	.long	Reset_Handler         /* Reset Handler */
	.long	Default_Handler       /* NMI Handler */
	.long	Default_Handler       /* Hard Fault Handler */
	.long	Default_Handler       /* MPU Fault Handler */
	.long	Default_Handler       /* Bus Fault Handler */
	.long	Default_Handler       /* Usage Fault Handler */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	Default_Handler       /* SVCall Handler */
	.long	Default_Handler       /* Debug Monitor Handler */
	.long	0                     /* Reserved */
	.long	Default_Handler       /* PendSV Handler */
	.long	Default_Handler       /* SysTick Handler */

	/* External interrupts */
	.long	Default_Handler         /*   0:  Power Manager                                  */
	.long	Default_Handler         /*   1:  Main Clock                                     */
	.long	Default_Handler         /*   2:  OSCCTRL_XOSCFAIL_0, OSCCTRL_XOSCRDY_0          */
	.long	Default_Handler         /*   3:  OSCCTRL_XOSCFAIL_1, OSCCTRL_XOSCRDY_1          */
	.long	Default_Handler         /*   4:  OSCCTRL_DFLLLOCKC, OSCCTRL_DFLLLOCKF...        */
	.long	Default_Handler         /*   5:  OSCCTRL_DPLLLCKF_0, OSCCTRL_DPLLLCKR_0...      */
	.long	Default_Handler         /*   6:  OSCCTRL_DPLLLCKF_1, OSCCTRL_DPLLLCKR_1...      */
	.long	Default_Handler         /*   7:  32kHz Oscillators Control                      */
	.long	Default_Handler         /*   8:  SUPC_B12SRDY, SUPC_B33SRDY...                  */
	.long	Default_Handler         /*   9:  SUPC_BOD12DET, SUPC_BOD33DET                   */
	.long	Default_Handler         /*  10:  Watchdog Timer                                 */
	.long	Default_Handler         /*  11:  Real-Time Counter                              */
	.long	Default_Handler         /*  12:  EIC_EXTINT_0                                   */
	.long	Default_Handler         /*  13:  EIC_EXTINT_1                                   */
	.long	Default_Handler         /*  14:  EIC_EXTINT_2                                   */
	.long	Default_Handler         /*  15:  EIC_EXTINT_3                                   */
	.long	Default_Handler         /*  16:  EIC_EXTINT_4                                   */
	.long	Default_Handler         /*  17:  EIC_EXTINT_5                                   */
	.long	Default_Handler         /*  18:  EIC_EXTINT_6                                   */
	.long	Default_Handler         /*  19:  EIC_EXTINT_7                                   */
	.long	Default_Handler         /*  20:  EIC_EXTINT_8                                   */
	.long	Default_Handler         /*  21:  EIC_EXTINT_9                                   */
	.long	Default_Handler         /*  22:  EIC_EXTINT_10                                  */
	.long	Default_Handler         /*  23:  EIC_EXTINT_11                                  */
	.long	Default_Handler         /*  24:  EIC_EXTINT_12                                  */
	.long	Default_Handler         /*  25:  EIC_EXTINT_13                                  */
	.long	Default_Handler         /*  26:  EIC_EXTINT_14                                  */
	.long	Default_Handler         /*  27:  EIC_EXTINT_15                                  */
	.long	Default_Handler         /*  28:  Frequency Meter                                */
	.long	Default_Handler         /*  29:  NVMCTRL_0, NVMCTRL_1...                        */
	.long	Default_Handler         /*  30:  VMCTRL_10, NVMCTRL_8, NVMCTRL_9                */
	.long	Default_Handler         /*  31:  DMAC_SUSP_0, DMAC_TCMPL_0, DMAC_TERR_0         */
  .long	Default_Handler         /*  32:  DMAC_SUSP_1, DMAC_TCMPL_1, DMAC_TERR_1         */
	.long	Default_Handler         /*  33:  DMAC_SUSP_2, DMAC_TCMPL_2, DMAC_TERR_2         */
	.long	Default_Handler         /*  34:  DMAC_SUSP_3, DMAC_TCMPL_3, DMAC_TERR_3         */
	.long	Default_Handler         /*  35:  DMAC_SUSP_10, DMAC_SUSP_11, DMAC_SUSP_12...    */
	.long	Default_Handler         /*  36:  EVSYS_EVD_0, EVSYS_OVR_0                       */
	.long	Default_Handler         /*  37:  EVSYS_EVD_1, EVSYS_OVR_1                       */
	.long	Default_Handler         /*  38:  EVSYS_EVD_2, EVSYS_OVR_2                       */
	.long	Default_Handler         /*  39:  EVSYS_EVD_3, EVSYS_OVR_3                       */
	.long	Default_Handler         /*  40:  EVSYS_EVD_10, EVSYS_EVD_11...                  */
	.long	Default_Handler         /*  41:  Peripheral Access Controller                   */
	.long	Default_Handler         /*  42:  TAL_BRK                                        */
	.long	Default_Handler         /*  43:  TAL_IPS_0, TAL_IPS_1                           */
	.long	Default_Handler         /*  44:  Reserved                                       */
	.long	Default_Handler         /*  45:  RAM ECC                                        */
	.long	Default_Handler         /*  46:  SERCOM0_0                                      */
	.long	Default_Handler         /*  47:  SERCOM0_1                                      */
	.long	Default_Handler         /*  48:  SERCOM0_2                                      */
	.long	Default_Handler         /*  49:  SERCOM0_3, SERCOM0_4...                        */
	.long	Default_Handler         /*  50:  SERCOM1_0                                      */
	.long	Default_Handler         /*  51:  SERCOM1_1                                      */
	.long	Default_Handler         /*  52:  SERCOM1_2                                      */
	.long	Default_Handler         /*  53:  SERCOM1_3, SERCOM1_4...                        */
	.long	Default_Handler         /*  54:  SERCOM2_0                                      */
	.long	Default_Handler         /*  55:  SERCOM2_1                                      */
	.long	Default_Handler         /*  56:  SERCOM2_2                                      */
	.long	Default_Handler         /*  57:  SERCOM2_3, SERCOM2_4...                        */
	.long	Default_Handler         /*  58:  SERCOM3_0                                      */
	.long	Default_Handler         /*  59:  SERCOM3_1                                      */
	.long	Default_Handler         /*  60:  SERCOM3_2                                      */
	.long	Default_Handler         /*  61:  SERCOM3_3, SERCOM3_4...                        */
	.long	Default_Handler         /*  62:  SERCOM4_0                                      */
	.long	Default_Handler         /*  63:  SERCOM4_1                                      */
  .long	Default_Handler         /*  64:  SERCOM4_2                                      */
	.long	Default_Handler         /*  65:  SERCOM4_3, SERCOM4_4...                        */
	.long	Default_Handler         /*  66:  SERCOM5_0                                      */
	.long	Default_Handler         /*  67:  SERCOM5_1                                      */
	.long	Default_Handler         /*  68:  SERCOM5_2                                      */
	.long	Default_Handler         /*  69:  SERCOM5_3, SERCOM5_4...                        */
	.long	Default_Handler         /*  70:  SERCOM6_0                                      */
	.long	Default_Handler         /*  71:  SERCOM6_1                                      */
	.long	Default_Handler         /*  72:  SERCOM6_2                                      */
	.long	Default_Handler         /*  73:  SERCOM6_3, SERCOM6_4...                        */
	.long	Default_Handler         /*  74:  SERCOM7_0                                      */
	.long	Default_Handler         /*  75:  SERCOM7_0                                      */
	.long	Default_Handler         /*  76:  SERCOM7_2                                      */
	.long	Default_Handler         /*  77:  SERCOM7_3, SERCOM7_4                           */
	.long	Default_Handler         /*  78:  Control Area Network 0                         */
	.long	Default_Handler         /*  79:  Control Area Network 1                         */
	.long	Default_Handler         /*  80:  USB_EORSM_DNRSM, USB_EORST_RST...              */
	.long	Default_Handler         /*  81:  USB_SOF_HSOF                                   */
	.long	Default_Handler         /*  82:  USB_TRCPT0_0, USB_TRCPT0_1...                  */
	.long	Default_Handler         /*  83:  USB_TRCPT1_0, USB_TRCPT1_1...                  */
	.long	Default_Handler         /*  84:  Ethernet MAC                                   */
	.long	Default_Handler         /*  85:  TCC0_CNT_A, TCC0_DFS_A...                      */
	.long	Default_Handler         /*  86:  TCC0_MC_0                                      */
	.long	Default_Handler         /*  87:  TCC0_MC_1                                      */
	.long	Default_Handler         /*  88:  TCC0_MC_2                                      */
	.long	Default_Handler         /*  89:  TCC0_MC_3                                      */
	.long	Default_Handler         /*  90:  TCC0_MC_4                                      */
	.long	Default_Handler         /*  91:  TCC0_MC_5                                      */
	.long	Default_Handler         /*  92:  TCC1_CNT_A, TCC1_DFS_A                         */
	.long	Default_Handler         /*  93:  TCC1_MC_0                                      */
	.long	Default_Handler         /*  94:  TCC1_MC_1                                      */
	.long	Default_Handler         /*  95:  TCC1_MC_2                                      */
  .long	Default_Handler         /*  96:  TCC1_MC_3                                      */
	.long	Default_Handler         /*  97:  TCC2_CNT_A, TCC2_DFS_A...                      */
	.long	Default_Handler         /*  98:  TCC2_MC_0                                      */
	.long	Default_Handler         /*  99:  TCC2_MC_1                                      */
	.long	Default_Handler         /* 100:  TCC2_MC_2                                      */
	.long	Default_Handler         /* 101:  TCC3_CNT_A, TCC3_DFS_A...                      */
	.long	Default_Handler         /* 102:  TCC3_MC_0                                      */
	.long	Default_Handler         /* 103:  TCC3_MC_1                                      */
	.long	Default_Handler         /* 104:  TCC4_CNT_A, TCC4_DFS_A...                      */
	.long	Default_Handler         /* 105:  TCC4_MC_0                                      */
	.long	Default_Handler         /* 106:  TCC4_MC_1                                      */
	.long	TimerInterruptHandler   /* 107:  Basic Timer Counter 0                          */
	.long	Default_Handler         /* 108:  Basic Timer Counter 1                          */
	.long	Default_Handler         /* 109:  Basic Timer Counter 2                          */
	.long	Default_Handler         /* 110:  Basic Timer Counter 3                          */
	.long	Default_Handler         /* 111:  Basic Timer Counter 4                          */
	.long	Default_Handler         /* 112:  Basic Timer Counter 5                          */
	.long	Default_Handler         /* 113:  Basic Timer Counter 6                          */
	.long	Default_Handler         /* 114:  Basic Timer Counter 7                          */
	.long	Default_Handler         /* 115:  PDEC_DIR_A, PDEC_ERR_A ...                     */
	.long	Default_Handler         /* 116:  PDEC_MC_0                                      */
	.long	Default_Handler         /* 117:  PDEC_MC_1                                      */
	.long	Default_Handler         /* 118:  ADC0_OVERRUN, ADC0_WINMON                      */
	.long	Default_Handler         /* 119:  ADC0_RESRDY                                    */
	.long	Default_Handler         /* 120:  ADC1_OVERRUN, ADC1_WINMON                      */
	.long	Default_Handler         /* 121:  ADC1_RESRDY                                    */
	.long	Default_Handler         /* 122:  Analog Comparators                             */
	.long	Default_Handler         /* 123:  DAC_OVERRUN_A_0, DAC_OVERRUN_A_1...            */
	.long	Default_Handler         /* 124:  DAC_EMPTY_0                                    */
	.long	Default_Handler         /* 125:  DAC_EMPTY_1                                    */
	.long	Default_Handler         /* 126:  DAC_RESRDY_0                                   */
	.long	Default_Handler         /* 127:  DAC_RESRDY_1                                   */
  .long	Default_Handler         /* 128:  Inter-IC Sound Interface                       */
	.long	Default_Handler         /* 129:  Parallel Capture Controller                    */
	.long	Default_Handler         /* 130:  Advanced Encryption Standard                   */
	.long	Default_Handler         /* 131:  True Random Generator                          */
	.long	Default_Handler         /* 132:  Integrity Check Monitor                        */
	.long	Default_Handler         /* 133:  PUblic-Key Cryptography Controller             */
	.long	Default_Handler         /* 134:  Quad SPI interface                             */
	.long	Default_Handler         /* 135:  SD/MMC Host Controller 0                       */
	.long	Default_Handler         /* 136:  SD/MMC Host Controller 1                       */

	.size	__Vectors, . - __Vectors

	.text
	.thumb
	.thumb_func
	.align	2
	.globl	Reset_Handler
	.type	Reset_Handler, %function
Reset_Handler:

 /*Set up stack pointer to point to end of SRAM*/
    ldr r0, =__StackTop
    mov sp, r0
    
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
	ittt	ge
	ldrge	r0, [r1, r3]
	strge	r0, [r2, r3]
	bge	.L_loop0_0

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
	ldr	r1, =__etext
	ldr	r2, =__data_start__
	ldr	r3, =__data_end__

.L_loop1:
	cmp	r2, r3
	ittt	lt
	ldrlt	r0, [r1], #4
	strlt	r0, [r2], #4
	blt	.L_loop1
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
	itt	ge
	strge	r0, [r1, r2]
	bge	.L_loop2_0

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
.L_loop3:
	cmp	r1, r2
	itt	lt
	strlt	r0, [r1], #4
	blt	.L_loop3
#endif /* __STARTUP_CLEAR_BSS_MULTIPLE || __STARTUP_CLEAR_BSS */

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
