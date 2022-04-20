#**************************************************************************/
#* FILE NAME: ctr0_VLE_Flash.s             COPYRIGHT (c) Freescale 2008   */
#*                                                All Rights Reserved     */
#* DESCRIPTION:                                                           */
#* This is a generic base template for init of a Flash Project            */
#=========================================================================*/
#*                                                                        */
#*========================================================================*/
#* REV      AUTHOR        DATE        DESCRIPTION OF CHANGE               */
#* ---   -----------    ----------    ---------------------               */
#* 0.3    S. OBrien      02/26/2010    Updated for BookE & Leopard        */
#* 0.2    M.Ruthenbeck   12/03/2009    Updated for Leopard Lock Step Mode */
#* 0.1    R. Moran       10/12/2008    Initial Version                    */
#**************************************************************************/

##------- BEFORE USING ------------------------------------------------------   
# Ensure in the linker file that the correct SRAM size is selected
##---------------------------------------------------------------------------

    .extern main
	.extern optimise_MCU

# CW requires that these be externel

    .extern __SP_INIT
    .extern _SDA_BASE_
    .extern __DATA_ROM_ADDR
    .extern __DATA_SRAM_ADDR
    .extern __DATA_SIZE
    .extern __SDATA_ROM_ADDR
    .extern __SDATA_SRAM_ADDR
    .extern __SDATA_SIZE
    .extern _SDA2_BASE_
    .extern _SRAM_BASE_ADDR
    .extern _SRAM_SIZE
    
##---------------------------------------------------------------------------
## Reset Configuration Half Word
##---------------------------------------------------------------------------
    
##---------------------------------------------------------------------------
## Program Entry
##---------------------------------------------------------------------------       

# CW Requires it this way, though it appears to work for GHS also
# This is what it was originally.section    ".text", "vax"	  

    .section    .text
    
    .globl      _start

# This needs to be here to work for both CW & GHS dues to the GHS Linker file (which could be changed...)

    .align 4
    
_start:

##---------------------------------------------------------------------------
## Initialise GPR's for LockStep Mode STM instruction 
## This REALLY IS A MUST!
##---------------------------------------------------------------------------

    nop
    nop
   	lis     r0, 0
   	lis     r1, 0
   	lis     r2, 0
   	lis     r3, 0
   	lis     r4, 0
   	lis     r5, 0
   	lis     r6, 0
   	lis     r7, 0
   	lis     r8, 0
   	lis     r9, 0
   	lis     r10, 0
   	lis     r11, 0
   	lis     r12, 0
   	lis     r13, 0
   	lis     r14, 0
   	lis     r15, 0
   	lis     r16, 0
   	lis     r17, 0
   	lis     r17, 0
   	lis     r18, 0
   	lis     r19, 0
   	lis     r20, 0
   	lis     r21, 0
   	lis     r22, 0
   	lis     r23, 0
   	lis     r24, 0
   	lis     r25, 0
   	lis     r26, 0
   	lis     r27, 0
   	lis     r28, 0
   	lis     r29, 0
   	lis     r30, 0
   	lis     r31, 0

##---------------------------------------------------------------------------
## MMU Setup
##---------------------------------------------------------------------------

    # Set up MMU
    # Flash area - setup direct No translation
    # MAS0 : ESEL=0 
    # MAS1 : TSIZ=16Mbytes
    # MAS2 : EPN=0x000000000, VLE=0, W=0, I=0, M=0, G=0, E=big 
    # MAS3 : RPN=0x000000000, PERMIS=all 

    lis    r3, 0x1000
    mtMAS0 r3

    lis    r4, 0xC000
    ori    r4, r4, 0x0500
    mtMAS1 r4

    lis    r5, 0x0000
    ori    r5, r5, 0x0000
    mtMAS2 r5

    lis    r6, 0x0000
    ori    r6, r6, 0x003f
    mtMAS3 r6

# Synchronize for running out of flash

    msync
    .long      0x7C0007A4 		             
    #tlbwe
    
    isync  
	
    # Second MMU Entry First 128K SRAM in LSM - No Translation
    # MAS0 : ESEL=1
    # MAS1 : TSIZ=256Kbytes
    # MAS2 : EPN=0x400000000, W=0, I=1, M=0, G=0, E=big 
    # MAS3 : RPN=0x400000000, PERMIS=all 

