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

_start:
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

#------------------------------------   
# TLB1, 16 MByte Memory Space, Not Guarded, Cachable, All Access
# mas0    
   lis r20,0x1001 
   ori r20,r20,0
# mas1
     lis r21,0xC000
   ori r21,r21,0x700
# mas2
   lis r22,0x0
   ori r22,r22,0x00
# mas3
   lis r23,0x0
   ori r23,r23,0x3F
#
   mtspr 0x270,r20
   mtspr 0x271,r21
   mtspr 0x272,r22
   mtspr 0x273,r23
   isync
   tlbwe
   isync

# TLB3, 256 KByte Memory Space, Not Guarded, Don't Cache, All Access
# mas0
   lis r20,0x1003
   ori r20,r20,0
# mas1
   lis r21,0xC000
   ori r21,r21,0x400
# mas2
   lis r22,0x5000
   ori r22,r22,0x0008
# mas3
   lis r23,0x5000
   ori r23,r23,0x3F
#
   mtspr 0x270,r20
   mtspr 0x271,r21
   mtspr 0x272,r22
   mtspr 0x273,r23
   isync
   tlbwe
   isync

# TLB4, 1 MByte Memory Space, Not Guarded, Don't Cache, All Access
# mas0
   lis r20,0x1004
   ori r20,r20,0
# mas1
   lis r21,0xC000
   ori r21,r21,0x500
# mas2
   lis r22,0xC3F0
   ori r22,r22,0x0008
# mas3
   lis r23,0xC3F0
   ori r23,r23,0x3F
#
   mtspr 0x270,r20
   mtspr 0x271,r21
   mtspr 0x272,r22
   mtspr 0x273,r23
   isync
   tlbwe
   isync

# TLB0, 1 MByte Memory Space, Guarded, Don't Cache, All Access
# mas0
   lis r20,0x1000
   ori r20,r20,0
# mas1
   lis r21,0xC000
   ori r21,r21,0x500
# mas2
   lis r22,0xFFF0
   ori r22,r22,0x000A
# mas3
   lis r23,0xFFF0
   ori r23,r23,0x3F
#
   mtspr 0x270,r20
   mtspr 0x271,r21
   mtspr 0x272,r22
   mtspr 0x273,r23
   isync
   tlbwe
   isync
# TLB2, 1 MByte Memory Space, Guarded, Don't Cache, All Access
# mas0
   lis r20,0x1002
   ori r20,r20,0
# mas1
   lis r21,0xC000
   ori r21,r21,0x500
# mas2
   lis r22,0x8FF0
   ori r22,r22,0x000A
# mas3
   lis r23,0x8FF0
   ori r23,r23,0x3F
#
   mtspr 0x270,r20
   mtspr 0x271,r21
   mtspr 0x272,r22
   mtspr 0x273,r23
   isync
   tlbwe
   isync

   nop
   nop
   nop
   nop

#------------------------------------

init_L2RAM:
   lis r11,0x5000 # base address of the L2SRAM, 64-bit word aligned
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

