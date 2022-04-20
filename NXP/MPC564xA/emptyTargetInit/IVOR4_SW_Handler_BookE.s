  .text
  .globl    IVOR4_Handler
  .section  .exec_vect
  .align 4                      # Align IVOR handlers on a 16 byte boundary
                                # GHS, Cygnus, Diab(default) use .align 4; CodeWarrior .align 16
  
    # On Dual Core this register is treated as Processor 0
    .equ  INTC_IACKR, 0xfff48010  # Interrupt Acknowledge Register address
    .equ  INTC_EOIR,  0xfff48018      # End Of Interrupt Reg. addr.
     
IVOR4_Handler:
    stwu    r1, -0x50 (r1)      # Create stack frame and store back chain

    stw     r3,  0x28 (r1)      # Store a working register
    mfsrr0  r3                  # Store SRR0:1 (must be done before enabling EE)
    stw     r3,  0x0C (r1)
    mfsrr1  r3                  
    stw     r3,  0x10 (r1)

    lis     r3, INTC_IACKR@ha   # Read pointer into ISR Vector Table & store in r3
    lwz     r3, INTC_IACKR@l(r3)
    lwz     r3, 0x0(r3)         # Read ISR address from ISR Vector Table using pointer
    wrteei  1                   # Set MSR[EE]=1 (must wait a couple clocks after reading IACKR)

    stw     r4,  0x2C (r1)      # Store a second working register
    mflr    r4                  # Store LR (LR will be used for ISR Vector)
    stw     r4,  0x14 (r1)
    mtlr    r3                  # Store ISR address to LR to use for branching later

    stw     r12, 0x4C (r1)      # Store rest of gprs
    stw     r11, 0x48 (r1)
    stw     r10, 0x44 (r1)
    stw     r9,  0x40 (r1)
    stw     r8,  0x3C (r1)
    stw     r7,  0x38 (r1)
    stw     r6,  0x34 (r1)
    stw     r5,  0x30 (r1)
    stw     r0,  0x24 (r1)    
    mfcr    r3                  # Store CR
    stw     r3,  0x20 (r1)
    mfxer   r3                  # Store XER
    stw     r3,  0x1C (r1)
    mfctr   r3                  # Store CTR
    stw     r3,  0x18 (r1)
                                    
    blrl                        # Branch to ISR, but return here

epilog:                         # EPILOGUE
    lwz     r3,  0x14 (r1)      # Restore LR
    mtlr    r3
    lwz     r3,  0x18 (r1)      # Restore CTR
    mtctr   r3
    lwz     r3,  0x1C (r1)      # Restore XER
    mtxer   r3
    lwz     r3,  0x20 (r1)      # Restore CR
    mtcrf   0xff, r3
    lwz     r0,  0x24 (r1)      # Restore other gprs except working registers
    lwz     r5,  0x30 (r1)
    lwz     r6,  0x34 (r1)
    lwz     r7,  0x38 (r1)
    lwz     r8,  0x3C (r1)
    lwz     r9,  0x40 (r1)
    lwz     r10, 0x44 (r1)
    lwz     r11, 0x48 (r1)
    lwz     r12, 0x4C (r1)
    eieio                       # Ensure store to clear interrupt's flag bit has completed
    lis     r3, INTC_EOIR@ha    # Load upper half of EIOR address to r3
    li      r4, 0       
    wrteei  0                   # Disable interrupts for rest of handler
    stw     r4, INTC_EOIR@l(r3) # Write 0 to INTC_EOIR 
    lwz     r3,  0x0C (r1)      # Restore SRR0
    mtsrr0  r3
    lwz     r3,  0x10 (r1)      # Restore SRR1
    mtsrr1  r3
    lwz     r4,  0x2C (r1)      # Restore working registers
    lwz     r3,  0x28 (r1)      
    addi    r1, r1, 0x50        # Delete stack frame
    rfi                         # End of Interrupt
    