MEMORY
{
  /* Divide RAM in two to simulate ROM and RAM sections */
  ROM(RX)  : ORIGIN = 0x80000000, LENGTH = 8K
  RAM(RWX) : ORIGIN = 0x80002000, LENGTH = 8K
}

STACK_SIZE = 0x200;

SECTIONS
{
  .text :
  {
    *(.startup)
    *(.text .text*)
    . = ALIGN(4);
    *(.rodata .rodata.*)
    _etext = .;
  } > ROM

  .data :
  {
    _sdata = .;
    *(.sdata .sdata.*) *(.data .data.*)
    _edata = .;
  } > RAM AT > ROM

  .bss :
  {
    _sbss = .;
    *(.sbss .sbss.*) *(.bss .bss.*)
    *(COMMON)
    _ebss = .;
  } > RAM

  .stack :
  {
    . += STACK_SIZE;
    _estack = .;
  } > RAM
}