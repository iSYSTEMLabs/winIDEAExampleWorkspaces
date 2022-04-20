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

// Specify a single processor environment (spe)

processor spe
{
        derivative = tc1766;
}

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
        
        // Specify the on-chip local memories here:
        
        memory pflash0
        {
                mau = 8;
                size = 2K;
                type = rom;
                map (dest=bus:tc:fpi_bus, dest_offset=0xa0001000, size=2K); //ABS18, ABS24
        }     

        memory pflash1
        {
                mau = 8;
                size = 2M;
                type = rom;
                map (dest=bus:tc:fpi_bus, dest_offset=0xa0400000, size=2M);
        }
          
        memory ldram
        {
                mau = 8;
                size = 56k;
                type = ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xd0000000, size=56k);
        }
        

}




