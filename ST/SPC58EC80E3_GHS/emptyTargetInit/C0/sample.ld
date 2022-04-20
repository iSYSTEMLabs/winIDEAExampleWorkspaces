MEMORY
{
  exc_handlers:   ORIGIN = 0x01011000,  LENGTH = 0x00002000
  flash:          ORIGIN = 0x01013000,  LENGTH = 0x0000B000
  
  ram:            ORIGIN = 0x50800000,  LENGTH = 0x0000E000
  heap_mem:       ORIGIN = 0x5080E000,  LENGTH = 0x00001000
  stack_mem:      ORIGIN = 0x5080F000,  LENGTH = 0x00001000
}

DEFAULTS
{
  stack_reserve = 0x1000
  heap_reserve = 0x1000
}

SECTIONS
{
  /********************************************************
  * Flash
  ********************************************************/
  .vectors :
  {
    *(.vectors)
  } > exc_handlers
  
  .flash_text :
  {
    . = align(4);
    *(.__asmResetFunct)
    *(.__asmInit)
    *(.__cResetFunct)
    *(.text)
    *(.vletext)
    *(.syscall)
  } > flash
  
  .rodata   : > .
  .sdata2   : > .
  
  __flashEnd = .;
  
  /********************************************************
  * RAM
  ********************************************************/
  .sdata  LOAD(__flashEnd)                  : > ram
  .data   LOAD(__flashEnd + sizeof(.sdata)) : > .
  .sbss                                     : > .
  .bss                                      : > .
  
  .heap   ALIGN(16) PAD(heap_reserve)   : > heap_mem
  .stack  ALIGN(16) PAD(stack_reserve)  : > stack_mem
  
  __ramBegin  = ADDR(ram);
  __ramEnd    = ENDADDR(stack_mem);
}
