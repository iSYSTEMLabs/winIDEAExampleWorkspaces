.section ".init_L2RAM","axv"
.global init_L2RAM
.vle


init_L2RAM:
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

  e_lis r11,0x4000 // base address of the L2SRAM, 64-bit word aligned
  e_ori r11,r11,0  // not needed for this address but could be forothers
  e_li r12,128     // loop counter to get all of L2SRAM;
                  // 128 * 128= 16k
  mtctr r12
init_l2ram_loop:
  e_stmw r0,0(r11)      // write all 32 GPRs to L2SRAM
  e_add16i r11,r11,128  // inc the ram ptr; 32 GPRs * 4 bytes = 128
  e_bc 2,0,init_l2ram_loop  // loop for 64k of L2SRAM
  
se_blr

