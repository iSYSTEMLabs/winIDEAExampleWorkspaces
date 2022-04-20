MEMORY {
    ldram_mem	: ORIGIN=0x60000000, LENGTH=240K  // CPU 1 Data Scratch-Pad RAM (DSPR)
    spram_mem	: ORIGIN=0x60100000, LENGTH=64K   // CPU 1 Program Scratch-Pad RAM (PSPR)
    pflash0_mem	: ORIGIN=0xA0007D00, LENGTH=32K    // Program Flash 0 (PFLASH0)
    pflash1_mem	: ORIGIN=0xA0307D00, LENGTH=32K   // Program Flash 1 (PFLASH1)
    dflash0_mem	: ORIGIN=0xAF007D00, LENGTH=32K    // Data Flash (DFLASH) Bank 0
    dflash1_mem	: ORIGIN=0xAFC007D0, LENGTH=32K   // Data Flash (DFLASH) Bank 1
    pcpdata_mem	: ORIGIN=0, LENGTH=0   // PCP Data Memory (PRAM)
    pcpcode_mem	: ORIGIN=0, LENGTH=0   // PCP Code Memory (CMEM)
    extflash_mem: ORIGIN=0, LENGTH=0    // External Burst Flash
    extsram_mem	: ORIGIN=0, LENGTH=0    // External SRAM
}
DEFAULTS {
    // these can be changed to bigger values if external memory is used
    //  e.g., 64K for both
    heap_reserve = 18K
    stack_reserve = 16K
}
//
// Program layout for starting in ROM, copying data to RAM,
// and continuing to execute out of ROM.
//
// This defaults to using internal memory.  To use external SRAM too (if
// mpserv_standard.mbs configures it) change the "." for .data to "extsram_mem".

SECTIONS
{
//
// RAM SECTIONS
//
    // These two directives define the location of the Zero Data Area (ZDA)
    // sections.  Put at the beginning of a memory region because the absolute
    // addressing mode has an only 14-bit offset (16KB).
    .zdata	ABS 			:	> ldram_mem
    .zbss	ABS			:	> .
    .zrodata	ABS			:	> .

    // Reserve space for the Context Save Areas (CSAs).  Must be in LDRAM and
    // 64-byte aligned.  crt0 defines the size of the reserved space and
    // initializes the CSAs and PCX, FCX, LCX.
    .contexts	ALIGN(64)		:	> ldram_mem

    // Reserve space for the interrupt stack.
    // The interrupt stack must be 8-byte aligned.
    // The PAD directive tells the linker how much space to reserve.
    .intstack	ALIGN(8) PAD(0x00100)	:	> .

    // Non-zero-initialized data
    .data		ALIGN(4)	:	> . // extsram_mem
    // Zero-initialized data
    .bss		ALIGN(4)	:	> .

    // Small Data Area (SDA)
    .sdata		ALIGN(4)	: { _SMALL_DATA_ = . + 0x8000; } > .
    .sbss                               :       > .

    // Small Data Area referenced by A8 (SDA_A8)
    .data_a8            ALIGN(4)        : { _SMALL_DATA_A8_ = . + 0x8000; } > .
    .bss_a8             CLEAR           :       > .
    .rodata_a8                          :       > .

    // Small Data Area referenced by A9 (SDA_A9)
    .data_a9            ALIGN(4)        : { _SMALL_DATA_A9_ = . + 0x8000; } > .
    .bss_a9             CLEAR           :       > .
    .rodata_a9                          :       > .

    // Reserve space for dynamic allocation
    .heap	ALIGN(4) PAD(heap_reserve)	:	> .
    // Reserve space for the stack
    .stack	ALIGN(4) PAD(stack_reserve)	:	> .

    // Data and text for the PCP have their own addresses.
    // The size of these sections must be a multiple of 8 to avoid bus errors.
    .pcpdata	MIN_SIZE(align(8))	:	> pcpdata_mem
    .pcptext	MIN_SIZE(align(8))	:	> pcpcode_mem

//
// ROM SECTIONS
//

    // This section contains a jump instruction to the beginning of the real
    // .text section and initializes BOOTCFG (Boot Memory + 4)
    .init				:	> pflash0_mem
    
    .initvector				:	> .
    
    .start				:	> .

    // Code
    .text		ALIGN(2)	:	> .

    // The .syscall section is a special section that allows communication
    //  between the application and the MULTI debugger and/or simulator
    .syscall		ALIGN(2)	:	> .

    // Trap vector table aligned at a 256-byte boundary.
    // crt0 initializes BTV to point to the beginning of this section.
    .traps		ALIGN(256)	:	> .

    // The interrupt vector table; crt0 initializes BIV to point to this
    // section.  It must be aligned to a power of two >= the size of the table
    // (note that ALIGN() in elxr rounds down to a power of two).
    // With -delete the interrupt table is automatically truncated by the linker
    // if the higher numbered interrupts are not used.
    .interrupts  sizeof(.interrupts)<=32 ? . : ALIGN(sizeof(.interrupts)*2-1) : > .

    // The .secinfo section contains information about how to initialize
    //  memory when your application loads.  It tells us which sections of
    //  RAM need to be zero-initialized and which sections need to be copied
    //  from ROM.
    .secinfo		ALIGN(4)	:	> .

    // Read-only data
    .rodata		ALIGN(4)	:	> pflash0_mem

    // Literal Data section (read-only)
    .ldata		ALIGN(4)	: { _LITERAL_DATA_ = . + 0x8000; } > .

    .ROM.zdata		ROM(.zdata)	:	> .
    .ROM.data		ROM(.data)	:	> .
    .ROM.sdata		ROM(.sdata)	:	> .
    .ROM.data_a8	ROM(.data_a8)	:	> .
    .ROM.data_a9	ROM(.data_a9)	:	> .


//
// These special symbols mark the bounds of RAM and ROM memory.
// They are used by the MULTI debugger.
//
    __ghs_ramstart  = MEMADDR(spram_mem);
    __ghs_ramend    = MEMENDADDR(spram_mem);
    __ghs_romstart  = MEMADDR(pflash0_mem);
    __ghs_romend    = MEMENDADDR(pflash1_mem);

//
// These special symbols mark the bounds of RAM and ROM images of boot code.
// They are used by the GHS startup code (_start and __ghs_ind_crt0).
//
    __ghs_rambootcodestart  = 0;
    __ghs_rambootcodeend    = 0;
    __ghs_rombootcodestart  = ADDR(.text);
    __ghs_rombootcodeend    = ENDADDR(.secinfo);
}
