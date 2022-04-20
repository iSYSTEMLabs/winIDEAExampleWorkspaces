#include "tc_arch.lsl"

architecture TC1V1.3 extends TC
{
}

#define HAS_ON_CHIP_FLASH       // this derivative has on-chip flash


derivative tc377
{
  core tc
  {
    architecture = TC1V1.3;
  }

  bus fpi_bus
  {
    mau = 8;
    width = 32;
    map (dest=bus:tc:fpi_bus, dest_offset=0, size=4G);
  }
   
  memory pflash0
  {
      mau = 8;
      size = 3000K;
      type = rom;
      
      // ABS space
      map (dest=bus:tc:fpi_bus, dest_offset=0xA0000000, size=2K); 
      
      map (dest=bus:tc:fpi_bus, dest_offset=0xA0002710, size=2990K);
  }


  memory ldram
  {
          mau = 8;
          size = 56k;
          type = ram;
          // Each core has virtual access to RAM on this address, 
          // but mapped to different physical addresses
          map (dest=bus:tc:fpi_bus, dest_offset=0xD0000000, size=56k);
  }
}

