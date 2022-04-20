/*===========================================================================*/
/* Module       = dr7f701503.ld                                              */
/* Version      = E1.00b                                                     */
/*                extracted from device file dr7f701503.dvf                  */
/*                by DeFiXRH850 0.7.1.4                                      */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2013 by Renesas Electronics Europe GmbH,                    */
/*               a company of the Renesas Electronics Corporation            */
/*===========================================================================*/
/* Purpose:     Template of linker directive file                            */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* Because the Product(s) is licensed free of charge, there is no warranty   */
/* of any kind whatsoever and expressly disclaimed and excluded by Renesas,  */
/* either expressed or implied, including but not limited to those for       */
/* non-infringement of intellectual property, merchantability and/or         */
/* fitness for the particular purpose.                                       */
/* Renesas shall not have any obligation to maintain, service or provide bug */
/* fixes for the supplied Product(s) and/or the Application.                 */
/*                                                                           */
/* Each User is solely responsible for determining the appropriateness of    */
/* using the Product(s) and assumes all risks associated with its exercise   */
/* of rights under this Agreement, including, but not limited to the risks   */
/* and costs of program errors, compliance with applicable laws, damage to   */
/* or loss of data, programs or equipment, and unavailability or             */
/* interruption of operations.                                               */
/*                                                                           */
/* Limitation of Liability                                                   */
/*                                                                           */
/* In no event shall Renesas be liable to the User for any incidental,       */
/* consequential, indirect, or punitive damage (including but not limited    */
/* to lost profits) regardless of whether such liability is based on breach  */
/* of contract, tort, strict liability, breach of warranties, failure of     */
/* essential purpose or otherwise and even if advised of the possibility of  */
/* such damages. Renesas shall not be liable for any services or products    */
/* provided by third party vendors, developers or consultants identified or  */
/* referred to the User by Renesas in connection with the Product(s) and/or  */
/* the Application.                                                          */
/*                                                                           */
/*===========================================================================*/
/* Environment:                                                              */
/*              Device:         R7F701503xAFP                                */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/

CONSTANTS
{
  zero_start = 0xffff8000
}

MEMORY
 {
  iROM_0        : ORIGIN = 0x00000000,  LENGTH = 3072k
  iROM_1        : ORIGIN = 0x00800000,  LENGTH = 2048k
  iROM_1_TOP    : ORIGIN = .         ,  LENGTH = 0
  iROM_2        : ORIGIN = 0x01000000,  LENGTH = 32k
  iROM_2_TOP    : ORIGIN = .         ,  LENGTH = 0
  iRAM_0        : ORIGIN = 0xFE9D0000,  LENGTH = 192k            // Local RAM for PE2
  iRAM_0_TOP    : ORIGIN = .         ,  LENGTH = 0
  iRAM_1        : ORIGIN = 0xFEBD0000,  LENGTH = 192k            // Local RAM for PE1
  iRAM_1_TOP    : ORIGIN = .         ,  LENGTH = 0
  iRAM_Self     : ORIGIN = 0xFEDE4000,  LENGTH = 111k            // Local RAM self
  iRAM_Self_TOP : ORIGIN = .         ,  LENGTH = 0
  gRAM_0        : ORIGIN = 0xFEEF8000,  LENGTH = 32k             // Global RAM Bank 0
  gRAM_0_TOP    : ORIGIN = .         ,  LENGTH = 0
  gRAM_1        : ORIGIN = 0xFEFF8000,  LENGTH = 32k             // Global RAM Bank 1
  gRAM_1_TOP    : ORIGIN = .         ,  LENGTH = 0
  iRAM_R        : ORIGIN = 0xFEF00000,  LENGTH = 128k            // Retention RAM
  iRAM_R_TOP    : ORIGIN = .         ,  LENGTH = 0
 }

