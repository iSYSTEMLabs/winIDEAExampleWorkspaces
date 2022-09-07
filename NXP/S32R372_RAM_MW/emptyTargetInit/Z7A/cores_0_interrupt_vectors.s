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
    
    .extern TimerInterruptHandler
    .extern DebugInterruptBr
    
    .globl   IVOR4_Handler_core_0  
    
    .equ SIXTEEN_BYTES, 16    # 16 byte alignment - required for table entries 
    .equ __core_0_IVPR, 0x50811000 

  .section    .xcptn_core_0, text_vle


#=================================================
#                 CORE 0 Vector Branch Table                            
#=================================================              


 
# Branch table for core interrupt handlers:

                              .align SIXTEEN_BYTES       
IVOR0_handler_core_0:         # IVOR 0 interrupt handler (Critical Interrupt)
#   se_nop
   e_b  IVOR0_handler_core_0 
   
                              .align SIXTEEN_BYTES       
IVOR1_handler_core_0:         # IVOR 1 interrupt handler (Machine Check)
#   se_nop
   e_b	IVOR1_handler_core_0						
                              .align SIXTEEN_BYTES       
IVOR2_handler_core_0:         # IVOR 2 interrupt handler (Data Storage)
#   se_nop
   e_b	IVOR2_handler_core_0 
                              .align SIXTEEN_BYTES       
IVOR3_handler_core_0:         # IVOR 3 interrupt handler (Instruction Storage)
#   se_nop
   e_b	IVOR3_handler_core_0 
                              .align SIXTEEN_BYTES       
                              # IVOR 4 interrupt handler (External Interrupt)
IVOR4_handler_core_0:
#   se_nop
   e_b	IVOR4_handler_core_0 
                              .align SIXTEEN_BYTES       
IVOR5_handler_core_0:         # IVOR 5 interrupt handler (Alignment)
#   se_nop
   e_b  IVOR5_handler_core_0    
                              .align SIXTEEN_BYTES       
IVOR6_handler_core_0:         # IVOR 6 interrupt handler (Program)
#   se_nop
   e_b  IVOR6_handler_core_0  
                              .align SIXTEEN_BYTES       
IVOR7_handler_core_0:         # IVOR 7 interrupt handler (Float Pt Unavail)
#   se_nop
   e_b  IVOR7_handler_core_0    
                              .align SIXTEEN_BYTES       
IVOR8_handler_core_0:         # IVOR 8 interrupt handler (System Call)
#   se_nop
   e_b  IVOR8_handler_core_0   
                              .align SIXTEEN_BYTES       
IVOR9_handler_core_0:         # IVOR 9 interrupt handler (AP Unavail)
#   se_nop
   e_b  IVOR9_handler_core_0
                              .align SIXTEEN_BYTES       
IVOR10_handler_core_0:        # IVOR 10 interrupt handler (Decrementer)
#   se_nop
   e_b  IVOR10_handler_core_0 
                              .align SIXTEEN_BYTES       
IVOR11_handler_core_0:        # IVOR 11 interrupt handler (Fixed Interval Timer)
#   se_nop
   e_b  IVOR11_handler_core_0 
                              .align SIXTEEN_BYTES       
IVOR12_handler_core_0:        # IVOR 12 interrupt handler (Watchdog Timer)
#   se_nop
   e_b  IVOR12_handler_core_0 
                              .align SIXTEEN_BYTES       
IVOR13_handler_core_0:        # IVOR 13 interrupt handler (Data TLB Error)
#   se_nop
   e_b	IVOR13_handler_core_0 
                              .align SIXTEEN_BYTES       
IVOR14_handler_core_0:        # IVOR 14 interrupt handler (Instr TLB Error)
 #  se_nop
   e_b	IVOR14_handler_core_0 
                              .align SIXTEEN_BYTES       
IVOR15_handler_core_0:         # IVOR 15 interrupt handler (Debug)
#   se_nop
   e_b	IVOR15_handler_core_0

.org 0x388
.align 4
IRQ226_Handler:
  se_nop
  e_b TimerInterruptHandler

.section .text_vle							
.type IVPR_init_core_0,@function              
IVPR_init_core_0:
    #IVPR = address base used with IVOR's
    e_lis r5, __core_0_IVPR@h   
    e_or2i r5, __core_0_IVPR@l
    mtIVPR r5
    se_blr

