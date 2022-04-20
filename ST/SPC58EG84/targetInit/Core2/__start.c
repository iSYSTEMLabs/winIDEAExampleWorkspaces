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
__declspec(section ".init") extern int __ROM_DATA_SIZE;
__declspec(section ".init") extern int __ROM_DATA_ADDR;
__declspec(section ".init") extern int __RAM_DATA_ADDR;
__declspec(section ".init") extern int __ROM_SDATA_SIZE;
__declspec(section ".init") extern int __ROM_SDATA_ADDR;
__declspec(section ".init") extern int __RAM_SDATA_ADDR;
__declspec(section ".init") extern int __IVPR;
__declspec(section ".init") extern int __RAM_START_ADDR;
__declspec(section ".init") extern int __RAM_SIZE;
__declspec(section ".init") extern int __ROM_SDATA2_SIZE;
__declspec(section ".init") extern int __ROM_SDATA2_ADDR;
__declspec(section ".init") extern int __RAM_SDATA2_ADDR;

extern void main();

/* The e200z0 core ONLY supports VLE, so make sure we build VLE code! */

__declspec(vle_on)
#pragma function_align 8
asm extern void __start(void)
{
	nofralloc
  /*set all core registers to 0*/
  li  r0,0                // load immediate- zero to register r0
  mr	r1, r0              // move register r0 to r1
  mr	r2, r0              // move register r0 to r2
  mr	r3, r0              // move register r0 to r3
  mr	r4, r0              // move register r0 to r4
  mr	r5, r0              // move register r0 to r5
  mr	r6, r0              // move register r0 to r6
  mr	r7, r0              // move register r0 to r7
  mr	r8, r0              // move register r0 to r8
  mr	r9, r0              // move register r0 to r9
  mr	r10, r0             // move register r0 to r10
  mr	r11, r0             // move register r0 to r11
  mr	r12, r0             // move register r0 to r12
  mr	r13, r0             // move register r0 to r13
  mr	r14, r0             // move register r0 to r14
  mr	r15, r0             // move register r0 to r15
  mr	r16, r0             // move register r0 to r16
  mr	r17, r0             // move register r0 to r17
  mr	r18, r0             // move register r0 to r18
  mr	r19, r0             // move register r0 to r19
  mr	r20, r0             // move register r0 to r20
  mr	r21, r0             // move register r0 to r21
  mr	r22, r0             // move register r0 to r22
  mr	r23, r0             // move register r0 to r23
  mr	r24, r0             // move register r0 to r24
  mr	r25, r0             // move register r0 to r25
  mr	r26, r0             // move register r0 to r26
  mr	r27, r0             // move register r0 to r27
  mr	r28, r0             // move register r0 to r28
  mr	r29, r0             // move register r0 to r29
  mr	r30, r0             // move register r0 to r30
  mr	r31, r0             // move register r0 to r31
  
  nop                     //no operation performed, increase PC for 4
  nop                     //no operation performed, increase PC for 4
  
  /*Set SFRs to zero */
	mtspr   1, 		  r1 	    // move r1 to sfr Integer exception register (XER)
	mtcrf   0xFF, 	r1      // move r1 to Conditional register
	mtspr   CTR, 		r1      // move r1 to Count register
	mtspr   SPRG0, 	r1      // move r1 to Software use SPR 0
	mtspr   SPRG1, 	r1      // move r1 to Software use SPR 1
	mtspr   SPRG2, 	r1      // move r1 to Software use SPR 2
	mtspr   SPRG3, 	r1      // move r1 to Software use SPR 3
  mtspr   USPRG0, r1      // move r1 to Software use USPR 0
  
  /*Set intterrupt registers to zero*/
	mtspr   SRR0, 	r1      // move r1 to Save/restore register 0
	mtspr   SRR1, 	r1      // move r1 to Save/restore register 1
	mtspr   CSRR0, 	r1      // move r1 to Critical save/restore register 0 
	mtspr   CSRR1, 	r1      // move r1 to Critical save/restore register 1 
	mtspr   MCSRR0, r1      // move r1 to Machine check save/restore register 0
	mtspr   MCSRR1, r1      // move r1 to Machine check save/restore register 1
	mtspr   DEAR, 	r1      // move r1 to Data exception address register
	mtspr   IVPR, 	r1      // move r1 to Interrupt vector prefix register
	
	mtspr   62, 		r1 	    // move r1 to Exception syndrome register (ESR)
	mtspr   8,		  r31     // move r31 to Link Register
 	li      r1,     0       // load immediate zero to r1
 	li      r13,    0       // load immediate zero to r13
  
  /* Initialize RAM				*/
init_RAM:
   lis r11,__RAM_START_ADDR@ha    //Load Immediate Shifted adjusted high 16-bit of the RAM_START addres to r11
   ori r11,r11,__RAM_START_ADDR@l //OR Immediate r11 with low 16-bit of the RAM_START addres, store it into r11
   lis r12,__RAM_SIZE@h           //get number of loop repetitions (each time writes 32GPRs * 4 bytes) high-16bit, store into r12
   ori r12,r12,__RAM_SIZE@l       //get number of loop repetitions (each time writes 32GPRs * 4 bytes) low-16bit, store into r12
   li r14, 4                      //Load Immediate 4 into r14
   divw r12, r12, r14             //Devide r12 with r14, store into r12
   li r14, 16                     //Load Immediate 16 into r14
   divw r12, r12, r14             //Devide r12 with r14, store into r12
   mtctr r12                      //Move r12 to Count register
 
  init_ram_loop:
   stmw r16,0(r11)              // write 16 GPRs to RAM
   addi r11,r11,64              // inc the ram ptr; 16 GPRs * 4 bytes = 64
   bdnz init_ram_loop 

	/* Initialize stack pointer				*/
	lis	r1, _stack_addr@ha        //Load Immediate Shifted adjusted high 16-bit of the stack addres to r1
	addi	r1, r1, _stack_addr@l   //Add Immediate low-16bit of stack addres to r1, store to r1

  /* Note that we are assuming small data is shared between the cores */
  /* Initialize small data area pointers (EABI)                       */
	lis   r2, _SDA2_BASE_@ha      //Load Immediate Shifted adjusted high 16-bit of the _SDA2_BASE addres to r2
	addi  r2, r2, _SDA2_BASE_@l   //Add Immediate low-16bit of stack addres to r2, store to r2
  
	lis   r13, _SDA_BASE_@ha      //Load Immediate Shifted adjusted high 16-bit of the _SDA_BASE addres to r13
	addi  r13, r13, _SDA_BASE_@l  //Add Immediate low-16bit of stack addres to r13, store to r13
  

/*--------- Initialized Data - ".data" --------------------------------------  */
DATACOPY:
  lis     r9,       __ROM_DATA_SIZE@ha  // Load upper ROM load size
  addi    r9,   r9, __ROM_DATA_SIZE@l   // Load lower ROM load size into R9
  cmpi    r9,   0                       // Compare to see if equal to 0
  beq     SDATACOPY                     // Exit cfg_ROMCPY if size is zero
  mtctr   r9                            // Store no. of bytes to be moved in counter
  lis     r10,      __ROM_DATA_ADDR@ha   // Load address of first ROM load into R10
  addi    r10, r10, __ROM_DATA_ADDR@l   // Load lower address of ROM load into R10
  subi    r10, r10, 1                   // Decrement address
  lis     r5,       __RAM_DATA_ADDR@ha   // Load upper SRAM address into R5
  addi    r5,  r5,  __RAM_DATA_ADDR@l   // Load lower SRAM address into R5
  subi    r5,  r5,  1                   // Decrement address
DATACPYLOOP:
  lbzu    r4,  1(r10)                   // Load data byte at R10 into R4
  stbu    r4,  1(r5)                    // Store R4 data byte into SRAM at R5
  bdnz    DATACPYLOOP                   // Branch if more bytes to load from ROM

/*--------- Initialized Data - ".sdata" --------------------------------------  */
SDATACOPY:
  lis     r9,       __ROM_SDATA_SIZE@ha // Load upper ROM load size
  addi    r9,   r9, __ROM_SDATA_SIZE@l  // Load lower ROM load size into R9
  cmpi    r9,   0                       // Compare to see if equal to 0
  beq     ENDCOPY                       // Exit cfg_ROMCPY if size is zero
  mtctr   r9                            // Store no. of bytes to be moved in counter
  lis     r10,      __ROM_SDATA_ADDR@ha  // Load address of first ROM load into R10  
  addi    r10, r10, __ROM_SDATA_ADDR@l  // Load lower address of ROMload into R10
  subi    r10, r10, 1                   // Decrement address
  lis     r5,       __RAM_SDATA_ADDR@ha  // Load upper SRAM address into R5
  addi    r5,  r5,  __RAM_SDATA_ADDR@l  // Load lower SRAM address into R5
  subi    r5,  r5,  1                   // Decrement address
SDATACPYLOOP:
  lbzu    r4,  1(r10)                   // Load data byte at R10 into R4
  stbu    r4,  1(r5)                    // Store R4 data byte into SRAM at R5
  bdnz    SDATACPYLOOP                  // Branch if more bytes to load from ROM

ENDCOPY:

  /* now call z0's main program (using short branch)... */ 
	bl main

  /* if main returns, just hang here */

here:
  b here

	blr
}


