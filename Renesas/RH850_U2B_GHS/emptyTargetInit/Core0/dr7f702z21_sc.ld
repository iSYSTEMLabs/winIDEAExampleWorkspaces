/*===========================================================================*/
/* Module       = dr7f702z19_sc.ld                                           */
/* Version      = E0.90r                                                     */
/*                extracted from device file dr7f702z19.dvf                  */
/*                by DeFiXRH850 1.1.0.8                                      */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2018 by Renesas Electronics Europe GmbH,                    */
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
/*              Device:         R7F702Z19                                    */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/

CONSTANTS
{
  /* User area start */
     USR_STACK_RESERVED_PE0    = 0x2200
     USR_STACK_RESERVED_PE1    = 0x2200
     USR_STACK_RESERVED_PE2    = 0x2200
     USR_STACK_RESERVED_PE3    = 0x2200
     USR_STACK_RESERVED_GLOBAL = 4k
     USR_HEAP_RESERVED         = 4k    	       /* always in shared memory */
     USR_cRAM_RESERVED_SHARED  = 128k
     USR_ROM_SHARED_SIZE       = 100k
     USR_ROM_SECT_SHARED       = 10k
     USR_ROM_RESERVED_PE0      = 1M
     USR_ROM_SECT_PE0          = 4k
     USR_ROM_RESERVED_PE1      = 1M
     USR_ROM_SECT_PE1          = 4k
     USR_ROM_RESERVED_PE2      = 1M
     USR_ROM_SECT_PE2          = 4k
     USR_ROM_RESERVED_PE3      = 1M
     USR_ROM_SECT_PE3          = 4k
     USR_RAM_SECT_PE0          = 2k
     USR_RAM_SECT_PE1          = 2k
     USR_RAM_SECT_PE2          = 2k
     USR_RAM_SECT_PE3          = 2k
     zero_start                = 0xFFFF8000
     iRAM0Top                  = 0xFDC10000
  /* User area end */

  /* Device file area start*/
     DVF_iROM_BANKA_START      = 0x00000000
     DVF_iROM_BANKA_SIZE       = 3072k
     DVF_iROM_BANKB_START      = 0x00300000
     DVF_iROM_BANKB_SIZE       = 3072k
     DVF_iROM_BANKC_START      = 0x00600000
     DVF_iROM_BANKC_SIZE       = 2048k
     DVF_iROM_BANKD_START      = 0x00800000
     DVF_iROM_BANKD_SIZE       = 2048k
     DVF_iROM_MIRROR_START      = 0x04000000
     DVF_iROM_MIRROR_SIZE       = 16384k
     DVF_iROM_SHARED0_START    = 0x08000000
     DVF_iROM_SHARED0_SIZE     = 64k
     DVF_iROM_SHARED1_START    = 0x08030000
     DVF_iROM_SHARED1_SIZE     = 32k
     DVF_iROM_SHARED2_START    = 0x08050000
     DVF_iROM_SHARED2_SIZE     = 64k
     DVF_iROM_SHARED3_START    = 0x08300000
     DVF_iROM_SHARED3_SIZE     = 64k
     DVF_iROM_SHARED4_START    = 0x08330000
     DVF_iROM_SHARED4_SIZE     = 32k
     DVF_iROM_SHARED5_START    = 0x08350000
     DVF_iROM_SHARED5_SIZE     = 64k
     DVF_iROM_SHARED6_START    = 0x08650000
     DVF_iROM_SHARED6_SIZE     = 64k
     DVF_iROM_SHARED7_START    = 0x08850000
     DVF_iROM_SHARED7_SIZE     = 64k
     DVF_iROM_SHARED8_START    = 0x0BFF0000
     DVF_iROM_SHARED8_SIZE     = 64k
     DVF_iRAM_SELF_START       = 0xFDE00000    /* iRAM address, as seen from core */
     DVF_iRAM_SELF_SIZE        = 64k           /* iRAM size, as seen from core    */
     DVF_cRAM_0_START          = 0xFE000000
     DVF_cRAM_0_SIZE           = 384k
     DVF_cRAM_1_START          = 0xFE080000
     DVF_cRAM_1_SIZE           = 384k
     DVF_iRAM_3_START          = 0xFD600000
     DVF_iRAM_3_SIZE           = 64k
     DVF_iRAM_2_START          = 0xFD800000
     DVF_iRAM_2_SIZE           = 64k
     DVF_iRAM_1_START          = 0xFDA00000
     DVF_iRAM_1_SIZE           = 64k
     DVF_iRAM_0_START          = 0xFDC00000
     DVF_iRAM_0_SIZE           = 64k
  /* Device file area end*/
}

