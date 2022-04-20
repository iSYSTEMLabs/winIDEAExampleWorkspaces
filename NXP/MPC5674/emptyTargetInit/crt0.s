/* vector table section
 * __ASYST_STACK_TOP is defined in lcf file 
 */
  
.section .startupBytes, "ax"
.extern __ASYST_STACK_TOP 
.extern __asyst_main
.extern __RAM_START_ADDR
.extern __RAM_SIZE
.global __asyst_start


  .byte  0x00   #no watchdog (01 for VLE)
  .byte  0x5A   #Boot identifier 
  .byte  0x00
  .byte  0x00
  .long __asyst_start

.section .vectors, "ax" 
__asyst_start:
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
  nop
  
/* init L2RAM */  
init_RAM:
   lis r11,__RAM_START_ADDR@h
   ori r11,r11,__RAM_START_ADDR@l 
   lis r12,__RAM_SIZE@h  #get number of loop repetitions (each time writes 32GPRs * 4 bytes)
   ori r12,r12,__RAM_SIZE@l 
   li r14, 4
   divw r12, r12, r14
   li r14, 16
   divw r12, r12, r14
   mtctr r12
   
init_ram_loop:
   stmw r16,0(r11)  #write 16 GPRs to RAM
   addi r11,r11,64  #inc the ram ptr; 16 GPRs * 4 bytes = 64
   bdnz init_ram_loop 

/* calculate address of _Lstack_end */
  bl _Lref1                  # get current address
_Lref1:
	mflr r4                    # r4=address of _Lref1
	lwz	r5,(_Lref2-_Lref1)(r4) # r5=offset to first constant
	add	r5,r5,r4		           # r5=address of first consrant

/* init stack pointer */
  lwz sp,(_Lstack_end-_Lconst_table)(r5)
  
/* go to crt1.c */
  bl __asyst_main  
  
_Lref2:                           
  .long _Lconst_table-_Lref1   /* _Lref2 holds offset between _Lconst_start and PC obtained when _start is called */
_Lconst_table:           
_Lstack_end:
  .long __ASYST_STACK_TOP

.global otm
otm:
 mtspr 48,r3
 blr


.end


