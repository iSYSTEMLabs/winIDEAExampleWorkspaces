MEMORY
{
  RAM(RWX) : ORIGIN = 0x80000000, LENGTH = 16K
}

SECTIONS
{
  .text :
  {
    *(.text .text*)
  } > RAM

  .data :
  {
    *(.sdata .sdata.*) *(.data .data.*)
  } > RAM

  .bss :
  {
    *(.sbss .sbss.*) *(.bss .bss.*)
    *(COMMON)
  } > RAM
}