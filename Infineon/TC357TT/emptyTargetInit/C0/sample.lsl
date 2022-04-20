#include "tc_arch.lsl"

architecture TC1V1.3 extends TC
{
}

derivative tc399
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
                
        memory pflash4
        {
                mau = 8;
                size = 3057K;
                type = rom;
                // Leave some ABS18 space for other cores!
                map (dest=bus:tc:fpi_bus, dest_offset=0xA0000000, size=2K); 
                map (dest=bus:tc:fpi_bus, dest_offset=0xA0080000, size=3055K);
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

