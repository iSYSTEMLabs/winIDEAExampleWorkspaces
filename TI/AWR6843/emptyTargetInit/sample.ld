ENTRY(reset)

MEMORY
{
  RAM (rwx) : ORIGIN = 0x00200000, LENGTH = 128K
}

_estack = (ORIGIN(RAM) + LENGTH(RAM) - 4) & 0xFFFFFFFC;

SECTIONS
{  
  .text_out :
  {
    KEEP(*(.isr_vector*))
    *(.text*)
    . = ALIGN(4);
    *(.rodata*)
    . = ALIGN(4);
    *(.data*)
    . = ALIGN(4);
    _sbss = .;
    *(.bss*)
    _ebss = .;
    *(COMMON)
  } > RAM
}