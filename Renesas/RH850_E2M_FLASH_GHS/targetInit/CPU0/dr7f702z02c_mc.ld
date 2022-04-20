/*===========================================================================*/
/* Module       = dr7f702z02c_mc.ld                                          */
/* Version      = V1.40                                                      */
/*                extracted from device file dr7f702z02c.dvf                 */
/*                by DeFiXRH850 1.1.1.6                                      */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2020 by Renesas Electronics Europe GmbH,                    */
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
/*              Device:         R7F702Z02C                                   */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/

CONSTANTS
{
  /* User area start */
     USR_STACK_RESERVED_PE0    = 0x2200
     USR_STACK_RESERVED_PE1    = 0x2200
     USR_STACK_RESERVED_SHARED = 256
     USR_STACK_RESERVED_GLOBAL = 2k
     USR_HEAP_RESERVED         = 1k    	       /* always in shared memory */
     USR_GRAM_RESERVED_SHARED  = 128k
     USR_ROM_SHARED_SIZE       = 100k
     USR_ROM_SECT_SHARED       = 10k
     USR_ROM_RESERVED_PE0      = 1M
     USR_ROM_SECT_PE0          = 4k
     USR_ROM_RESERVED_PE1      = 1M
     USR_ROM_SECT_PE1          = 4k
     USR_RAM_SECT_SHARED       = USR_GRAM_RESERVED_SHARED - USR_HEAP_RESERVED - USR_STACK_RESERVED_SHARED
     USR_CLUSTER1_RSVD         = 64k 
  /* User area end */

  /* Device file area start*/
     DVF_iROM_BANK_A_START      = 0x00000000
     DVF_iROM_BANK_A_SIZE       = 4096k
     DVF_iROM_BANK_B_START      = 0x00400000
     DVF_iROM_BANK_B_SIZE       = 4096k
     DVF_iROM_SHARED0_START    = 0x08000000
     DVF_iROM_SHARED0_SIZE     = 64k
     DVF_iROM_SHARED1_START    = 0x08030000
     DVF_iROM_SHARED1_SIZE     = 16k
     DVF_iRAM_SELF_START       = 0xFDE00000    /* iRAM address, as seen from core */
     DVF_iRAM_SELF_SIZE        = 32k           /* iRAM size, as seen from core    */
     DVF_cRAM0_START          = 0xFE000000
     DVF_cRAM0_SIZE           = 512k
     DVF_cRAM1_START          = 0xFE080000
     DVF_cRAM1_SIZE           = 192k
     DVF_iRAM_1_START          = 0xFDA00000
     DVF_iRAM_1_SIZE           = 32k
     DVF_iRAM_0_START          = 0xFDC00000
     DVF_iRAM_0_SIZE           = 32k
  /* Device file area end*/

  /* Global parameter area start */
  /* Total Code Flash Count: 4 */
     ROM_ALL_START             = DVF_iROM_BANK_A_START
     ROM_ALL_SIZE              = DVF_iROM_BANK_A_SIZE
     ROM_CLUSTER1_START        = DVF_iROM_BANK_A_START
     ROM_SHARED_START          = DVF_iROM_BANK_A_START
     ROM_SHARED_SIZE           = USR_CLUSTER1_RSVD
     ROM_CLUSTER1_START        = DVF_iROM_BANK_A_START
     ROM_PE0_START             = DVF_iROM_BANK_A_START  + USR_CLUSTER1_RSVD
     ROM_PE0_SIZE              = DVF_iROM_BANK_A_SIZE - USR_CLUSTER1_RSVD
     ROM_PE1_START             = DVF_iROM_BANK_B_START
     ROM_PE1_SIZE              = DVF_iROM_BANK_B_SIZE
     RAM_PE0_START             = DVF_iRAM_0_START
     RAM_PE0_SIZE              = DVF_iRAM_0_SIZE
     RAM_PE1_START             = DVF_iRAM_1_START
     RAM_PE1_SIZE              = DVF_iRAM_1_SIZE
     GRAM_0_START              = DVF_cRAM0_START
     GRAM_0_SIZE               = DVF_cRAM0_SIZE
     GRAM_1_START              = DVF_cRAM1_START
     GRAM_1_SIZE               = DVF_cRAM1_SIZE
     zero_start                = 0xFFFF8000

    ROM_START      = ROM_ALL_START;             /* start of PE0 area incl EBASE and RESET */
    ROM_SIZE       = ROM_PE0_SIZE;
    RAM_START      = RAM_PE0_START;
    RAM_SIZE       = RAM_PE0_SIZE;
    STACK_RESERVED = USR_STACK_RESERVED_PE0;

}
  /* Global Parameter area end */

