INPUT(& &)

MEMORY
{
  VECT (rx)  : ORIGIN = 0x00000000, LENGTH = 0x400
  FLASH (rx) : ORIGIN = 0x00000400, LENGTH = 0x1FFB00  /* 2M - 1k */
  RAM (rwx)  : ORIGIN = 0x20000000, LENGTH = 0x040000  /* 256k */
}

ENTRY(Reset)
_estackB = (ORIGIN(RAM) + LENGTH(RAM) - 4) & 0xFFFFFFFC;

SECTIONS
{
    .vect :
    {
        _cm4Vect = .;
        KEEP(*(.isr_vector))
    } > VECT
    
    .text :
    {
        . = ALIGN(4);
        _text = .;
        *startup.o(.text)   
        *(.text*)
        *(.glue_7t) *(.glue_7)
        *(.rodata*)
        _etext = .;
    } > FLASH
    
    .data : AT (ADDR(.text) + SIZEOF(.text))
    {
        _data = .;
        *(vtable)
        *(.data*)
        _edata = .;
    } > RAM

    .bss :
    {
      _bss = .;
      *(.bss*)
      *(COMMON)
      _ebss = .;
    } > RAM
}