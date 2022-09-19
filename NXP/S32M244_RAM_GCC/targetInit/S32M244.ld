INPUT(& &)
ENTRY(start)

MEMORY
{
  FLASH : ORIGIN = 0x0, LENGTH = 0x400
  FLASH_RESERVED : ORIGIN = 0x0400, LENGTH = 0xF
  VECT : ORIGIN = 0x1FFF8000, LENGTH = 0x1000
  SRAM  : ORIGIN = 0x1FFF9000, LENGTH = 28K
}

_estack = (ORIGIN(SRAM) + LENGTH(SRAM) - 4) & 0xFFFFFFFC;
_VTOR   =  ORIGIN(VECT);      /* Must be aligned to 64 bits */

SECTIONS
{
    .vect :
    {
        _vect = .;
        KEEP(*(.isr_vector)) 
        _vect_end = .;
    } > VECT
    
    .text :
    {
        . = ALIGN(4);
        _text = .;
        *startup.o(.text)   
        *(.text*)
        *(.glue_7t) *(.glue_7)
        *(.rodata*)
        . = ALIGN(4);
        _text_end = .;
        . = ALIGN(4);
    } > SRAM

    .data : AT (ADDR(.text) + SIZEOF(.text))
    {
        . = ALIGN(4);
        _data = .;
        *(vtable)
        *(.data*)
        _data_end = .;
        . = ALIGN(4);
    } > SRAM

    .bss :
    {
        . = ALIGN(4);
        _bss = .;
        *(.bss*)
        *(COMMON)
        _bss_end = .;
        . = ALIGN(4);
    } > SRAM
}