////////////////////////////////////////////////////////////////////////////
//
//  File        :  cm7.lsl
//
//  Version     :  @(#)cm7.lsl  1.1     15/05/21
//
//  Description :  Example LSL file for CMSIS usage
//
//  Copyright 2015 Altium BV
//
//  Macros specific to control this LSL file:
//
//  __MEMORY            Define this macro to suppress definition of on-chip 
//                      memory. Must be defined when you want to define on-chip
//                      in your project's LSL file.
//  __ROM_SIZE          Specifies the size of ROM memory to be allocated
//  __RAM_SIZE          Specifies the size of RAM memory to be allocated
//  __NO_DEFAULT_AUTO_VECTORS
//                      When enabled the interrupt vector table will not be 
//                      generated
//
////////////////////////////////////////////////////////////////////////////

#ifndef __NO_DEFAULT_AUTO_VECTORS
// Suppress the vectors as defined arm_arch.lsl, because we define our 
// own vectors for CMSIS
#define __CMSIS_VECTORS                 1
#define __NO_DEFAULT_AUTO_VECTORS       1
#endif
#include "arm_arch.lsl"

//
// If no memory is defined yet use the following memory settings
//

// define rom size
#ifndef __ROM_SIZE
#define __ROM_SIZE              256k
#endif

// define ram size
#ifndef __RAM_SIZE
#define __RAM_SIZE              256k
#endif

memory xrom
{
    mau = 8;
    type = rom;
    size = __ROM_SIZE;
    map (size =__ROM_SIZE, dest_offset = 0x00400000, dest = bus:ARM:local_bus );
}

memory xram
{
    mau = 8;
    type = ram;
    size = __RAM_SIZE;
    map (size = __RAM_SIZE, dest_offset = 0x20400000, dest = bus:ARM:local_bus );
}