MEMORY
{
  iROM           : ORIGIN = ROM_START,               LENGTH = ROM_SIZE

  iRAM         : ORIGIN = RAM_START,               LENGTH = RAM_SIZE

  gRAM0          : ORIGIN = GRAM_0_START,            LENGTH = GRAM_0_SIZE
  gRAM1          : ORIGIN = GRAM_1_START,            LENGTH = GRAM_1_SIZE
  }

SECTIONS
 {

/* Start of internal ROM area (iROM) */
  .intvect_PE0 max_size(0x0A00) align(512)               :>iROM      /* start of interrupt vector core PE0 */

/* Next PE/Cluster entries */
  .rozdata     align(4)                                    :>iROM      /* constant datas in ZDA area */
  .robase      align(4)                                    :>.         /* initialize textpointer TP for SDA addressing */
  .rosdata     align(4)                                    :>.         /* constant datas in SDA area */
  .rodata      align(4)                                    :>.         /* constant datas in normal area */
  .text        align(4)                                    :>.         /* program code area */

  .pe0.text    min_size( USR_ROM_SECT_PE0) align(4)        :>.         /* user program code area core 1 */

  .fixaddr     align(4)                                    :>.         /* ghs internal (compiler) */
  .fixtype     align(4)                                    :>.         /* ghs internal (compiler) */
  .secinfo     align(4)                                    :>.         /* ghs internal (runtime library) */
  .syscall     align(4)                                    :>.         /* ghs internal (linker) */
  .romdata     ROM(.data)                                  :>.         /* constant data to initialize variables (copied to RAM at startup)*/

  .romsdata  ROM(.sdata)                                   :>.         /* constant data to initialize variables in SDA area (copied to RAM at startup)*/

/* Start of internal RAM area (iRAM) */
    .stack align(4) pad(STACK_RESERVED)                    :>iRAM      /* definition of stack size */
    .sda_start align(4)                                    :>.         /* initialize globalpointer GP for SDA addressing */
    .sdata     align(4)                                    :>.         /* initialized data in SDA area*/
    .sbss      align(4)                                    :>.         /* zero initialized data in SDA area*/
    .zbss      align(4)                                    :>.         /* zero initialized data in ZDA area*/
    .sda_end   align(4)                                    :>.         /* end of SDA addressing */

  .data        align(8)                                    :>.         /* initialized data */
  .bss         align(4)                                    :>.         /* zero initialized data*/

  .tdata       align(4) SIZE(0x0100)                       :>.         /* initialized and zero-initialized data in TDA area */
  .heap        align(4) pad(USR_HEAP_RESERVED)
               NOCLEAR                                     :>.         /* definition of heap size */
/*  Symbols for compiler references */
  ___ghs_romstart    = MEMADDR(iROM);
  ___ghs_romend      = MEMENDADDR(iROM);
  
  ___ghs_ramstart  = MEMADDR(iRAM);
  ___ghs_ramend    = MEMENDADDR(iRAM);
 
  ___ghs_gramstart0  = MEMADDR(gRAM0);
  ___ghs_gramend0    = MEMENDADDR(gRAM0);

  ___ghs_gramstart1  = MEMADDR(gRAM1);
  ___ghs_gramend1    = MEMENDADDR(gRAM1);

  /* These special symbols mark the bounds of RAM and ROM images of boot code. */
  /* They are used by the GHS startup code (_start and __ghs_ind_crt0).        */
  // ___ghs_rambootcodestart  = 0;
  // ___ghs_rambootcodeend    = 0;
  // ___ghs_rombootcodestart  = ADDR(.text);
  // ___ghs_rombootcodeend    = ENDADDR(.fixtype);

  _RESETVECT         = 0x08000000;
}

/*===========================================================================*/
/*      End of File                                                          */
/*===========================================================================*/
