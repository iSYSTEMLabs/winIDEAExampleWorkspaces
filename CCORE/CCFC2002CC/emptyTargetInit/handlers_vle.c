extern void InterruptRoutine();

#define INTC_EOIR_PRC0	 0xfff48018
#define INTC_EOIR       0xfff48018

__declspec(vle_on)
asm void TimerInterruptHandler()
{
  nofralloc
  e_stwu  r1, -0x50 (r1)
  se_stw  r3,  0x28 (r1)
  
  mfsrr0  r3
  se_stw  r3,  0x0C (r1)
  mfsrr1  r3				  	
  se_stw  r3,  0x10 (r1)

  wrteei  1
  se_stw  r4,  0x2C (r1)
  se_mflr r4
  se_stw  r4,  0x14 (r1)
  se_mtlr r3

  e_stw   r12, 0x4C (r1)
  e_stw   r11, 0x48 (r1)
  e_stw   r10, 0x44 (r1)
  e_stw   r9,  0x40 (r1)
  e_stw   r8,  0x3C (r1)
  se_stw  r7,  0x38 (r1)
  se_stw  r6,  0x34 (r1)
  se_stw  r5,  0x30 (r1)
  se_stw  r0,  0x24 (r1)	  
  mfcr    r3
  se_stw  r3,  0x20 (r1)
  mfxer   r3
  se_stw  r3,  0x1C (r1)
  se_mfctr  r3
  se_stw  r3,  0x18 (r1)
  
  se_li r0, 1
  e_lis r9, 0xC3FF
  e_lwz r8, 0x011C (r9)
  e_rlwimi r8, r0, 0, 31, 31
  e_stw r8, 0x011C (r9)
  
  e_bl InterruptRoutine
  
  se_lwz  r3,  0x14 (r1)	                    
  se_mtlr r3
  se_lwz  r3,  0x18 (r1)
  se_mtctr r3
  se_lwz  r3,  0x1C (r1)
  mtxer   r3
  se_lwz  r3,  0x20 (r1)
  mtcrf   0xff, r3
  se_lwz  r0,  0x24 (r1)
  se_lwz  r5,  0x30 (r1)
  se_lwz  r6,  0x34 (r1)
  se_lwz  r7,  0x38 (r1)
  e_lwz   r8,  0x3C (r1)
  e_lwz   r9,  0x40 (r1)
  e_lwz   r10, 0x44 (r1)
  e_lwz   r11, 0x48 (r1)
  e_lwz   r12, 0x4C (r1)
  mbar    0
  
  e_lis   r3, INTC_EOIR@ha

  se_li    r4, 0
  
  wrteei  0
  
  e_stw   r4, INTC_EOIR@l(r3)
  
  se_lwz   r3,  0x0C (r1)
  mtsrr0  r3
  se_lwz  r3,  0x10 (r1)
  mtsrr1  r3
  se_lwz  r4,  0x2C (r1)
  se_lwz  r3,  0x28 (r1)		
  e_add16i r1, r1, 0x50
 
  se_rfi
}