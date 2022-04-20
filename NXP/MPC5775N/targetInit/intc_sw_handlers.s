#**************************************************************************/
#* FILE NAME: intc_sw_handlers.s            COPYRIGHT (c) Freescale 2012  */
#*                                                All Rights Reserved     */
#* DESCRIPTION:                                                           */
#*        This file creates prolog, epilog for C ISR and enables nested   */
#*        interrupts. This file starts in memory at the beginning of the  */
#*        ".xcptn" section designated by the label "IVOR4Handler".        */
#* WARNING:  This stack frame does not save the SPEs Accumulator, which   */
#*           is required if SPE instructions are used in ISRs.   If SPE   */
#*           instructions are used, the stack frame must include the      */
#*           accumulator, and prologue and epilogue must be modified.     */
#=========================================================================*/
    .section .text_vle 
    .globl TimerInterruptHandler
    .extern TimerInterruptHandler

    .equ  INTC_EOIR0,  0xfc040030  # End Of Interrupt Register address

    .align 4
    .size basicHandler , TimerInterruptHandler_END - basicHandler
    .type basicHandler , @function	
    .globl basicHandler

basicHandler:
prolog:                           # PROLOGUE 
    e_stwu   r1, -0x50 (r1)       # Create stack frame and store back chain
    e_stw    r0, 0x24 (r1)        # Save working registers R0
    mfSRR1 r0                     # Store SRR1 (must be done before enabling EE)
    e_stw    r0, 0x10 (r1)
    mfSRR0 r0                     # Store SRR0 (must be done before enabling EE)
    e_stw    r0, 0x0C (r1)
    mfLR   r0              	# Store LR (Store now since LR will be used for ISR Vector)
    e_stw    r0, 0x14 (r1)

    e_stw    r3, 0x28 (r1)        # Store a working register

    wrteei 0         			  # Set MSR[EE]=1 (must wait a couple clocks after reading IACKR)
    e_stw    r12, 0x4C (r1)       # Store rest of gprs
    e_stw    r11, 0x48 (r1)
    e_stw    r10, 0x44 (r1)
    e_stw    r9,  0x40 (r1)
    e_stw    r8,  0x3C (r1)
    e_stw    r7,  0x38 (r1)
    e_stw    r6,  0x34 (r1)
    e_stw    r5,  0x30 (r1)
    e_stw    r4,  0x2c (r1)  
	
    mfCR   r0                      # Store CR
    e_stw    r0,  0x20 (r1)
    mfXER  r0                      # Store XER
    e_stw    r0,  0x1C (r1)
    mfCTR  r0                      # Store CTR
    e_stw    r0,  0x18 (r1)
								
    e_bl TimerInterruptHandler               # Branch to ISR, but return here

epilog:                            # EPILOGUE

#                                  # STEP 6 :  RESTORE CONTEXT
    mbar 0                         # Ensure interrupt flag has finished clearing
#                                  # before writing to INTC_EIOR

	
    e_lwz    r0, 0x14 (r1)         # Restore LR
    mtLR   r0
    e_lwz    r0, 0x18 (r1)         # Restore CTR
    mtCTR  r0
    e_lwz    r0, 0x1C (r1)         # Restore XER
    mtXER  r0
    e_lwz    r0, 0x20 (r1)         # Restore CR
    mtcrf  0xff, r0
    e_lwz    r5,  0x30 (r1)
    e_lwz    r6,  0x34 (r1)
    e_lwz    r7,  0x38 (r1)
    e_lwz    r8,  0x3C (r1)
    e_lwz    r9,  0x40 (r1)
    e_lwz    r10, 0x44 (r1)
    e_lwz    r11, 0x48 (r1)
    e_lwz    r12, 0x4C (r1)

    wrteei 0                       # Disable interrupts

    se_li     r3,0		
    e_lis   r4, INTC_EOIR0@ha       # Load upper half of EIOR address to r4
    e_add16i  r4,r4, INTC_EOIR0@l      # Load lower half of EIOR address to R4
    e_stw   r3, 0(r4)              # Write 0 to INTC_EOIR0, address 0xFC040030
    
    e_lwz    r3,  0x28 (r1)   	   # Restore r3 after INTC_EOIR0 uses this register
    e_lwz    r4,  0x2C (r1)  	   # Restore r4 after INTC_EOIR0 uses this register

    e_lwz    r0,  0x0C (r1)   	   # Restore SRR0
    mtSRR0 r0                      
    e_lwz    r0,  0x10 (r1)   	   # Restore SRR1
    mtSRR1 r0                      
    e_lwz    r0,  0x24 (r1)   	   # Restore working register
    e_add16i  r1,r1, 0x50    		   # Restore space on stack     e_add2i.  r1, 0x50    	

    se_rfi                         # End of Interrupt - re-enables interrupts.
TimerInterruptHandler_END:
