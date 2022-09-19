INPUT(& &)
ENTRY(start)

MEMORY
{
  FLASH_VECT : ORIGIN = 0x00000000, LENGTH = 0x400
  FLASH_RESERVED : ORIGIN = 0x0400, LENGTH = 0xF
  FLASH_CODE : ORIGIN = 0x040F, LENGTH = 0x0007FBF0
  SRAM  : ORIGIN = 0x1FFF8000, LENGTH = 28K
}

_estack = (ORIGIN(SRAM) + LENGTH(SRAM) - 4) & 0xFFFFFFFC;
_VTOR   =  ORIGIN(FLASH_VECT);      /* Must be aligned to 64 bits */

SECTIONS
{
      .vect :
    {
        KEEP(*(.isr_vector)) 
    } > FLASH_VECT
    
    /*
    .bca :
    {
      *(.bca_config)
    } > FLASH_BCA
    */
    
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
    } > FLASH_CODE

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
    
    /*
    .stack :
    {
      . = ALIGN(8);
      _stack_top = . + SIZEOF(.stack);
    } > SRAM
    
    .heap :
    {
      . = ALIGN(8);
    } > SRAM
    */
}