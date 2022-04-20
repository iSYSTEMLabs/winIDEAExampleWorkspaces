.section .text_vle
.globl execute_wait

#************************************************************************/
# FUNCTION     : execute_wait                                           */
# PURPOSE      : This function saves the context of the core to the stack    */
#	       : and the stack point into the CRP and executes wait	*/
# INPUT NOTES  : None							*/
# RETURN NOTES : None                                                   */
#************************************************************************/
execute_wait:
    e_subi	r1, r1, 0x94	  #-- Allocate space on stack 0x94 = 148 r2--r31 + 7 SPRs
		e_stmw	r2, 0(r1) #-- Save registers r2-r31 to stack
		mfSRR1	r25
		mfSRR0	r26
		mfLR	r27
		mfmsr	r28
		mfCR	r29
		mfXER	r30
		mfCTR	r31
		e_stmw	r25, 0x78(r1)	#-- Store SPR data to stack
		e_lis	r3,0x1234
    e_li r4,0x5678
		se_or	r3,r4
		e_lis	r4,0xFFFE
    e_li r5,0xC058
		se_or	r4,r5 #-- CRP.RECPRTR address
		e_stw	r1,0x0(r4)	#-- Save stack pointer to CRP to be preserved during LPM
    .long	0x7C00007C	#-- Wait instruction
