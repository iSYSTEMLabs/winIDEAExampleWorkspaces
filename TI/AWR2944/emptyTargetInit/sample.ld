INPUT(& &)

ENTRY(reset_vect)

MEMORY
{
  RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 64k  /* TCMA_CR5A */
}

_stack_size_usr = 0x800;
_stack_size_svc = 0x800;
_stack_size_abt = 0x800;
_stack_size_und = 0x800;
_stack_size_irq = 0x800;
_stack_size_fiq = 0x800;

_estack_sys = (ORIGIN(RAM) + LENGTH(RAM) - 4) & 0xFFFFFFFC;
_estack_usr = _estack_sys - 0x800;
_estack_svc = _estack_usr - _stack_size_usr;
_estack_abt = _estack_svc - _stack_size_svc;
_estack_und = _estack_abt - _stack_size_abt;
_estack_irq = _estack_und - _stack_size_und;
_estack_fiq = _estack_irq - _stack_size_irq;

SECTIONS
{  
  .text :
  {
    _stext = .;
    KEEP(*(.isr_vector))
    . = ALIGN(4);
    *(.text)
    *(.text*)
    *(.rodata)
    *(.rodata*)
    . = ALIGN(4);
    _etext = .;
  } > RAM
  
  .data :
  {
    . = ALIGN(4);
    _sdata = .;
    *(.data*)
    _edata = .;
  } > RAM

  .bss :
  {
    . = ALIGN(4);
    _sbss = .;
    *(.bss*)
    *(COMMON)
    _ebss = .;
  } > RAM
}