#***************************************************************************/
#* FILE NAME:                               COPYRIGHT (c) Freescale 2013   */
#* cores_0-2_IVOR4_handlers.s                     All Rights Reserved      */
#* DESCRIPTION:                                                            */
#*        This file creates prolog, epilog for C ISR and enables nested    */
#*        interrupts. This file starts in memory at the beginning of the   */
#*        ".xcptn" section designated by the label "IVOR4Handler".         */
#* WARNING:  This stack frame does not save the SPEs Accumulator, which    */
#*           is required if SPE instructions are used in ISRs.   If SPE    */
#*           instructions are used, the stack frame must include the       */
#*           accumulator, and prologue and epilogue must be modified.      */
#========================================================================= */
#*                                                                         */
#* REV      AUTHOR       DATE       DESCRIPTION OF CHANGE                  */
#* ---   -----------   ----------   ---------------------                  */
#* 1.0:  S. Mihalik    23/Apr/04    Initial version                        */
#* 1.1:  B. Terry      29/Jul/04    Modified read of IACKR using           */
#*                                  pointer to determine vector  address.  */
#* 1.2   G. Jackson    30/Jul/04    Added ".xcptn" section designation     */               timer
#*                                   for placement into mpc5500cfg.        */
#* 1.3   G. Jackson    12/Oct/04    Green Hills now does not require       */
#*                                    quotation marks around the section   */
#*                                  Added syntax to generate symbols for   */
#*                                    debug.                               */
#* 1.4   G. Jackson    18/Oct/04    Epilogue move of restoration for r3,   */
#*                                    and r4 until after INTC_EOIR.        */
#* 1.5   C. Baker      19/Jul/06    Added comments                         */
#* 1.6   R. Moran      23/Feb/07    Modified instructions to VLE           */
#* 1.7   R. Moran      10/Dec/08    Update formatting                      */
#* 1.8   J.C., S.M.    13/Sep/13    New prologue, epilogue implementation  */   
#***************************************************************************/

 # Indent one space to prevent GCC warning
 
 # STACK FRAME DESIGN: Depth: 20 words (0x50, or 80 bytes)
 
 #            *************   Differences from exisitng stack frame:
 #   0x2C-50  *  GPR4-12  *    -
 #   0x28     *  GPR3     *    -
 #   0x24     *  GPR0     *    -
 #   0x20     *  XER      *    CR
 #   0x1C     *  CTR      *    XER
 #   0x18     *  LR       *    CTR
 #   0x14     *  CR       *    LR
 #   0x10     *  SRR1     *    -
 #   0x0C     *  SRR0     *    -
 #   0x08     *  origGPR3 *    padding
 #   0x04     *  padding  *    reserved for LR of calling function
 #   0x00     *  SP       *    -
 #            ************* 
    .file "intc_sw_handlers.s"    # We need this definition, without this .function definition does not work
    .section .text_vle 
    .globl  TimerInterruptHandler, RtiTimerInterruptHandler
    .global DebugInterruptBr
    
    .extern InterruptHandler
    .extern RtiInterruptRoutine

    .equ  INTC_1_IACKR2, 0xF4044028  #  CPU 2 INTC 1 Interrupt Acknowledge Reg address
    .equ  INTC_1_EOIR2,  0xF4044038  #  CPU 2 INTC 1 End Of Interrupt Reg address
    
    .align 4
     
    .function "TimerInterruptHandler", TimerInterruptHandler, TimerInterruptHandler_END - TimerInterruptHandler

TimerInterruptHandler:
prolog_core_2:                     # PROLOGUE 
    e_stwu   r1,  -0x50 (r1)       # Create stack frame and store back chain                                   
    se_stw   r3,  0x28 (r1)        # Save working registers R3   
    mfSRR1   r3                    # Store SRR1 (must be done before enabling EE)
    se_stw   r3,  0x10 (r1)         
    mfSRR0   r3                    # Store SRR0 (must be done before enabling EE)
    se_stw   r3,  0x0C (r1)                                           
    e_lis    r3,  INTC_1_IACKR2@ha    # Store address of IACKR in r3
    e_lwz    r3,  INTC_1_IACKR2@l(r3) # Store contents of IACKR in r3 (this is vector table address)                                       
    wrteei   0                       # Set MSR[EE]=1 (must wait a couple clocks after reading IACKR)    
    se_lwz   r3,  0x0(r3)          # Read ISR address from ISR Vector Table using pointer                                       
    se_stw   r4,  0x2c (r1)        # Store another working register                                   
    se_mfLR  r4                    # Store LR (Store now since LR will be used for ISR Vector)
    se_stw   r4,  0x14 (r1)                                                                              
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
#    wrteei   1                               # Branch to ISR, with return to next instruction (epilogue)
    e_bl     InterruptHandler      
    
epilog_core_0:                     # EPILOGUE
    se_lwz   r3,  0x14 (r1)        # Restore LR
    se_mtLR  r3
    se_lwz   r3,  0x18 (r1)        # Restore CTR
    se_mtCTR r3
    se_lwz   r3,  0x1C (r1)        # Restore XER
    mtXER    r3
    se_lwz   r3,  0x20 (r1)        # Restore CR
    mtcrf    0xff, r3    
    se_lwz   r0,  0x24 (r1)        # Restore GPRs
    e_lwz    r12, 0x4C (r1)   
    mbar     0                     # Ensure interrupt flag has finished clearing
                                   # before writing to INTC_EIOR
                                   # INTC_EOIR2, address 0xFC040038 of INTC_1
