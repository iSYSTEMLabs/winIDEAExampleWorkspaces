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
                map (dest=bus:tc:fpi_bus, dest_offset=0xA0001800, size=2K); //ABS18, ABS24
        }     

        memory pflash3
        {
                mau = 8;
                size = 3M;
                type = rom;
                map (dest=bus:tc:fpi_bus, dest_offset=0xA0900000, size=3M);
        }  
        memory ldram
        {
                mau = 8;
                size = 56k;
                type = ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xD0000000, size=56k);
        }           

}

