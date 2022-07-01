INPUT(& &)

MEMORY
{
  ITCM (rx)  : ORIGIN = 0x00000000, LENGTH = 128k
  DTCM (rwx) : ORIGIN = 0x20000000, LENGTH = 128k
}

_estack = ORIGIN(DTCM) + LENGTH(DTCM);

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
  } > ITCM
  
  .data :
  {
    _sdata = .;
    *(.data*)
    _edata = .;
  } > DTCM
  
  .bss :
  {
    _sbss = .;
    *(COMMON)
    *(.bss*)
    _ebss = .;
  } > DTCM
}