#    lis     r3, 0x1001
#    mtMAS0  r3
#
#    lis     r4, 0xC000
#    ori     r4, r4, 0x0400
#    mtMAS1  r4
#
#    lis     r5, 0x4000
#    ori     r5, r5, 0x0008    # OLD Value 0x0028
#    mtMAS2  r5
#
#    lis     r6, 0x4000
#    ori     r6, r6, 0x003f
#    mtMAS3  r6
#
#    #tlbwe
#    .long      0x7C0007A4 

    # Third MMU Entry Second 64K SRAM in DPM Mode
    # MAS0 : ESEL=2
    # MAS1 : TSIZ=64Kbytes
    # MAS2 : EPN=0x50000000, W=0, I=0, M=0, G=0, E=big 
    # MAS3 : RPN=0x50000000, PERMIS=all 

    lis     r3, 0x1002
    mtMAS0  r3

    lis     r4, 0xC000
    ori     r4, r4, 0x0380
    mtMAS1  r4

    lis     r5, 0x5000
    ori     r5, r5, 0x0000   # OLD Value 0x0028
    mtMAS2  r5

    lis     r6, 0x5000
    ori     r6, r6, 0x003f
    mtMAS3  r6

    #tlbwe
     .long      0x7C0007A4 

    # Fourth MMU Entry Peripheral A 
    # MAS0 : ESEL=3
    # MAS1 : TSIZ=1Mbytes
    # MAS2 : EPN=0xC3F000000, W=0, I=1, M=0, G=1, E=big 
    # MAS3 : RPN=0xC3F000000, PERMIS=all 

    lis     r3, 0x1003
    mtMAS0  r3

    lis     r4, 0xC000
    ori     r4, r4, 0x0500
    mtMAS1  r4

    lis     r5, 0xC3F0
    ori     r5, r5, 0x000A   
    mtMAS2  r5

    lis     r6, 0xC3F0
    ori     r6, r6, 0x003F
    mtMAS3  r6

    #tlbwe
    .long      0x7C0007A4 

    # Fifth MMU Entry Peripheral B 
    # MAS0 : ESEL=4
    # MAS1 : TSIZ=4Mbytes
    # MAS2 : EPN=0xFFE000000, W=0, I=1, M=0, G=0, E=big 
    # MAS3 : RPN=0xFFE000000, PERMIS=all 

    lis     r3, 0x1004
    mtMAS0  r3
 
    lis     r4, 0xC000
    ori     r4, r4, 0x0600
    mtMAS1  r4
 
    lis     r5, 0xFFE0
    ori     r5, r5, 0x0008   
    mtMAS2  r5
 
    lis     r6, 0xFFE0
    ori     r6, r6, 0x003F
    mtMAS3  r6
 
    #tlbwe
    .long      0x7C0007A4    

    # Peripheral Space in DPM mode things start at 0x8ff0_0000
    # will start at 0x8000_0000 and extend 2G (just being lazy)
    # MAS0 : ESEL=3
    # MAS1 : TSIZ=2Gbytes
    # MAS2 : EPN=0x800000000, W=0, I=1, M=0, G=1, E=big 
    # MAS3 : RPN=0x800000000, PERMIS=all 

    lis     r3, 0x1003
    mtMAS0  r3

    lis     r4, 0xC000
    ori     r4, r4, 0x0A80
    mtMAS1  r4

    lis     r5, 0x8000
    ori     r5, r5, 0x000A
    mtMAS2  r5

    lis     r6,0x8000
    ori     r6, r6, 0x003f
    mtMAS3  r6
#    tlbwe    

##---------------------------------------------------------------------------
## Initialise SRAM ECC
##---------------------------------------------------------------------------

# Doing this in halves for Leopard 128k SRAM to allow for WDOG service at the half-way point.

# Base Address of the internal SRAM

    lis        r5, _SRAM_BASE_ADDR@h
    ori        r5, r5, _SRAM_BASE_ADDR@l
 
# Store number of 128Byte (32GPRs) segments in Counter

    lis        r6, _SRAM_SIZE@h                  # Initialize r6 to size of SRAM (Bytes)
    ori        r6, r6, _SRAM_SIZE@l              # this is 64K in dual core mode
    
    srwi        r6, r6, 0x3                      # Divide SRAM size by 8 (half SRAM size in words)
    mtctr       r6                               # Move to counter for use with "bdnz"
    
# Fill SRAM with known values not registers 
# Never write content of uninitialised registers to SRAM 

sram_loop1:
    lis         r0,0x0
    stw         r0,0x0(r5)                       # Write all 32 registers to SRAM    
    addi        r5,r5,4                          # Increment the RAM pointer to next 128byte
    bdnz        sram_loop1                       # Loop for all of SRAM

## Service the watchdog now (doing the entire SRAM init is too long)----

