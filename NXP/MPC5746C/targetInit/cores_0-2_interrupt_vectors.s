#**************************************************************************/
#* FILE NAME: cores_0-2_interrupt_vectors.s  COPYRIGHT (c) Freescale 2008 */
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

    .globl   IVPR_init_core_0
    .globl   IVPR_init_core_1
    
    .extern TimerInterruptHandler
    .extern DebugInterruptBr
    
    .globl   IVOR4_Handler_core_0  
    .globl   IVOR4_Handler_core_1  
    
    .equ SIXTEEN_BYTES, 16    # 16 byte alignment - required for table entries 
    .equ __core_0_IVPR, 0x00F8CC00 
    .equ __core_1_IVPR, 0x00F8CC00 

  .section    .xcptn_core_0, text_vle


#=================================================
#                 CORE 0 Vector Branch Table                            
#=================================================              


 
# Branch table for core interrupt handlers:

                              .align SIXTEEN_BYTES       
IVOR0_handler_core_0:         # IVOR 0 interrupt handler (Critical Interrupt)
#   se_nop
   e_b  IVOR0_handler_core_0 
   

IVOR1_handler_core_0:         # IVOR 1 interrupt handler (Machine Check)
#   se_nop
   e_b	IVOR1_handler_core_0						

IVOR2_handler_core_0:         # IVOR 2 interrupt handler (Data Storage)
#   se_nop
   e_b	IVOR2_handler_core_0 

IVOR3_handler_core_0:         # IVOR 3 interrupt handler (Instruction Storage)
#   se_nop
   e_b	IVOR3_handler_core_0 

                              # IVOR 4 interrupt handler (External Interrupt)
ExternalInputInterruptVector:
   wrteei 0
   e_b TimerInterruptHandler     

IVOR5_handler_core_0:         # IVOR 5 interrupt handler (Alignment)
#   se_nop
   e_b  IVOR5_handler_core_0    

IVOR6_handler_core_0:         # IVOR 6 interrupt handler (Program)
#   se_nop
   e_b  IVOR6_handler_core_0  

IVOR7_handler_core_0:         # IVOR 7 interrupt handler (Float Pt Unavail)
#   se_nop
   e_b  IVOR7_handler_core_0    

IVOR8_handler_core_0:         # IVOR 8 interrupt handler (System Call)
#   se_nop
   e_b  IVOR8_handler_core_0   

IVOR9_handler_core_0:         # IVOR 9 interrupt handler (AP Unavail)
#   se_nop
   e_b  IVOR9_handler_core_0

IVOR10_handler_core_0:        # IVOR 10 interrupt handler (Decrementer)
#   se_nop
   e_b  IVOR10_handler_core_0 

IVOR11_handler_core_0:        # IVOR 11 interrupt handler (Fixed Interval Timer)
#   se_nop
   e_b  IVOR11_handler_core_0 

IVOR12_handler_core_0:        # IVOR 12 interrupt handler (Watchdog Timer)
#   se_nop
   e_b  IVOR12_handler_core_0 

IVOR13_handler_core_0:        # IVOR 13 interrupt handler (Data TLB Error)
#   se_nop
   e_b	IVOR13_handler_core_0 

IVOR14_handler_core_0:        # IVOR 14 interrupt handler (Instr TLB Error)
 #  se_nop
   e_b	IVOR14_handler_core_0 

IVOR15_handler_core_0:         # IVOR 15 interrupt handler (Debug)
#   se_nop
   e_b	TimerInterruptHandler

    
#=================================================
#                 CORE 1  Vector Branch Table  
#=================================================              

    .section    .xcptn_core_1, text_vle

# Branch table for core interrupts;
                              .align SIXTEEN_BYTES       
IVOR0_handler_core_1:         # IVOR 0 interrupt handler (Critical Interrupt)
   e_b  IVOR0_handler_core_1 

IVOR1_handler_core_1:         # IVOR 1 interrupt handler (Machine Check)
   e_b	IVOR1_handler_core_1						

IVOR2_handler_core_1:         # IVOR 2 interrupt handler (Data Storage)
   e_b	IVOR2_handler_core_1 

IVOR3_handler_core_1:         # IVOR 3 interrupt handler (Instruction Storage)
   e_b	IVOR3_handler_core_1 

IVOR4_Handler_core_1:         # IVOR 4 interrupt handler (External Interrupt)
  e_b IVOR4_Handler_core_1 
#  e_b   IVOR0_handler_core_1    

IVOR5_handler_core_1:         # IVOR 5 interrupt handler (Alignment)
   e_b  IVOR5_handler_core_1    

IVOR6_handler_core_1:         # IVOR 6 interrupt handler (Program)
   e_b  IVOR6_handler_core_1  

IVOR7_handler_core_1:         # IVOR 7 interrupt handler (Float Pt Unavail)
   e_b  IVOR7_handler_core_1    

IVOR8_handler_core_1:         # IVOR 8 interrupt handler (System Call)
   e_b  IVOR8_handler_core_1   

IVOR9_handler_core_1:         # IVOR 9 interrupt handler (AP Unavail)
   e_b  IVOR9_handler_core_1

IVOR10_handler_core_1:        # IVOR 10 interrupt handler (Decrementer)
   e_b  IVOR10_handler_core_1 

IVOR11_handler_core_1:        # IVOR 11 interrupt handler (Fixed Interval Timer)
   e_b  IVOR11_handler_core_1 

IVOR12_handler_core_1:        # IVOR 12 interrupt handler (Watchdog Timer)
   e_b  IVOR12_handler_core_1 

IVOR13_handler_core_1:        # IVOR 13 interrupt handler (Data TLB Error)
   e_b	IVOR13_handler_core_1 

IVOR14_handler_core_1:        # IVOR 14 interrupt handler (Instr TLB Error)
   e_b	IVOR14_handler_core_1 

IVOR15_handler_core_1:         # IVOR 15 interrupt handler (Debug)
   e_b	IVOR15_handler_core_1

   
    .section .text_vle 
							
.type IVPR_init_core_0,@function              
IVPR_init_core_0:
    e_lis r5, __core_0_IVPR@h  # Initialize core IVPR from symbol in link file
    e_or2i r5, __core_0_IVPR@l
    mtIVPR r5 
    se_blr

.type IVPR_init_core_1,@function    
IVPR_init_core_1:
    e_lis r5, __core_1_IVPR@h  # Initialize core IVPR from symbol in link file
    e_or2i r5, __core_1_IVPR@l
    mtIVPR r5 
    se_blr


