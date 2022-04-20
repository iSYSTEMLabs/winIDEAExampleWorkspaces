/*===========================================================================*/
/* Module       = dr7f7010352afp.ld                                          */
/* Version      = E9.00b                                                     */
/*                manually created for r7f7010352afp                         */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2012 by Renesas Electronics Europe GmbH,                    */
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
/*              Device:         R7F7010352AFP                                */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/

CONSTANTS
{
  zero_start = 0xFEDF0000
}

MEMORY
 {
  iROM          : ORIGIN = 0x00000000,  LENGTH = 512k
  iRAM          : ORIGIN = 0xFEDF0000,  LENGTH = 64k
  iRAM_TOP      : ORIGIN = .         ,  LENGTH = 0
 }

SECTIONS
 {
 /* Start of internal ROM area (iROM) */
  .intvect                       :>iROM   /* start of interrupt vector */
  .intvect_end  0x065B           :>.      /* end   of interrupt vector */
  .rozdata                       :>.      /* constant datas in ZDA area */
  .robase   align(4)             :>.      /* initialize textpointer TP for SDA addressing */
  .rosdata  align(4)             :>.      /* constant datas in SDA area */
  .rodata   align(4)             :>.      /* constant datas in normal area */

  .text     align(4)             :>.      /* program code area */

  .fixaddr  align(4)             :>.      /* ghs internal (compiler) */
  .fixtype  align(4)             :>.      /* ghs internal (compiler) */
  .secinfo  align(4)             :>.      /* ghs internal (runtime library) */
  .syscall  align(4)             :>.      /* ghs internal (linker) */

  .romdata  ROM(.data)           :>.      /* constant data to initialize variables (copied to RAM at startup)*/
  .romzdata ROM(.zdata)          :>.      /* constant data to initialize variables in ZDA area (copied to RAM at startup)*/
  .romsdata ROM(.sdata)          :>.      /* constant data to initialize variables in SDA area (copied to RAM at startup)*/
  .romtdata ROM(.tdata)          :>.      /* constant data to initialize variables in TDA area (copied to RAM at startup)*/

 /* Start of internal primary local RAM area (iRAM_PL) */
  .data     align(4)                    :>iRAM         /* initialized data */
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
  	        pad(addr(iRAM_TOP)-addr(.heapbase))
  	        NOCLEAR	             :>.     /* definition of heap size */ 

  .top_of_RAM_L align(4)         :>iRAM_TOP
 
 }

/*===========================================================================*/
/*      End of File                                                          */
/*===========================================================================*/
