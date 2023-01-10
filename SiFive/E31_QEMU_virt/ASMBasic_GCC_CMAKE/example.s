.option norvc           # Disable generation of compressed instructions

addi t0, zero, 0        # t0 = 0
addi t1, zero, 3        # t1 = 3
lui  t2, 0x2            # t2 = 2 << 12
addi t2, t2,   0x710    # t2 = t2 + 0x710 [t2 = 0x2710 (10,000)]

label1:
  add  t0, t1, t0       # t0 = t0 + t1
  addi t1, t1, 1        # t1 += 1
  bgeu t2, t1, label1   # Loop while t2 >= t1

lui   t1, 0x80000       # t1  = 0x80000 << 12 [t1 = 0x80000000]
addi  t1, t1, 0x100     # t1 += 0x100         [t1 = 0x80000100]
sw    t0, 0(t1)         # Store value in t0 to address in t1

# Change order of 3 (32-bit) values in memory
lui  t1, %hi(data)      # t1 = high_20_bits_of_address(data)
addi t1, t1, %lo(data)  # t1 = t1 + low_12_bits_of_address(data)
lw   t3, 0(t1)          # t3 = value from address(t1 + 0)
lw   t4, 4(t1)          # t4 = value from address(t1 + 4)
lw   t5, 8(t1)          # t5 = value from address(t1 + 8)
sw   t3, 8(t1)          # Store value in t3 to address in t1 + 8
sw   t4, 4(t1)          # Store value in t4 to address in t1 + 4
sw   t5, 0(t1)          # Store value in t5 to address in t1 + 0

# Infinite loop
loop:
  jal zero, loop        # Discard return address

data:
  .word 0xBAADC0DE
  .word 0xDEADBEEF
  .word 0xC0FFEE
