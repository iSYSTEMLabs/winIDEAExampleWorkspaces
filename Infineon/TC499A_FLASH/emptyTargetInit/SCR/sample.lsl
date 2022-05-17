////////////////////////////////////////////////////////////////////////////
//
//  File        :  51.lsl
//
//
//  Locator description for the Intel 8051 device
//

// include the generic 8051 architecture description
#include "arch51.lsl"

////////////////////////////////////////////////////////////////////////////
//
// memory definitions
//
memory iram
{
    mau = 8;
    type = ram;
    size = 256;
    map ( dest=bus:scr2g:idata_bus, src_offset=0, dest_offset=0, size=256 );
}
memory xram
{
    mau = 8;
    type = ram;
    size = 64k;
    map ( dest=bus:scr2g:xdata_bus, src_offset=0x1000, dest_offset=0x1000, size=4k );
}
memory xrom
{
    mau = 8;
    type = rom;
    size = 4k;
    map ( dest=bus:scr2g:code_bus, src_offset=0x0, dest_offset=0x0, size=4k );
}
