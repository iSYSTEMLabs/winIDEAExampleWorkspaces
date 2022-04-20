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
  
  .section .Flash_bootblock
  .align 2
  .globl __Flash_bootblock
  __Flash_bootblock:
   b Reset_Handler
  .long 0
  .long 0
  .long 0
  .size	__Flash_bootblock, . - __Flash_bootblock
  
	.section .vectors
	.align 2
	.globl	__Vectors
__Vectors:
	.long	__StackTop            /* Top of Stack */
	.long	Reset_Handler         /* Reset Handler */
	.long	defaultHandler        /* NMI Handler */
	.long	defaultHandler        /* Hard Fault Handler */
	.long	defaultHandler        /* MPU Fault Handler */
	.long	defaultHandler        /* Bus Fault Handler */
	.long	defaultHandler        /* Usage Fault Handler */
  .long defaultHandler        /* Secure Fault Handler */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	0                     /* Reserved */
	.long	defaultHandler        /* SVCall Handler */
	.long	defaultHandler        /* Debug Monitor Handler */
	.long	0                     /* Reserved */
	.long	defaultHandler        /* PendSV Handler */
	.long	defaultHandler        /* SysTick Handler */

	/* External interrupts */
	.long	defaultHandler        /*  0:  Watchdog Timer            */
	.long	defaultHandler        /*  1:  Real Time Clock           */
	.long	defaultHandler        /*  2:  Timer0 / Timer1           */
	.long	defaultHandler        /*  3:  Timer2 / Timer3           */
	.long	defaultHandler        /*  4:  MCIa                      */
	.long	defaultHandler        /*  5:  MCIb                      */
	.long	defaultHandler        /*  6:  UART0 - DUT FPGA          */
	.long	defaultHandler        /*  7:  UART1 - DUT FPGA          */
	.long	defaultHandler        /*  8:  UART2 - DUT FPGA          */
	.long	defaultHandler        /*  9:  UART4 - not connected     */
	.long	defaultHandler        /* 10: AACI / AC97                */
	.long	defaultHandler        /* 11: CLCD Combined Interrupt    */
	.long	defaultHandler        /* 12: Ethernet                   */
	.long	defaultHandler        /* 13: USB Device                 */
	.long	defaultHandler        /* 14: USB Host Controller        */
	.long	defaultHandler        /* 15: Character LCD              */
	.long	defaultHandler        /* 16: Flexray                    */
	.long	defaultHandler        /* 17: CAN                        */
	.long	defaultHandler        /* 18: LIN                        */
	.long	defaultHandler        /* 19: I2C ADC/DAC                */
	.long	0                     /* 20: Reserved                   */
	.long	0                     /* 21: Reserved                   */
	.long	0                     /* 22: Reserved                   */
	.long	0                     /* 23: Reserved                   */
	.long	0                     /* 24: Reserved                   */
	.long	0                     /* 25: Reserved                   */
	.long	0                     /* 26: Reserved                   */
	.long	0                     /* 27: Reserved                   */
	.long	defaultHandler        /* 28: Reserved - CPU FPGA CLCD   */
	.long	0                     /* 29: Reserved - CPU FPGA        */
	.long	defaultHandler        /* 30: UART3    - CPU FPGA        */
	.long	defaultHandler        /* 31: SPI Touchscreen - CPU FPGA */

	.size	__Vectors, . - __Vectors

	.text
	.thumb
	.thumb_func
	.align	2
	.globl	Reset_Handler
	.type	Reset_Handler, %function
Reset_Handler:
	bl	ResetM33

	.pool
	.size	Reset_Handler, . - Reset_Handler

	.align	1
	.thumb_func
	.weak	Default_Handler
	.type	Default_Handler, %function
Default_Handler:
	b	.
	.size	Default_Handler, . - Default_Handler

	.end
