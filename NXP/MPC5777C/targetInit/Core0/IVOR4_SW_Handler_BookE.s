#**********************************************************************************************/
#* FILE NAME:                                                    COPYRIGHT (c) Freescale 2008 */
#* IVOR4_SW_Handler_BookE.s                                                All Rights Reserved */
#* DESCRIPTION:                                                                               */
#* This file creates prolog, epilog for C ISR and enables nested interrupts. This file starts */
#* in memory designated by the label "IVOR4Handler".                                          */
#* WARNING:  This stack frame does not save the SPEs Accumulator, which is required if SPE    */
#*           instructions are used in ISRs.   If SPE instructions are used, the stack frame   */
#*           must include the accumulator, and prologue and epilogue must be modified.        */
#=============================================================================================*/
#*                                                                                            */
#* REV      AUTHOR       DATE       DESCRIPTION OF CHANGE                                     */
#* ---   -----------   ----------   ---------------------                                     */
#  1.0  Apr 23  2004   S Mihalik                                                              */
#  1.1  Aug 2   2004   S Mihalik   Delayed writing to EOIR until after disabling EE in epilog */
#  1.2  Sept 8  2004   S Mihalik   Optimized & corrected r3,r4 restore sequence from rev 1.1  */
#  1.2  Sept 21 2004   S Mihalik   Optimized by minimizing time interrupts are disabled       */
#  1.3  Jul  2  2007   S Mihalik   Changes for MPC551x and mapped to .ivor_handlers section   */
#  1.4  Dec 10  2008   R Moran     Modified format for MPC5XXX template, renamed file         */
#**********************************************************************************************/

# STACK FRAME DESIGN: Depth: 20 words (0xA0, or 80 bytes)
#            ************* ______________
#   0x4C     *  GPR12    *    ^
#   0x48     *  GPR11    *    |
#   0x44     *  GPR10    *    |
#   0x40     *  GPR9     *    |
#   0x3C     *  GPR8     *    |
#   0x38     *  GPR7     *  GPRs (32 bit)
#   0x34     *  GPR6     *    |
#   0x30     *  GPR5     *    |
#   0x2C     *  GPR4     *    |
#   0x28     *  GPR3     *    |
#   0x24     *  GPR0     * ___v__________
#   0x20     *  CR       * __CR__________
#   0x1C     *  XER      *    ^
#   0x18     *  CTR      *    |
#   0x14     *  LR       * locals & padding for 16 B alignment
#   0x10     *  SRR1     *    |
#   0x0C     *  SRR0     *    |
#   0x08     *  padding  * ___v__________
#   0x04     * resvd- LR * Reserved for calling function 
#   0x00     *  SP       * Backchain (same as gpr1 in GPRs)
#            ************* 

    .globl    TimerInterruptHandler          
    .section  .all_inter_handler,x  # Special section because we need to know exactly where our main handler is,
                                    # x attribute means that this section is executable code
    .align 4                        # Align IVOR handlers on a 16 byte boundary
                                    # GHS, Cygnus, Diab(default) use .align 4; CodeWarrior .align 16
  
    .extern InterruptRoutine
  
    # On Dual Core this register is treated as Processor 0
    .equ  INTC_IACKR, 0xfff48010      # Interrupt Acknowledge Register address
    .equ  INTC_EOIR,  0xfff48018      # End Of Interrupt Reg. addr.

.type TimerInterruptHandler,@function   # We need this and size calculation at the end to declare 
                                        # TimerInterruptHandler symbol as a function     
TimerInterruptHandler:                        
    stwu    r1, -0x50 (r1)      # Create stack frame and store back chain

    stw     r3,  0x28 (r1)      # Store a working register
    mfsrr0  r3                  # Store SRR0:1 (must be done before enabling EE)
    stw     r3,  0x0C (r1)
    mfsrr1  r3                  
    stw     r3,  0x10 (r1)

    lis     r3, INTC_IACKR@ha   # Read pointer into ISR Vector Table & store in r3
    lwz     r3, INTC_IACKR@l(r3)
    # addi    r3, r3, 0x4B4       # modified, at this offset, there is timer interrupt handler address
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
                                    
    bl TimerInterruptHandlerC

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
    mbar    0                   # Ensure store to clear interrupt's flag bit has completed
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
    rfi                         # End of Interrupt\
.size TimerInterruptHandler,$-TimerInterruptHandler   