SECTIONS
 {

/* Start of internal ROM area (iROM_1) */

  .intvect                              :>iROM_1 /* start of interrupt vector */
  .intvect_end  0x00800730              :>.      /* end   of interrupt vector */
  .rozdata                              :>.      /* constant datas in ZDA area */
  .robase   align(4)                    :>.      /* initialize textpointer TP for SDA addressing */
  .rosdata  align(4)                    :>.      /* constant datas in SDA area */
  .rodata   align(4)                    :>.      /* constant datas in normal area */

  .text     align(4)                    :>.      /* program code area */

  .fixaddr  align(4)                    :>.      /* ghs internal (compiler) */
  .fixtype  align(4)                    :>.      /* ghs internal (compiler) */
  .secinfo  align(4)                    :>.      /* ghs internal (runtime library) */
  .syscall  align(4)                    :>.      /* ghs internal (linker) */

  .romdata  ROM(.data)                  :>.      /* constant data to initialize variables (copied to RAM at startup)*/
  .romzdata ROM(.zdata)                 :>.      /* constant data to initialize variables in ZDA area (copied to RAM at startup)*/
  .romsdata ROM(.sdata)                 :>.      /* constant data to initialize variables in SDA area (copied to RAM at startup)*/
  .romtdata ROM(.tdata)                 :>.      /* constant data to initialize variables in TDA area (copied to RAM at startup)*/
  .romsldata ROM(.sldata)               :>.      /* constant data to initialize variables in LSDA area (copied to GRAM at startup)*/

/* Start of internal User-Boot-ROM area (iROM_1) */

  .bcode    align(4)                    :>iROM_1     /* user defined segment for executable code located in user boot area */
  .bconst   align(4)                    :>.          /* user defined segment for constant data located in user boot area   */
  .top_of_ROM_BOOT align(4)             :>iROM_1_TOP

/* Start of internal User-Boot-ROM area (iROM_2) */

  .bcode2    align(4)                   :>iROM_2     /* user defined segment for executable code located in user boot area */
  .bconst2   align(4)                   :>.          /* user defined segment for constant data located in user boot area   */
  .top_of_ROM_BOOT2 align(4)            :>iROM_2_TOP

/* Start of internal RAM area (iRAM) */

  .data                                 :>iRAM_Self /* initialized data */
  .bss      align(4)                    :>.      /* zero initialized data*/

  .sdabase  align(4)                    :>.      /* initialize globalpointer GP for SDA addressing */
  .sdata    align(4)                    :>.      /* initialized data in SDA area*/
  .sbss     align(4)                    :>.      /* zero initialized data in SDA area*/
  .noclear  align(4) NOCLEAR            :>.

  .zdata    align(4)                    :>.      /* initialized data in ZDA area*/
  .zbss     align(4)                    :>.      /* zero initialized data in ZDA area*/

  .ramtext  align(128) MAX_SIZE(0x2000) :>.      /* initialized and zero-initialized data in TDA area */
  .tdata    align(4)   MAX_SIZE(0x0100) :>.      /* initialized and zero-initialized data in TDA area */
  .exec     align(128)                  :>.
  .stack    align(4) pad(0x1000)        :>.      /* definition of stack size */

  .heapbase align(4)                    :>.
  .heap     align(4)
            pad(addr(iRAM_Self_TOP)-addr(.heapbase))
            NOCLEAR                     :>.      /* definition of heap size */ 

  .top_of_RAM align(4)                  :>iRAM_Self_TOP

/* Start of global RAM area (gRAM) */
  .slsync       min_size(4)             :>gRAM_0    /* user defined segment for semaphore data located in global RAM */
  .sldata       align(4)                :>.         /* user defined segment for initialized data located in global RAM */
  .slbss        align(4)                :>.         /* user defined segment for uninitialized data located in global RAM */

/* Start of internal retention RAM area (iRAM_R) */
  .rdata        align(4)                :>iRAM_R     /* user defined segment for for initialized data located in retention RAM  */
  .rbss         align(4)                :>.          /* user defined segment for zero initialized data located in retention RAM */
  .top_of_RAM_R align(4)                :>iRAM_R_TOP

 }

/*===========================================================================*/
/*      End of File                                                          */
/*===========================================================================*/
