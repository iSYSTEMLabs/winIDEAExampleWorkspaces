INPUT(& &)
ENTRY(Reset)

MEMORY
{
  FLASH (rwx) : ORIGIN = 0x08000000, LENGTH = 128K
	RAM (rwx)   : ORIGIN = 0x20000000, LENGTH = 20K
}

_estack = (ORIGIN(RAM) + LENGTH(RAM) - 8) & 0xFFFFFFF8;

SECTIONS
{
  .text :
  {
    KEEP(*(.isr_vector))
    . = ALIGN(4);
    *(.text*)
    *(.glue_7t) *(.glue_7)
    . = ALIGN(4);
    *(.rodata*)
    *(.eh*)
    *(.vfp11_veneer)
    *(.v4_bx)
    *(.init)
    *(.fini)
    *(.iplt)
    *(.rel.dyn)
    _etext = .;
  } > FLASH
  
  .data :
  {
    _sdata = .;
    . = ALIGN(4);
    *(.data*)
    _edata = .;
  } > RAM AT>FLASH
  
  .bss :
  {
    _sbss = .;
    . = ALIGN(4);
    *(.bss*)
    *(COMMON)
    _ebss = .;
  } > RAM
}


