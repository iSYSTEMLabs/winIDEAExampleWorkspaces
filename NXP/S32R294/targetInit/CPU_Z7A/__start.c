/*****************************************************************************

FILE
  __start.c
  $Date: 2007/08/28 21:09:27 $
  $Revision: 1.2 $

DESCRIPTION
  A minimal startup function for the e200z0 core of a MPC551x family processor.

  This function initializes the stack to the values defined in the LCF file and
  uses the linker defined _SDA_BASE_ and _SDA2_BASE_ symbols to initialize
  r2 and r13 per (EABI). It then calls main_p1().

  The symbol "__start_p1" can be assigned to CRP.Z0VEC.R to begin executing
  this function. 
*/
#include <__ppc_eabi_init.h>


#include <__ppc_eabi_linker.h>	/* linker-generated symbol declarations */

/* These symbols are defined in the Linker configuration file, but are not in */
/* __ppc_eabi_linker.h, so we'll provide the declarations here.  Note that    */
/* _heap_*_z0 definitions are currently not being used.                       */ 
__declspec(section ".init") extern char	_stack_addr[];
__declspec(section ".init") extern char _stack_end[];
__declspec(section ".init") extern unsigned long _bss_start;
__declspec(section ".init") extern unsigned long _bss_end;
/*__declspec(section ".init") extern char	_heap_addr[];
__declspec(section ".init") extern char _heap_end[];*/

extern void main();
void __cstart();

/* The e200z0 core ONLY supports VLE, so make sure we build VLE code! */

__declspec(vle_on)
#pragma function_align 8
asm extern void __start(void)
{
  nofralloc
  li  r0,0
  mr	r1, r0
  mr	r2, r0
  mr	r3, r0
  mr	r4, r0
  mr	r5, r0
  mr	r6, r0
  mr	r7, r0
  mr	r8, r0
  mr	r9, r0
  mr	r10, r0
  mr	r11, r0
  mr	r12, r0
  mr	r13, r0
  mr	r14, r0
  mr	r15, r0
  mr	r16, r0
  mr	r17, r0
  mr	r18, r0
  mr	r19, r0
  mr	r20, r0
  mr	r21, r0
  mr	r22, r0
  mr	r23, r0
  mr	r24, r0
  mr	r25, r0
  mr	r26, r0
  mr	r27, r0
  mr	r28, r0
  mr	r29, r0
  mr	r30, r0
  mr	r31, r0
  nop
  nop
  nop
  nop
  
	/* Initialize stack pointer				*/
	lis	r1, _stack_addr@ha
	addi	r1, r1, _stack_addr@l   

  /* Note that we are assuming small data is shared between the cores */
  /* Initialize small data area pointers (EABI)                       */
	lis   r2, _SDA2_BASE_@ha
	addi  r2, r2, _SDA2_BASE_@l
  
	lis   r13, _SDA_BASE_@ha
	addi  r13, r13, _SDA_BASE_@l
  
  /* now call z0's __cstart program (using short branch)... */ 
	bl __cstart

here:
  b here

	blr
}

void __cstart()
{
  unsigned long *pulDest = &_bss_start;
  while ( pulDest < &_bss_end )
    *pulDest++ = 0; 
  
  main();
}


