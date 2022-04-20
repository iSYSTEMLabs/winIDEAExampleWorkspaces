CONSTANTS
{
  zero_start = 0xFEDF0000
  localRamTop1 = 0xFEDFFC00
  localRamTop2 = 0xFEEE7C00
}

MEMORY
 {
  codeFlash1    : ORIGIN = 0x00000000,  LENGTH = 2M
  codeFlash2    : ORIGIN = 0x00800000,  LENGTH = 2M
  localRam1     : ORIGIN = 0xFEDF0000,  LENGTH = 63k
  localRam2     : ORIGIN = 0xFEED8000,  LENGTH = 63k
 }

SECTIONS
 {
 /* Start of internal ROM area (iROM) */
  .intvect                       :>codeFlash1   /* start of interrupt vector */
  .intvect_end  0x065B           :>.            /* end   of interrupt vector */
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
  .data     align(4)                    :>localRam1 /* initialized data */
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
  	        pad(localRamTop1-addr(.heapbase))
  	        NOCLEAR	             :>.     /* definition of heap size */ 
 
 }