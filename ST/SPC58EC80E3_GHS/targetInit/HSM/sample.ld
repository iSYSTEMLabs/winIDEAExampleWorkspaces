MEMORY
{
  exc_handlers:   ORIGIN = 0x00621000,  LENGTH = 0x00001000
  flash:          ORIGIN = 0x00622000,  LENGTH = 0x0000C000
  
  ram:            ORIGIN = 0xA0000000,  LENGTH = 0x00001000
  heap_mem:       ORIGIN = 0xA0001000,  LENGTH = 0x00000800
  stack_mem:      ORIGIN = 0xA0001800,  LENGTH = 0x00000800
}

DEFAULTS
{
  stack_reserve = 0x800
  heap_reserve = 0x800
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
