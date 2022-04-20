#include "tc_arch.lsl"

architecture TC1V1.3 extends TC
{
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
        
        memory pflash0
        {
                mau = 8;
                size = 2K;
                type = rom;
                map (dest=bus:tc:fpi_bus, dest_offset=0xA0002800, size=2K); //ABS18, ABS24
        }     

        memory pflash5
        {
                mau = 8;
                size = 1M;
                type = rom;
                map (dest=bus:tc:fpi_bus, dest_offset=0xa0F00000, size=1M);
        }  
        memory ldram
        {
                mau = 8;
                size = 56k;
                type = ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xd0000000, size=56k);
        }           

}

