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
__declspec(section ".init") extern int __RAM_START_ADDR;
__declspec(section ".init") extern int __RAM_END_ADDR;
__declspec(section ".init") extern int __RAM_SIZE;
__declspec(section ".init") extern int __ROM_DATA_SIZE;
__declspec(section ".init") extern int __ROM_DATA_ADDR;
__declspec(section ".init") extern int __RAM_DATA_ADDR;
__declspec(section ".init") extern int __ROM_SDATA_SIZE;
__declspec(section ".init") extern int __ROM_SDATA_ADDR;
__declspec(section ".init") extern int __RAM_SDATA_ADDR;

/*__declspec(section ".init") extern char	_heap_addr[];
__declspec(section ".init") extern char _heap_end[];*/

extern void main();

/* The e200z0 core ONLY supports VLE, so make sure we build VLE code! */

__declspec(vle_on)
#pragma function_align 8
asm extern void __start(void)
{
	nofralloc
// initialize GPRs to 0    
 	e_li r0, 0
 	e_li r1, 0
 	e_li r2, 0
	e_li r3, 0
 	e_li r4, 0
 	e_li r5, 0
 	e_li r6, 0
 	e_li r7, 0
 	e_li r8, 0
 	e_li r9, 0
 	e_li r10, 0
 	e_li r11, 0
 	e_li r12, 0
 	e_li r13, 0
 	e_li r14, 0
 	e_li r15, 0
 	e_li r16, 0
 	e_li r17, 0
 	e_li r18, 0
 	e_li r19, 0
 	e_li r20, 0
 	e_li r21, 0
 	e_li r22, 0
 	e_li r23, 0
 	e_li r24, 0
 	e_li r25, 0
 	e_li r26, 0
 	e_li r27, 0
 	e_li r28, 0
 	e_li r29, 0
 	e_li r30, 0
 	e_li r31, 0
    
init_RAM:
   lis r11,__RAM_START_ADDR@h
   ori r11,r11,__RAM_START_ADDR@l 
   lis r12,__RAM_SIZE@h  //get number of loop repetitions (each time writes 32GPRs * 4 bytes)
   ori r12,r12,__RAM_SIZE@l 
   li r14, 4
   divw r12, r12, r14
   li r14, 16
   divw r12, r12, r14
   mtctr r12
   
init_ram_loop:
   stmw r16,0(r11) // write 16 GPRs to RAM
   addi r11,r11,64 // inc the ram ptr; 16 GPRs * 4 bytes = 64
   bdnz init_ram_loop
   
/*--------- Initialized Data - ".data" --------------------------------------  */
DATACOPY:
  lis     r9,       __ROM_DATA_SIZE@ha  // Load upper SRAM load size
  addi    r9,   r9, __ROM_DATA_SIZE@l   // Load lower SRAM load size into R9
  cmpi    r9,   0                       // Compare to see if equal to 0
  beq     SDATACOPY                     // Exit cfg_ROMCPY if size is zero
  mtctr   r9                            // Store no. of bytes to be moved in counter
  lis     r10,      __ROM_DATA_ADDR@h   // Load address of first SRAM load into R10
  addi    r10, r10, __ROM_DATA_ADDR@l   // Load lower address of SRAM load into R10
  subi    r10, r10, 1                   // Decrement address
  lis     r5,       __RAM_DATA_ADDR@h   // Load upper SRAM address into R5
  addi    r5,  r5,  __RAM_DATA_ADDR@l   // Load lower SRAM address into R5
  subi    r5,  r5,  1                   // Decrement address
DATACPYLOOP:
  lbzu    r4,  1(r10)                   // Load data byte at R10 into R4
  stbu    r4,  1(r5)                    // Store R4 data byte into SRAM at R5
  bdnz    DATACPYLOOP                   // Branch if more bytes to load from ROM

/*--------- Initialized Data - ".sdata" --------------------------------------  */
SDATACOPY:
  lis     r9,       __ROM_SDATA_SIZE@ha // Load upper SRAM load size
  addi    r9,   r9, __ROM_SDATA_SIZE@l  // Load lower SRAM load size into R9
  cmpi    r9,   0                       // Compare to see if equal to 0
  beq     ENDCOPY                       // Exit cfg_ROMCPY if size is zero
  mtctr   r9                            // Store no. of bytes to be moved in counter
  lis     r10, __ROM_SDATA_ADDR@h       // Load address of first SRAM load into R10
  addi    r10, r10, __ROM_SDATA_ADDR@l  // Load lower address of SRAM load into R10
  subi    r10, r10, 1                   // Decrement address
  lis     r5,  __RAM_SDATA_ADDR@h       // Load upper SRAM address into R5
  addi    r5,  r5,  __RAM_SDATA_ADDR@l  // Load lower SRAM address into R5
  subi    r5,  r5,  1                   // Decrement address
SDATACPYLOOP:
  lbzu    r4,  1(r10)                   // Load data byte at R10 into R4
  stbu    r4,  1(r5)                    // Store R4 data byte into SRAM at R5
  bdnz    SDATACPYLOOP                  // Branch if more bytes to load from ROM

ENDCOPY:
  
	/* Initialize stack pointer				*/

	lis	r1, _stack_addr@ha
	addi	r1, r1, _stack_addr@l   

  /* Note that we are assuming small data is shared between the cores */
  /* Initialize small data area pointers (EABI)                       */
	lis   r2, _SDA2_BASE_@ha
	addi  r2, r2, _SDA2_BASE_@l
  
	lis   r13, _SDA_BASE_@ha
	addi  r13, r13, _SDA_BASE_@l
  
  /* now call z0's main program (using short branch)... */ 
	bl main

  /* if main returns, just hang here */

here:
  b here

	blr
}
