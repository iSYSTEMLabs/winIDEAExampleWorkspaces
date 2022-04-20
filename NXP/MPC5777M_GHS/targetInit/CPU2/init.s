
  
.section ".boot_header","ax"
.global start


.long 0x005A0001  // boot header config
.long start     // start address

.long 0xFFFFFFFF   // config bit  
.long 0xFFFFFFFF  // config bit 
.long 0x00FD0000  // CPU0 reset vector 
.long 0x00FE0000  // CPU1 reset vector 

 