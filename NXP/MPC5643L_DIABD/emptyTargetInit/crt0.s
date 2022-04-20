#
#       example/powerpc/crt0.s: startup for Bubble Sort example
#
#       *** Simplified version for Bubble Sort example only. ***
#       *** See src/crtppc/crt0.s for complete version.      ***
#       --------------------------------------------------------
#
#       Copyright 1997-1998 Diab Data, Inc.

        .file           "crt0.c"
        .text
        .globl          _start
        .align          2
#        addi            r0,r0,0         # Debuggers may object to starting at 0.
        .byte  0x00   #no watchdog
        .byte  0x5A   #Boot identifier 
        .byte  0x00
        .byte  0x00
        .long _start        

        

_start:
   nop
   nop
   nop
   nop
   nop
   lis r0,0x1234 
   ori r0,r0,0x5678
   mr	r1, r0
   mr	r2, r0
   mr	r3, r0
   mr	r4, r0
   mr	r5, r0
   mr	r6, r0
   mr	r7, r0
   mr	r8, r0
   mr	r9, r0
   mr	r10, r0
   mr	r11, r0
   mr	r12, r0
   mr	r13, r0
   mr	r14, r0
   mr	r15, r0
   mr	r16, r0
   mr	r17, r0
   mr	r18, r0
   mr	r19, r0
   mr	r20, r0
   mr	r21, r0
   mr	r22, r0
   mr	r23, r0
   mr	r24, r0
   mr	r25, r0
   mr	r26, r0
   mr	r27, r0
   mr	r28, r0
   mr	r29, r0
   mr	r30, r0
   mr	r31, r0
   nop
   nop
   nop
   nop

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

    lis     r3, 0x1001
    mtMAS0  r3

    lis     r4, 0xC000
    ori     r4, r4, 0x0400
    mtMAS1  r4

    lis     r5, 0x4000
    ori     r5, r5, 0x0008    # OLD Value 0x0028
    mtMAS2  r5

    lis     r6, 0x4000
    ori     r6, r6, 0x003f
    mtMAS3  r6

    #tlbwe
    .long      0x7C0007A4 

    # Third MMU Entry Second 64K SRAM in DPM Mode
    # MAS0 : ESEL=2
    # MAS1 : TSIZ=64Kbytes
    # MAS2 : EPN=0x50000000, W=0, I=0, M=0, G=0, E=big 
    # MAS3 : RPN=0x50000000, PERMIS=all 

#    lis     r3, 0x1002
#    mtMAS0  r3
#
#    lis     r4, 0xC000
#    ori     r4, r4, 0x0380
#    mtMAS1  r4
#
#    lis     r5, 0x5000
#    ori     r5, r5, 0x0000   # OLD Value 0x0028
#    mtMAS2  r5
#
#    lis     r6, 0x5000
#    ori     r6, r6, 0x003f
#    mtMAS3  r6
#
#    #tlbwe
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

#    lis     r3, 0x1003
#    mtMAS0  r3
#
#    lis     r4, 0xC000
#    ori     r4, r4, 0x0A80
#    mtMAS1  r4
#
#    lis     r5, 0x8000
#    ori     r5, r5, 0x000A
#    mtMAS2  r5
#
#    lis     r6,0x8000
#    ori     r6, r6, 0x003f
#    mtMAS3  r6
#
#    tlbwe    

#------------------------------------

init_L2RAM:
   lis r11,0x4000 # base address of the L2SRAM, 64-bit word aligned
   ori r11,r11,0  # not needed for this address but could be forothers
   li r12,512     # loop counter to get all of L2SRAM;
                  # 64k/4 bytes/32 GPRs = 512
   mtctr r12
init_l2ram_loop:
   stmw r0,0(r11) # write all 32 GPRs to L2SRAM
   addi r11,r11,128 # inc the ram ptr; 32 GPRs * 4 bytes = 128
   bdnz init_l2ram_loop # loop for 64k of L2SRAM

        addis           r11,r0,__SP_INIT@ha     # Initialize stack pointer r1 to
        addi            r1,r11,__SP_INIT@l      # value in linker command file.
        addis           r13,r0,_SDA_BASE_@ha    # Initialize r13 to sdata base
        addi            r13,r13,_SDA_BASE_@l    # (provided by linker).
        addis           r2,r0,_SDA2_BASE_@ha    # Initialize r2 to sdata2 base
        addi            r2,r2,_SDA2_BASE_@l     # (provided by linker).
        addi            r0,r0,0                 # Clear r0.
        stwu            r0,-64(r1)              # Terminate stack.

#
# Insert other initialize code here.
#
#        addis           r3,r0,input_count@h     # Set "I/O port" value to byte-
#        ori             r3,r3,input_count@l     # swapped 10 (for Bubble Sort
#        addi            r4,r0,0x0a00            # example only).
#        sth             r4,0(r3)

        bl              __init_main     # Finishes initialization (copies .data
                                        # ROM to RAM, clears .bss), then calls
                                        # example main(), which calls exit(),
                                        # which halts.
    
#------------------------------------------------------------- .init section --
        .section        .init$00,2,C
        .globl          __init
        .align          2
__init:                                 # Entry to __init, called by
        mfspr           r0,8            # __init_main called above.
        stwu            r1,-64(r1)
        stw             r0,68(r1)

        # Linker places .init sections from other modules, containing       
        # calls to initialize global objects, here.                         

        .section        .init$99,2,C
        lwz             r0,68(r1)       # Return from __init.
        addi            r1,r1,64
        mtspr           8,r0
        blr

#------------------------------------------------------------- .fini section --
        .section        .fini$00,2,C
        .globl          __fini
        .align          2
__fini:                                 # Entry to __fini, called by exit().
        mfspr           r0,8
        stwu            r1,-64(r1)
        stw             r0,68(r1)

        # Linker places .fini sections from other modules, containing       
        # calls to destroy global objects, here.                            

        .section        .fini$99,2,C
        lwz             r0,68(r1)       # Return from __fini.
        addi            r1,r1,64
        mtspr           8,r0
        blr

