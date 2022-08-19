INPUT(& &)

MEMORY
{
  SRAM (rwx)  : ORIGIN = 0x1FFF9000,  LENGTH = 60k
}

_estack = ORIGIN(SRAM) + LENGTH(SRAM);

ENTRY(reset_ISR)

SECTIONS
{
  .text :
  {
    _stext = .;
    KEEP(*(.vectors))
    *(.text*)
    *(.rodata*)
    _etext = .;
  } > SRAM
  
  .data :
  {
    _sdata = .;
    *(.data*)
    _edata = .;
  } > SRAM
  .bss :
  {
    _sbss = .;
    *(COMMON)
    *(.bss*)
    _ebss = .;
  } > SRAM
}
