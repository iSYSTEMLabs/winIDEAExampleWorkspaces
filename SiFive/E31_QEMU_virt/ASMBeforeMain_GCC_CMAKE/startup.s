.word _estack
.word _sdata
.word _edata
.word _sbss
.word _ebss

.section .startup
reset:
  # Set stack and global pointers
  la sp, _estack
  la gp, _sdata + 0x800

  # Copy initialized data segment to ram
  la x5, _etext
  la x6, _sdata
  la x7, _edata
loop_copy_init_data:
  lw x28, 0(x5)
  sw x28, 0(x6)
  addi x5, x5, 4
  addi x6, x6, 4
  bltu x6, x7, loop_copy_init_data

  # Zero initialize bss section
  la x5, _sbss
  la x6, _ebss
bss_init_loop:
  sw x0, 0(x5)
  addi x5, x5, 4
  bgtu x6, x5, bss_init_loop

  jal some_call # Call some_call function
  jal main      # Call main function

loop:
  j loop # Infinite loop
