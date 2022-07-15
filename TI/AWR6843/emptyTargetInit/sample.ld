ENTRY(reset)

MEMORY
{
  VECT (rwx) : ORIGIN = 0x00000000, LENGTH = 128K
  RAM  (rwx) : ORIGIN = 0x08000000, LENGTH = 168K
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
    KEEP(*(.isr_vector))
    . = ALIGN(4);
    *(.text)
    *(.text*)
    *(.rodata)
    *(.rodata*)
    *(.glue_7) *(.glue_7t)
    *(.eh*)
    . = ALIGN(4);
  } > VECT
  
  .exh :
  {
    *(.ARM.exidx*)
    . = ALIGN(4);
    _etext = .;
  } > VECT
  
  _sidata = .;
  
  .data : AT ( _sidata )
  {
    _sdata = .;
    *(vtable)
    *(.data*)
    . = ALIGN(4);
    _edata = .;
  } > RAM

  .bss :
  {
    _sbss = .;
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    _ebss = .;
    __bss_end__ = _ebss;
  } > RAM
  
  PROVIDE ( end = _ebss );
  PROVIDE ( _end = _ebss );
}