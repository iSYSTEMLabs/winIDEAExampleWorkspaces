#include "tc_arch.lsl"

architecture TC1V1.8 extends TC
{
}

#define HAS_ON_CHIP_FLASH       // this derivative has on-chip flash

derivative tc499
{
        core tc
        {
                architecture = TC1V1.8;
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
                map (dest=bus:tc:fpi_bus, dest_offset=0xA0000800, size=2K); //ABS18, ABS24
        }     

        memory pflash1
        {
                mau = 8;
                size = 2M;
                type = rom;
                map (dest=bus:tc:fpi_bus, dest_offset=0xA0400000, size=2M);
        }  
        memory ldram
        {
                mau = 8;
                size = 56k;
                type = ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xD0000000, size=56k);
        }           

}

