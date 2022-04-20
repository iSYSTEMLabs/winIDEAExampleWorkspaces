#**************************************************************************/
#* FILE NAME:                              COPYRIGHT (c) Freescale 2008   */
#* Vector_SW_BookE - Z3_Z4_Z6_Z7.s                All Rights Reserved     */
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
#* 0.2    S. OBrien      04/22/2010    Make compatible for CW & GHS       */ 
#**************************************************************************/
    .text
    .extern  IVOR4_Handler
    .extern  __IVPR_VALUE

    .globl   IVOR0_Handler
    .globl   IVOR1_Handler
    .globl   IVOR2_Handler
    .globl   IVOR3_Handler
    .globl   IVOR5_Handler
    .globl   IVOR6_Handler
    .globl   IVOR7_Handler
    .globl   IVOR8_Handler
    .globl   IVOR9_Handler
    .globl   IVOR10_Handler
    .globl   IVOR11_Handler
    .globl   IVOR12_Handler
    .globl   IVOR13_Handler
    .globl   IVOR14_Handler
    .globl   IVOR15_Handler

    .globl   e200zX_Interrupt_Setup
    
    .section .exec_vect  #"a"  #(This messes up CW, but may be required for GHS

    .align 4       

IVORnTable:    
#=================================================
#               IVOR 0 Handler
#=================================================           
IVOR0_Handler:
    nop
    b IVOR0_Handler
    nop
    nop
#=================================================
#               IVOR 1 Handler
#=================================================           
IVOR1_Handler:
    nop
    b IVOR1_Handler
    nop
    nop
#=================================================
#               IVOR 2 Handler
#=================================================              
IVOR2_Handler:
    nop
    b IVOR2_Handler
    nop
    nop
#=================================================
#               IVOR 3 Handler
#=================================================              
IVOR3_Handler:
    nop
    b IVOR3_Handler
    nop
    nop
#=================================================
#               IVOR 5 Handler
#=================================================              
IVOR5_Handler:
    nop
    b IVOR5_Handler
    nop
    nop
#=================================================
#               IVOR 6 Handler
#=================================================              
IVOR6_Handler:
    nop
    b IVOR6_Handler
    nop
    nop
#=================================================
#               IVOR 7 Handler
#=================================================              
IVOR7_Handler:
    nop
    b IVOR7_Handler
    nop
    nop
#=================================================
#               IVOR 8 Handler
#=================================================              
IVOR8_Handler:
    nop
    b IVOR8_Handler
    nop
    nop
#=================================================
#               IVOR 9 Handler
#=================================================              
IVOR9_Handler:
    nop
    b IVOR9_Handler
    nop
    nop
#=================================================
#               IVOR 10 Handler
#=================================================              
IVOR10_Handler:
    nop
    b IVOR10_Handler    
    nop
    nop
#=================================================
#               IVOR 11 Handler
#=================================================              
IVOR11_Handler:
    nop
    b IVOR11_Handler    
    nop
    nop
#=================================================
#               IVOR 12 Handler
#=================================================              
IVOR12_Handler:
    nop
    b IVOR12_Handler
    nop
    nop
#=================================================
#               IVOR 13 Handler
#=================================================              
IVOR13_Handler:
    nop
    b IVOR13_Handler
    nop
    nop
#=================================================
#               IVOR 14 Handler
#=================================================              
IVOR14_Handler:
    nop
    b IVOR14_Handler                                                  
    nop
    nop
#=================================================
#               IVOR 15 Handler
#=================================================              
IVOR15_Handler:                             
    nop                           
    b IVOR15_Handler                                                  
    nop
    nop
#=================================================
#  Function to Setup the Core Interrupt Registers
#=================================================              
e200zX_Interrupt_Setup:

    #IVPR = address base used with IVORs
    lis r5, __IVPR_VALUE@h   
    ori r5, r5, __IVPR_VALUE@l
    mtIVPR r5 
    
    # Setup IVORx Registers
    lis r5, IVOR0_Handler@h
    ori r5, r5, IVOR0_Handler@l
    mtIVOR0 r5
    
    lis r5, IVOR1_Handler@h
    ori r5,  r5, IVOR1_Handler@l
    mtIVOR1 r5
    
    lis r5, IVOR2_Handler@h
    ori r5,  r5, IVOR2_Handler@l
    mtIVOR2 r5
    
    lis r5, IVOR3_Handler@h
    ori r5,  r5, IVOR3_Handler@l
    mtIVOR3 r5
    
    lis r5, IVOR4_Handler@h
    ori r5,  r5, IVOR4_Handler@l
    mtIVOR4 r5
    
    lis r5, IVOR5_Handler@h
    ori r5,  r5, IVOR5_Handler@l
    mtIVOR5 r5
    
    lis r5, IVOR6_Handler@h
    ori r5,  r5, IVOR6_Handler@l
    mtIVOR6 r5
    
    lis r5, IVOR7_Handler@h
    ori r5,  r5, IVOR7_Handler@l
    mtIVOR7 r5
    
    lis r5, IVOR8_Handler@h
    ori r5,  r5, IVOR8_Handler@l
    mtIVOR8 r5
    
    lis r5, IVOR9_Handler@h
    ori r5,  r5, IVOR9_Handler@l
    mtIVOR9 r5
    
    lis r5, IVOR10_Handler@h
    ori r5,  r5, IVOR10_Handler@l
    mtIVOR10 r5
    
    lis r5, IVOR11_Handler@h
    ori r5,  r5, IVOR11_Handler@l
    mtIVOR11 r5
    
    lis r5, IVOR12_Handler@h
    ori r5,  r5, IVOR12_Handler@l
    mtIVOR12 r5
    
    lis r5, IVOR13_Handler@h
    ori r5,  r5, IVOR13_Handler@l
    mtIVOR13 r5
    
    lis r5, IVOR14_Handler@h
    ori r5,  r5, IVOR14_Handler@l
    mtIVOR14 r5
    
    lis r5, IVOR15_Handler@h
    ori r5,  r5, IVOR15_Handler@l
    mtIVOR15 r5
    
    blr
    
    