#    lis        r1,0xfff3
#    ori        r1,r1, 0x8010
#    li         r3,0xA602                         # SR sequence value 1
#    stw        r3,0x0(r1)
#    li         r3,0xB480                         # SR sequence value 2
#    stw        r3,0x0(r1)

# Finish initializing SRAM

    mtctr     r6                                 # r6 still contains half the SRAM size in words
    sram_loop2:
    lis 	  r0,0x0
    stw       r0,0x0(r5)                         # Write all 32 registers to SRAM    
    addi      r5,r5,4                            # Increment the RAM pointer to next 128byte
    bdnz      sram_loop2                         # Loop for all of SRAM

##---------------------------------------------------------------------------       
## Initialised Data - ".data"
##---------------------------------------------------------------------------       

DATACOPY:

    lis         r9, __DATA_SIZE@ha               # Load upper SRAM load size (# of bytes) into R9
    addic.      r9, r9, __DATA_SIZE@l            # Load lower SRAM load size into R9 and compare to zero
    beq         SDATACOPY                        # Exit cfg_ROMCPY if size is zero (no data to initialise)

    mtctr       r9                               # Store no. of bytes to be moved in counter

    lis         r10, __DATA_ROM_ADDR@h           # Load address of first SRAM load into R10
    ori         r10, r10, __DATA_ROM_ADDR@l      # Load lower address of SRAM load into R10
    subi        r10,r10, 1                       # Decrement address to prepare for ROMCPYLOOP

    lis         r5, __DATA_SRAM_ADDR@h           # Load upper SRAM address into R5 (from linker file)
    ori         r5, r5, __DATA_SRAM_ADDR@l       # Load lower SRAM address into R5 (from linker file)
    subi        r5, r5, 1                        # Decrement address to prepare for ROMCPYLOOP

DATACPYLOOP:

    lbzu        r4, 1(r10)                       # Load data byte at R10 into R4,incrementing (update) ROM address
    stbu        r4, 1(r5)                        # Store R4 data byte into SRAM at R5 and update SRAM address
    bdnz        DATACPYLOOP                      # Branch if more bytes to load from ROM

##---------------------------------------------------------------------------       
## Small Initialised Data - ".sdata"
##---------------------------------------------------------------------------       

SDATACOPY:
 
    lis         r9, __SDATA_SIZE@ha              # Load upper SRAM load size (# of bytes) into R9
    addic.      r9, r9, __SDATA_SIZE@l           # Load lower SRAM load size into R9 and compare to zero
    beq         ROMCPYEND                        # Exit cfg_ROMCPY if size is zero (no data to initialise)

    mtctr       r9                               # Store no. of bytes to be moved in counter

    lis         r10, __SDATA_ROM_ADDR@h          # Load address of first SRAM load into R10
    ori         r10, r10, __SDATA_ROM_ADDR@l      # Load lower address of SRAM load into R10
    subi        r10,r10, 1                       # Decrement address to prepare for ROMCPYLOOP

    lis         r5, __SDATA_SRAM_ADDR@h          # Load upper SRAM address into R5 (from linker file)
    ori         r5, r5, __SDATA_SRAM_ADDR@l      # Load lower SRAM address into R5 (from linker file)
    subi        r5, r5, 1                        # Decrement address to prepare for ROMCPYLOOP

SDATACPYLOOP:

    lbzu        r4, 1(r10)                       # Load data byte at R10 into R4,incrementing (update) ROM address
    stbu        r4, 1(r5)                        # Store R4 data byte into SRAM at R5 and update SRAM address
    bdnz        SDATACPYLOOP                     # Branch if more bytes to load from ROM

ROMCPYEND:

##---------------------------------------------------------------------------       
## Setup the Stack
##---------------------------------------------------------------------------       

SETUPSTACK:

    lis       r1, __SP_INIT@h                    # Initialize stack pointer r1 to
    ori       r1, r1, __SP_INIT@l                # value in linker command file. 
 
    lis       r13, _SDA_BASE_@h                  # Initialize r13 to sdata base
    ori       r13, r13, _SDA_BASE_@l             # (provided by linker).    

    lis       r2, _SDA2_BASE_@h                  # Initialize r2 to sdata2 base
    ori       r2, r2, _SDA2_BASE_@l              # (provided by linker).

    addi      r0, r0, 0
    stwu      r0,-128(r1)                        # Terminate stack.  This seems to be required for main()
    
##---------------------------------------------------------------------------       
## Main Code - May Need Optimizations Here (Flash, Cache, etc)
##---------------------------------------------------------------------------       

    bl        main

##---------------------------------------------------------------------------    

        
