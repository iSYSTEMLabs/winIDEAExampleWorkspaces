#**************************************************************************/
#* FILE NAME:                              COPYRIGHT (c) Freescale 2012   */
#* Vector_SW_VLE - Z4.s                             All Rights Reserved   */
#*                                                                        */
#* DESCRIPTION:                                                           */
#* This is a generic base template for setting up the IVPR and IVOR       */
#* registers for the e200z4                                               */
#*                                                                        */
#* This file also includes a trap for all core exceptions, excluding      */
#* IVOR4 exceptions which have seperate handler                           */
#*                                                                        */
#* Syntax specifically written for GHS v5.x compiler. This file starts in */
#* memory at the beginning of the ".xptn_vectors" section.                */
#**************************************************************************/	
#* REV      AUTHOR        DATE        DESCRIPTION OF CHANGE               */
#* ---   -----------    ----------    ---------------------               */
#* 1.0	  D.McMenamin    13/Sept/12   Initial Public Release              */
#**************************************************************************/
 
  
  .globl      e200zX_Interrupt_Setup
  .equ        __IVPR_S, 0x01010000
  .extern     TimerInterruptHandler 
  .extern     IVOR4_Handler

  .section    .xptn_vectors, text_vle

  .equ SIXTEEN_BYTES, 16   # 16 byte alignment required for table entries 
  
InterruptTable:    
#=================================================
#   Critical Input Interrupt Vector
#=================================================           
.align SIXTEEN_BYTES 
CriticalInputInterruptVector:
    se_nop
    e_b CriticalInputInterruptVector
#=================================================
#   Machine Check Interrupt Vector
#=================================================           
.align SIXTEEN_BYTES 
MachineCheckInterruptVector:
    se_nop
    e_b MachineCheckInterruptVector
#=================================================
#  Data Storage Interrupt Vector
#=================================================              
.align SIXTEEN_BYTES 
DataStorageInterruptVector:
    se_nop
    e_b DataStorageInterruptVector
#=================================================
#   Instruction Storage Interrupt Vector
#=================================================              
.align SIXTEEN_BYTES 
InstructionStorageInterruptVector:
    se_nop
    e_b InstructionStorageInterruptVector
#=================================================
#   External Input Interrupt Vector
#=================================================              
.align SIXTEEN_BYTES 
ExternalInputInterruptVector:
    wrteei 0
     e_b TimerInterruptHandler
#=================================================
#               IVOR 5 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR5_Vector:
    se_nop
    e_b IVOR5_Vector
#=================================================
#               IVOR 6 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR6_Vector:
    se_nop
    e_b IVOR6_Vector
#=================================================
#               IVOR 7 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR7_Vector:
    se_nop
    e_b IVOR7_Vector
#=================================================
#               IVOR 8 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR8_Vector:
    se_nop
    e_b IVOR8_Vector
#=================================================
#               IVOR 9 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR9_Vector:
    se_nop
    e_b IVOR9_Vector
#=================================================
#               IVOR 10 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR10_Vector:
    se_nop
    e_b IVOR10_Vector    
#=================================================
#               IVOR 11 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR11_Vector:
    se_nop
    e_b IVOR11_Vector    
#=================================================
#               IVOR 12 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR12_Vector:
    se_nop
    e_b IVOR12_Vector
#=================================================
#               IVOR 13 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR13_Vector:
    se_nop
    e_b IVOR13_Vector
#=================================================
#               IVOR 14 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR14_Vector:
    se_nop
    e_b IVOR14_Vector                                                  
#=================================================
#               IVOR 15 Vector
#=================================================              
.align SIXTEEN_BYTES 
IVOR15_Vector:                             
    se_nop                           
    e_b IVOR15_Vector                                                              
          
         
                                                             
#.fsize 0
.type e200zX_Interrupt_Setup,@function

#=================================================
#  Function to Setup the Core Interrupt Registers
#=================================================              
e200zX_Interrupt_Setup:
    #__IVPR_S = address base used with IVOR's
    e_lis r5, __IVPR_S@h   
    e_or2i r5, __IVPR_S@l
    mtIVPR r5 
    se_blr
    
.size e200zX_Interrupt_Setup,$-e200zX_Interrupt_Setup