#    e_lis    r3,  INTC_1_EOIR2@ha # Load upper half of EIOR address to r3                                                                                                                                                 
#    e_li     r4,  0x0  
    wrteei   0                     # Disable interrupts
    se_lwz   r5,  0x30 (r1)
    se_lwz   r6,  0x34 (r1)
    se_lwz   r7,  0x38 (r1)
    e_lwz    r8,  0x3C (r1)
    e_lwz    r9,  0x40 (r1)
    e_lwz    r10, 0x44 (r1)
    e_lwz    r11, 0x48 (r1)
    
 #   se_stw   r4,  INTC_1_EOIR2@l(r3)# Store to  EIOR2, informing INTC for lowering priority address to r3 and

    e_lis    r3,  INTC_1_EOIR2@ha    # form adjusted upper half of INTC_EOIR2 address
    e_li     r4,  0x0                # form 0 to write to INTC_EOIRn
    wrteei   0                       # disable processor recognition of interrupts
    e_stw    r4,  INTC_1_EOIR2@l(r3) # store to INTC_EOIRn, informing INTC to lower
    
    se_lwz   r4,  0x2C (r1)          # restore r4
    se_lwz   r3,  0x0C (r1)          # Restore SRR0
    mtSRR0   r3                      
    se_lwz   r3,  0x10 (r1)          # Restore SRR1
    mtSRR1   r3                      
    se_lwz   r3,  0x28 (r1)          # Restore working register    
    e_add16i r1, r1, 0x50            # Restore space on stack
    wrteei   1

    se_rfi                         # End of Interrupt - re-enables interrupts.
TimerInterruptHandler_END:
    se_nop
    
    
RtiTimerInterruptHandler:
rti_prolog_core_2:                     # PROLOGUE 
    e_stwu   r1,  -0x50 (r1)       # Create stack frame and store back chain                                   
    se_stw   r3,  0x28 (r1)        # Save working registers R3   
    mfSRR1   r3                    # Store SRR1 (must be done before enabling EE)
    se_stw   r3,  0x10 (r1)         
    mfSRR0   r3                    # Store SRR0 (must be done before enabling EE)
    se_stw   r3,  0x0C (r1)                                           
    e_lis    r3,  INTC_1_IACKR2@ha    # Store address of IACKR in r3
    e_lwz    r3,  INTC_1_IACKR2@l(r3) # Store contents of IACKR in r3 (this is vector table address)                                       
    wrteei   0                       # Set MSR[EE]=1 (must wait a couple clocks after reading IACKR)    
    se_lwz   r3,  0x0(r3)          # Read ISR address from ISR Vector Table using pointer                                       
    se_stw   r4,  0x2c (r1)        # Store another working register                                   
    se_mfLR  r4                    # Store LR (Store now since LR will be used for ISR Vector)
    se_stw   r4,  0x14 (r1)                                                                               
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
#    wrteei   1                               # Branch to ISR, with return to next instruction (epilogue)
    e_bl     RtiInterruptRoutine      
    
rti_epilog_core_0:                     # EPILOGUE
    se_lwz   r3,  0x14 (r1)        # Restore LR
    se_mtLR  r3
    se_lwz   r3,  0x18 (r1)        # Restore CTR
    se_mtCTR r3
    se_lwz   r3,  0x1C (r1)        # Restore XER
    mtXER    r3
    se_lwz   r3,  0x20 (r1)        # Restore CR
    mtcrf    0xff, r3    
    se_lwz   r0,  0x24 (r1)        # Restore GPRs
#    se_lwz   r4,  0x2C (r1)
    e_lwz    r12, 0x4C (r1)   
    mbar     0                     # Ensure interrupt flag has finished clearing
                                   # before writing to INTC_EIOR
                                   # INTC_EOIR2, address 0xFC040038 of INTC_1
#    e_lis    r3,  INTC_1_EOIR2@ha # Load upper half of EIOR address to r3                                                                                                                                                 
#    e_li     r4,  0x0  
    wrteei   0                     # Disable interrupts
    se_lwz   r5,  0x30 (r1)
    se_lwz   r6,  0x34 (r1)
    se_lwz   r7,  0x38 (r1)
    e_lwz    r8,  0x3C (r1)
    e_lwz    r9,  0x40 (r1)
    e_lwz    r10, 0x44 (r1)
    e_lwz    r11, 0x48 (r1)
    
 #   se_stw   r4,  INTC_1_EOIR2@l(r3)# Store to  EIOR2, informing INTC for lowering priority address to r3 and

    e_lis    r3,  INTC_1_EOIR2@ha    # form adjusted upper half of INTC_EOIR2 address
    e_li     r4,  0x0                # form 0 to write to INTC_EOIRn
    wrteei   0                       # disable processor recognition of interrupts
    e_stw    r4,  INTC_1_EOIR2@l(r3) # store to INTC_EOIRn, informing INTC to lower
    
    se_lwz   r4,  0x2C (r1)          # restore r4
    se_lwz   r3,  0x0C (r1)          # Restore SRR0
    mtSRR0   r3                      
    se_lwz   r3,  0x10 (r1)          # Restore SRR1
    mtSRR1   r3                      
    se_lwz   r3,  0x28 (r1)          # Restore working register    
    e_add16i r1, r1, 0x50            # Restore space on stack
    wrteei   1

    se_rfi                         # End of Interrupt - re-enables interrupts.
RtiTimerInterruptHandler_END:
    se_nop   