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
                size = 2092K;
                type = rom;
                // Leave some ABS18 space for other cores!
                map (dest=bus:tc:fpi_bus, dest_offset=0xa0000000, size=2K); 
                map (dest=bus:tc:fpi_bus, dest_offset=0xa0004000, size=2090K);
        }

        memory ldram
        {
                mau = 8;
                size = 56k;
                type = ram;
                // Each core has virtual access to RAM on this address, 
                // but mapped to different physical addresses
                map (dest=bus:tc:fpi_bus, dest_offset=0xd0000000, size=56k);
        }
}

