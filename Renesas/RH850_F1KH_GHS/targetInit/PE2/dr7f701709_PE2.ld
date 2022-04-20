/*===========================================================================*/
/* Module       = dr7f701709_sc.ld                                           */
/* Version      = V1.20                                                      */
/*                extracted from device file dr7f701709.dvf                  */
/*                by DeFiXRH850 1.0.2.5                                      */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2019 by Renesas Electronics Europe GmbH,                    */
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
/*              Device:         R7F701709                                    */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/

CONSTANTS
{
  /* Device file area start */
     DVF_iROM_0_START          = 0x00000000
     DVF_iROM_0_SIZE           = 4096k
     DVF_iROM_1_START          = 0x00800000
     DVF_iROM_1_SIZE           = 4096k
     DVF_iROM_2_START          = 0x01000000
     DVF_iROM_2_SIZE           = 32k
     DVF_gRAM_0_START          = 0xFEEB8000
     DVF_gRAM_0_SIZE           = 288k
     DVF_gRAM_1_START          = 0xFEFB8000
     DVF_gRAM_1_SIZE           = 288k
     DVF_iRAM_1_START          = 0xFE9D0000
     DVF_iRAM_1_SIZE           = 192k
     DVF_iRAM_0_START          = 0xFEBD0000
     DVF_iRAM_0_SIZE           = 192k
     DVF_iRAM_SELF_START       = 0xFEDD0000    /* iRAM /Self) address, as seen from core */
     DVF_iRAM_SELF_SIZE        = 192k           /* iRAM size, as seen from core    */
     DVF_iRAM_R_START          = 0xFEF00000    /* iRAM address, as seen from DMA  */
     DVF_iRAM_R_SIZE           = 64k           /* iRAM size, as seen from DMA     */
  /* Device file area end*/

  /* User area start */
     USR_STACK_RESERVED_PE1    = 0x2200
     USR_STACK_RESERVED_PE2    = 0x2200
     USR_STACK_RESERVED_GLOBAL = 4k
     USR_HEAP_RESERVED         = 4k    	       /* always in shared memory */
     USR_GRAM_RESERVED_PE1     = 108k
     USR_GRAM_RESERVED_PE2     = 108k
     USR_GRAM_RESERVED_SHARED  = 72k
     USR_ROM_SHARED_SIZE       = 100k
     USR_ROM_SECT_SHARED       = 10k
     USR_ROM_RESERVED_PE1      = 1M
     USR_ROM_SECT_PE1          = 4k
     USR_ROM_RESERVED_PE2      = 1M
     USR_ROM_SECT_PE2          = 4k
     USR_RAM_SECT_PE1          = 2k
     USR_RAM_SECT_PE2          = 2k
     ROM_SHARED_START          = DVF_iROM_0_START
     ROM_SHARED_SIZE           = USR_ROM_SHARED_SIZE
     G0MEV0                    = 0xFFFEEC00                /* G0MEV0  read from DVF   */
     G0MEV31                   = 0xFFFEEC7C                /* G0MEV31 read from DVF   */
     zero_start                = 0xFFFF8000
  /* User area end */
}

MEMORY
 {
  iROM           : ORIGIN = DVF_iROM_0_START,          LENGTH = DVF_iROM_0_SIZE
  iROM1          : ORIGIN = DVF_iROM_1_START,          LENGTH = DVF_iROM_1_SIZE
  iROM2          : ORIGIN = DVF_iROM_2_START,          LENGTH = DVF_iROM_2_SIZE
  iRAM1          : ORIGIN = DVF_iRAM_1_START         , LENGTH = DVF_iRAM_1_SIZE
  iRAM0          : ORIGIN = DVF_iRAM_0_START         , LENGTH = DVF_iRAM_0_SIZE
  iRAM_SELF      : ORIGIN = DVF_iRAM_SELF_START         , LENGTH = DVF_iRAM_SELF_SIZE
  gRAM0          : ORIGIN = DVF_gRAM_0_START,            LENGTH = DVF_gRAM_0_SIZE
  gRAM1          : ORIGIN = DVF_gRAM_1_START,            LENGTH = DVF_gRAM_1_SIZE
  iRAM_R         : ORIGIN = DVF_iRAM_R_START,              LENGTH = DVF_iRAM_R_SIZE
  gMEVREG        : ORIGIN = G0MEV0,                  LENGTH = 0x80
  }

SECTIONS
 {
/* Start of internal ROM area (iROM) */
  .pe2.intvect max_size(0x07F8) align(512)              :           /* interrupts and exceptions PE1 */
  {
	  dr7f701709_startup_PE2.o(.intvect_PE2)
  }                                                       >iROM1      /* start of interrupt vector */
  .rozdata                       :>.            /* constant datas in ZDA area */
  .robase   align(4)             :>.            /* initialize textpointer TP for SDA addressing */
  .rosdata  align(4)             :>.            /* constant datas in SDA area */
  .rodata   align(4)             :>.            /* constant datas in normal area */
  .text     align(4)             :>.            /* program code area */
  .mytext1   min_size( USR_ROM_SECT_PE1) align(4)        :>.         /* user program code area core 1 */
  .mytext2   min_size( USR_ROM_SECT_PE2) align(4)        :>.
  .fixaddr  align(4)                                     :>.            /* ghs internal (compiler) */
  .fixtype  align(4)             :>.            /* ghs internal (compiler) */
  .secinfo  align(4)             :>.            /* ghs internal (runtime library) */
  .syscall  align(4)             :>.            /* ghs internal (linker) */

  .romdata  ROM(.data)           :>.            /* constant data to initialize variables (copied to RAM at startup)*/
  .romzdata ROM(.zdata)          :>.            /* constant data to initialize variables in ZDA area (copied to RAM at startup)*/
  .romsdata ROM(.sdata)          :>.            /* constant data to initialize variables in SDA area (copied to RAM at startup)*/
  .romtdata ROM(.tdata)          :>.            /* constant data to initialize variables in TDA area (copied to RAM at startup)*/

 /* Start of internal primary local RAM area (iRAM_PL) */
  .data     align(4)                    :>gRAM0 /* initialized data */
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
  .heap        align(4) pad(USR_HEAP_RESERVED)
               NOCLEAR                                     :>.         /* definition of heap size */
 
 }