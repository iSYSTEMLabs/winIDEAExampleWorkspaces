#**************************************************************************/
#* FILE NAME: cores_1_interrupt_vectors.s  COPYRIGHT (c) Freescale 2008 */
#*                                                All Rights Reserved     */
#*                                                                        */
#* DESCRIPTION:                                                           */
#* This is a generic base template for setting up the IVPR and IVOR       */
#* registers for the e200z3, z4, z6 and z7 cores.                         */
#*                                                                        */
#* This file also includes a trap for all core exceptions, excluding      */
#* IVOR4 exceptions which have seperate handler                           */
#*                                                                        */
#* Syntax specifically written for GHS v5.x compiler. This file starts in */
#* memory at the beginning of the ".xptn_vectors" section.                */
#=========================================================================*/
#*                                                                        */
#*========================================================================*/
#* REV      AUTHOR        DATE        DESCRIPTION OF CHANGE               */
#* ---   -----------    ----------    ---------------------               */
#* 0.1    R. Moran       10/12/2008    Initial Version                    */
#* 0.2    A. Robertson   07/09/2010    Specific IVOR1 handler for B3M     */
#* 0.3    S. Mihalik     20/08/2013    Multiple cores, renamed file       */
#**************************************************************************/

    .globl   IVPR_init_core_1
     
    .extern TimerInterruptHandler_1
    .extern DebugInterruptBr
    
    .globl   IVOR4_Handler_core_1  

    
    .equ SIXTEEN_BYTES, 16    # 16 byte alignment - required for table entries 
    .equ __core_1_IVPR, 0x00FB1000 


    
#=================================================
#                 CORE 1  Vector Branch Table  
#=================================================              

    .section    .xcptn_core_1, text_vle

# Branch table for core interrupts;
                              .align SIXTEEN_BYTES       
IVOR0_handler_core_1:         # IVOR 0 interrupt handler (Critical Interrupt)
   e_b  IVOR0_handler_core_1 
                              .align SIXTEEN_BYTES       
IVOR1_handler_core_1:         # IVOR 1 interrupt handler (Machine Check)
   e_b	IVOR1_handler_core_1						
                              .align SIXTEEN_BYTES       
IVOR2_handler_core_1:         # IVOR 2 interrupt handler (Data Storage)
   e_b	IVOR2_handler_core_1 
                              .align SIXTEEN_BYTES       
IVOR3_handler_core_1:         # IVOR 3 interrupt handler (Instruction Storage)
   e_b	IVOR3_handler_core_1 
                              .align SIXTEEN_BYTES       
IVOR4_Handler_core_1:         # IVOR 4 interrupt handler (External Interrupt)
   wrteei 0
   e_b TimerInterruptHandler_1     

#  e_b   IVOR0_handler_core_1    
                              .align SIXTEEN_BYTES       
IVOR5_handler_core_1:         # IVOR 5 interrupt handler (Alignment)
   e_b  IVOR5_handler_core_1    
                              .align SIXTEEN_BYTES       
IVOR6_handler_core_1:         # IVOR 6 interrupt handler (Program)
   e_b  IVOR6_handler_core_1  
                              .align SIXTEEN_BYTES       
IVOR7_handler_core_1:         # IVOR 7 interrupt handler (Float Pt Unavail)
   e_b  IVOR7_handler_core_1    
                              .align SIXTEEN_BYTES       
IVOR8_handler_core_1:         # IVOR 8 interrupt handler (System Call)
   e_b  IVOR8_handler_core_1   
                              .align SIXTEEN_BYTES       
IVOR9_handler_core_1:         # IVOR 9 interrupt handler (AP Unavail)
   e_b  IVOR9_handler_core_1
                              .align SIXTEEN_BYTES       
IVOR10_handler_core_1:        # IVOR 10 interrupt handler (Decrementer)
   e_b  IVOR10_handler_core_1 
                              .align SIXTEEN_BYTES       
IVOR11_handler_core_1:        # IVOR 11 interrupt handler (Fixed Interval Timer)
   e_b  IVOR11_handler_core_1 
                              .align SIXTEEN_BYTES       
IVOR12_handler_core_1:        # IVOR 12 interrupt handler (Watchdog Timer)
   e_b  IVOR12_handler_core_1 
                              .align SIXTEEN_BYTES       
IVOR13_handler_core_1:        # IVOR 13 interrupt handler (Data TLB Error)
   e_b	IVOR13_handler_core_1 
                              .align SIXTEEN_BYTES       
IVOR14_handler_core_1:        # IVOR 14 interrupt handler (Instr TLB Error)
   e_b	IVOR14_handler_core_1 
                              .align SIXTEEN_BYTES       
IVOR15_handler_core_1:         # IVOR 15 interrupt handler (Debug)
   wrteei 0
   e_b TimerInterruptHandler_1     
#   e_b IVOR15_handler_core_1  

.type IVPR_init_core_1,@function    
IVPR_init_core_1:
    e_lis r5, __core_1_IVPR@h  # Initialize core IVPR from symbol in link file
    e_or2i r5, __core_1_IVPR@l
    mtIVPR r5 
    se_blr


