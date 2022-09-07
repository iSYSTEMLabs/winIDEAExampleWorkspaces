.section .interrupt_table,text_vle

.equ INTC0_IACKR, 0xFFF48010
.equ INTC0_EOIR, 0xFFF48018

.extern TimerInterruptHandler
.globl irqTable

.align 16
irqTable:
irq0:
  e_b irq0
  
.align 16
irq1:
  e_b irq1
  
.align 16
irq2:
  e_b irq2
  
.align 16
irq3:
  e_b irq3
  
.align 16
irq4:
  e_b irqRoutine

.align 16
irq6:
  e_b irq6
  
.align 16
irq7:
  e_b irq7
  
# We are only using one interrupt so we don't have to
# check which interrupt channel triggered it
irqRoutine:
  # Save registers on stack
  e_stwu r1, -0x50(r1)
  se_stw r0, 0x24(r1)
  se_stw r3, 0x28(r1)
  se_stw r4, 0x2C(r1)
  se_stw r5, 0x30(r1)
  se_stw r6, 0x34(r1)
  se_stw r7, 0x38(r1)
  e_stw r8, 0x3C(r1)
  e_stw r9, 0x40(r1)
  e_stw r10, 0x44(r1)
  e_stw r11, 0x48(r1)
  e_stw r12, 0x4C(r1)
  
  se_mflr r3
  se_stw r3, 0x14(r1)
  se_mfctr r3
  se_stw r3, 0x18(r1)
  mfxer r3
  se_stw r3, 0x1C(r1)
  mfcr r3
  se_stw r3, 0x20(r1)
  
  # Get function address
  e_lis r3, INTC0_IACKR@ha
  e_lwz r3, INTC0_IACKR@l(r3)
  
  # Call interrupt handler directly because we only have one
  se_mtlr r3
  e_bl TimerInterruptHandler
  mbar 0
  
  # Tell interrupt controller we're finished
  e_lis r3, INTC0_EOIR@ha
  se_li r4, 0
  wrteei 0
  e_stw r4, INTC0_EOIR@l(r3)

  # Restore registers from stack
  se_lwz r3, 0x14(r1)
  se_mtlr r3
  se_lwz r3, 0x18(r1)
  se_mtctr r3
  se_lwz r3, 0x1C(r1)
  mtxer r3
  se_lwz r3, 0x20(r1)
  mtcrf 0xFF, r3
  
  se_lwz r0, 0x24(r1)
  se_lwz r3, 0x28(r1)
  se_lwz r4, 0x2C(r1)
  se_lwz r5, 0x30(r1)
  se_lwz r6, 0x34(r1)
  se_lwz r7, 0x38(r1)
  e_lwz r8, 0x3C(r1)
  e_lwz r9, 0x40(r1)
  e_lwz r10, 0x44(r1)
  e_lwz r11, 0x48(r1)
  e_lwz r12, 0x4C(r1)
  e_add16i r1, r1, 0x50
  se_rfi
  