MEMORY
{
  iROM           : ORIGIN = DVF_iROM_BANKA_START,          LENGTH = DVF_iROM_BANKA_SIZE
  iROM1          : ORIGIN = DVF_iROM_BANKB_START,          LENGTH = DVF_iROM_BANKB_SIZE
  iROM2          : ORIGIN = DVF_iROM_BANKC_START,          LENGTH = DVF_iROM_BANKC_SIZE
  iROM3          : ORIGIN = DVF_iROM_BANKD_START,          LENGTH = DVF_iROM_BANKD_SIZE
  iBOOT          : ORIGIN = DVF_iROM_SHARED0_START,  LENGTH = DVF_iROM_SHARED0_SIZE
  iRAM3          : ORIGIN = DVF_iRAM_3_START         , LENGTH = DVF_iRAM_3_SIZE
  iRAM2          : ORIGIN = DVF_iRAM_2_START         , LENGTH = DVF_iRAM_2_SIZE
  iRAM1          : ORIGIN = DVF_iRAM_1_START         , LENGTH = DVF_iRAM_1_SIZE
  iRAM0          : ORIGIN = DVF_iRAM_0_START         , LENGTH = DVF_iRAM_0_SIZE
  iRAM_SELF      : ORIGIN = DVF_iRAM_SELF_START         , LENGTH = DVF_iRAM_SELF_SIZE
  cRAM0          : ORIGIN = DVF_cRAM_0_START,            LENGTH = DVF_cRAM_0_SIZE
  cRAM1          : ORIGIN = DVF_cRAM_1_START,            LENGTH = DVF_cRAM_1_SIZE
  }

SECTIONS
 {
 /* Start of internal ROM area (iROM) */
  .intvect_PE0 max_size(0x1000) align(1024)               :>iROM      /* start of interrupt vector */
  .intvect_PE1 max_size(0x1000) align(1024)               :>.
  .rozdata                       :>.            /* constant datas in ZDA area */
  .robase   align(4)             :>.            /* initialize textpointer TP for SDA addressing */
  .rosdata  align(4)             :>.            /* constant datas in SDA area */
  .rodata   align(4)             :>.            /* constant datas in normal area */

  .text     align(4)             :>.            /* program code area */

  .fixaddr  align(4)             :>.            /* ghs internal (compiler) */
  .fixtype  align(4)             :>.            /* ghs internal (compiler) */
  .secinfo  align(4)             :>.            /* ghs internal (runtime library) */
  .syscall  align(4)             :>.            /* ghs internal (linker) */

  .romdata  ROM(.data)           :>.            /* constant data to initialize variables (copied to RAM at startup)*/
  .romzdata ROM(.zdata)          :>.            /* constant data to initialize variables in ZDA area (copied to RAM at startup)*/
  .romsdata ROM(.sdata)          :>.            /* constant data to initialize variables in SDA area (copied to RAM at startup)*/
  .romtdata ROM(.tdata)          :>.            /* constant data to initialize variables in TDA area (copied to RAM at startup)*/

 /* Start of internal primary local RAM area (iRAM_PL) */
  .data     align(4)                    :>iRAM0     /* initialized data */
  .bss      align(4)                    :>.         /* zero initialized data*/
 
  .sdabase  align(4)                    :>.         /* initialize globalpointer GP for SDA addressing */
  .sdata    align(4)                    :>.         /* initialized data in SDA area*/
  .sbss     align(4)                    :>.         /* zero initialized data in SDA area*/

  .zdata    align(4)                    :>.         /* initialized data in ZDA area*/
  .zbss     align(4)                    :>.         /* zero initialized data in ZDA area*/

  .ramtext  align(128) MAX_SIZE(0x2000) :>.         /* initialized and zero-initialized data in TDA area */
  .tdata    align(4)   MAX_SIZE(0x0100) :>.         /* initialized and zero-initialized data in TDA area */
  .exec     align(128)                  :>.  
  .stack    align(4) pad(0x0800)        :>.         /* definition of stack size */

  .heapbase align(4)             :>.
  .heap     align(4)
  	        pad(iRAM0Top-addr(.heapbase))
  	        NOCLEAR	             :>.     /* definition of heap size */ 
 
 }

/*===========================================================================*/
/*      End of File                                                          */
/*===========================================================================*/
