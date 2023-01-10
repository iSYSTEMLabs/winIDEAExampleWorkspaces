.word _estack
.word _sdata

.section .startup
startup:
  # Set stack and global pointers
  la sp, _estack
  la gp, _sdata + 0x800
  j  reset
