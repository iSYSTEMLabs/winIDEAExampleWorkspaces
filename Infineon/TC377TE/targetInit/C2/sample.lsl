//****************************************************************************
//**                                                                         *
//**  FILE        :  tc1766.lsl                                              *
//**                                                                         *
//**  DESCRIPTION :  LSL description: Infineon TC1766                        *
//**                                                                         *
//**  Copyright 2003-2007 Altium BV                                         *
//**                                                                         *
//****************************************************************************


#include "tc_arch.lsl"

architecture TC1V1.3 extends TC
{
}

#define HAS_ON_CHIP_FLASH       // this derivative has on-chip flash

derivative tc1766
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
    size = 2K;
    type = rom;
    
    //ABS space
    map (dest=bus:tc:fpi_bus, dest_offset=0xA0001000, size=2K);
  }     


  memory pflash1
  {
    mau = 8;
    size = 1500K;
    type = rom;
    map (dest=bus:tc:fpi_bus, dest_offset=0xA03F4240, size=1000K);
  }  
  memory ldram
  {
    mau = 8;
    size = 56k;
    type = ram;
    map (dest=bus:tc:fpi_bus, dest_offset=0xD0000000, size=56k);
  }           

}

