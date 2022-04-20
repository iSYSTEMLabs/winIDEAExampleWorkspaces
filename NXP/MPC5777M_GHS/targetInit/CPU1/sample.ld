
MEMORY {
// Memory map for the MPC5777M

// Flash blocks. UTEST starts at 0x00400000.
// The boot header starts at 0x00fc0000, and data flash follows.
    flash_rsvd1  : ORIGIN = 0x00400000, LENGTH = 16k
    flash_memory : ORIGIN = 0x01020000,		LENGTH = 128k
    exception_handlers: org = 0x01040000,   LENGTH = 4k
    flash_rsvd2  : ORIGIN = .,          LENGTH = 0 

// 384KB of system SRAM starting at 0x40000000
    dram_rsvd1   : ORIGIN = 0x40008000, LENGTH = 0 // reserved for interrupt vectors
    dram_reset   : ORIGIN = .,	        LENGTH = 0
    dram_memory  : ORIGIN = .,          LENGTH = 0x4000
    dram_rsvd2   : ORIGIN = .,          LENGTH = 0
}

DEFAULTS {
    stack_reserve = 0x1000
    heap_reserve = 0x1000
}

		
//
// Program layout for starting in ROM, copying data to RAM,
// and continuing to execute out of ROM.
//

SECTIONS
{
//
// RAM SECTIONS
//
    .PPC.EMB.sdata0 	          		    ABS : > dram_memory
    .PPC.EMB.sbss0                            CLEAR ABS : > .
   
    .sdabase 		       		       ALIGN(16): > dram_memory	
    .sdata 						: > .
    .sbss 						: > .
    .data 						: > .
    .bss 						: > .
    .ghcovfz 					  CLEAR : > .
    .ghcovcz 					  CLEAR	: > .
    .ghcovdz 					  CLEAR	: > .

    .heap                  ALIGN(16) PAD(heap_reserve)  : > dram_memory
    .stack                 ALIGN(16) PAD(stack_reserve) : > .
//
// ROM SECTIONS
//
    .boot_header					: > flash_memory
    .xcptn   			: > exception_handlers
    .text						: > flash_memory
    .vletext						: > .
    .CoverageA          : > .
    .storeRegisters     : > .
    .syscall						: > .

    .rodata		 				: > .
    .toc 				     SHFLAGS(2)	: > .
    .sdata2 						: > .
    .opd 				     SHFLAGS(2)	: > .

    .secinfo 						: > .
    .fixaddr 						: > .
    .fixtype 						: > .

    .CROM.PPC.EMB.sdata0 	  CROM(.PPC.EMB.sdata0) : > .
    .CROM.sdata  	            	   CROM(.sdata) : > .
    .CROM.data 	            		    CROM(.data) : > .

//
// These special symbols mark the bounds of RAM and ROM memory.
// They are used by the MULTI debugger.
//
    __ghs_ramstart  = MEMADDR(dram_rsvd1);
    __ghs_ramend    = MEMENDADDR(dram_memory);
    __ghs_romstart  = MEMADDR(flash_rsvd1);
    __ghs_romend    = MEMENDADDR(flash_rsvd2);
    
    

//
// These special symbols mark the bounds of RAM and ROM images of boot code.
// They are used by the GHS startup code (_start and __ghs_ind_crt0).
//
    __ghs_rambootcodestart  = 0;
    __ghs_rambootcodeend    = 0;
    __ghs_rombootcodestart  = ADDR(.text);
    __ghs_rombootcodeend    = ENDADDR(.fixtype);
}

/*===========================================================================*/
/*      End of File                                                          */
/*===========================================================================*/
