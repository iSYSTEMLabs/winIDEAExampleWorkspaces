# This assembly file contains the prolog and epilog for the PIT Interrupt Service Routine,
# which is used as a hardware interrupt

.file "hw_isr.s"

.section .text_vle
.align 4

.globl TimerInterruptHandler
.extern TimerInterruptHandlerC

.equ INTC_EOIR,  0xfc040034

.function "TimerInterruptHandler",TimerInterruptHandler,TimerInterruptHandler_END-TimerInterruptHandler

TimerInterruptHandler:
prolog:								# PROLOGUE
  e_stwu   r1, -0x50 (r1)        # Create stack frame and store back chain                                   
  se_stw   r3, 0x28 (r1)         # Save working registers R3   
  mfSRR1   r3                    # Store SRR1 (must be done before enabling EE)
  se_stw   r3, 0x10 (r1)         
  mfSRR0   r3                    # Store SRR0 (must be done before enabling EE)
  se_stw   r3, 0x0C (r1)                                    
  
  wrteei 1                       # Set MSR[EE]=1 (must wait a couple clocks after reading IACKR)    
  se_lwz   r3, 0x0(r3)           # Read ISR address from ISR Vector Table using pointer                                       
  se_stw   r4,  0x2c (r1)        # Store another working register                                   
  se_mfLR  r4                    # Store LR (Store now since LR will be used for ISR Vector)
  se_stw   r4, 0x14 (r1)                                            
  se_mtLR  r3                    # Store ISR address (from IACKR) to LR to use for branching later
  
  e_stw    r12, 0x4C (r1)        # Store rest of gprs
  e_stw    r11, 0x48 (r1)
  e_stw    r10, 0x44 (r1)
  e_stw    r9,  0x40 (r1)
  e_stw    r8,  0x3C (r1)
  se_stw   r7,  0x38 (r1)
  se_stw   r6,  0x34 (r1)
  se_stw   r5,  0x30 (r1)
  se_stw   r0,  0x24 (r1)    
  
  mfCR     r3                    # Store CR
  se_stw   r3,  0x20 (r1)
  mfXER    r3                    # Store XER
  se_stw   r3,  0x1C (r1)
  se_mfCTR r3                    # Store CTR
  se_stw   r3,  0x18 (r1)
  
  # Branch to ISR, with return to next instruction (epilogue)
  e_bl     TimerInterruptHandlerC      

epilog:								# EPILOGUE

	e_lwz	r0, 0x14 (r1)			# Restore LR
	mtLR	r0
	e_lwz	r0, 0x18 (r1)			# Restore CTR
	mtCTR	r0
	e_lwz	r0, 0x1C (r1)			# Restore XER
	mtXER	r0
	e_lwz	r0, 0x20 (r1)			# Restore CR
	mtcrf	0xff, r0
	e_lwz	r5,  0x30 (r1)	  # Restore GPR[12:5]
	e_lwz	r6,  0x34 (r1)
	e_lwz	r7,  0x38 (r1)
	e_lwz	r8,  0x3C (r1)
	e_lwz	r9,  0x40 (r1)
	e_lwz	r10, 0x44 (r1)
	e_lwz	r11, 0x48 (r1)
	e_lwz	r12, 0x4C (r1)

	mbar	0						# Ensure interrupt flag has finished clearing before writing to INTC_EIOR
	e_lis	r3, INTC_EOIR@ha		# write EOIR to signal end of IR
	e_li	r4, 0
  wrteei	0						      # Disable interrupts
	e_stw	r4, INTC_EOIR@l(r3)

	e_lwz	r3, 0x0C (r1)			  # Restore SRR0
	mtsrr0	r3
	e_lwz	r3, 0x10 (r1)			  # Restore SRR1
	mtsrr1	r3

	e_lwz	r4, 0x2C (r1)			  # Restore GPR[4,3,0]
	e_lwz	r3, 0x28 (r1)
	e_lwz	r0, 0x24 (r1)

	e_addi	r1, r1, 0x50			# Restore stack pointer

	se_rfi
TimerInterruptHandler_END:
  se_nop