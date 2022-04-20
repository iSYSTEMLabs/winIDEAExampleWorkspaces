////////////////////////////////////////////////////////////////////////////
//
//  File        :  arch51.lsl
//
//
//  Description :  LSL description: 8015 architecture
//
//  Copyright 2009 TASKING BV
//

////////////////////////////////////////////////////////////////////////////
//
// Some default values
//
#ifndef __BASE_PDATA
#  define __BASE_PDATA 0x0
#endif
#ifndef __STACK
#  define __STACK 32
#endif
#ifndef __DHEAP
#  define __DHEAP 2
#endif
#ifndef __PHEAP
#  define __PHEAP 2
#endif
#ifndef __XHEAP
#  define __XHEAP 2k
#endif
#ifndef __VSTACK_XDATA
#  define __VSTACK_XDATA 8k
#endif
#ifndef __VSTACK_PDATA
#  define __VSTACK_PDATA 32
#endif

architecture scr2g
{
    endianness
    {
        big;
    }

    space data
    {
        id = 1;
        mau = 8;
        map (size=0x100, dest=space:idata);

        heap "dheap"
        (
#ifdef __HEAP_FIXED
            fixed,
#endif
            min_size = (__DHEAP)
        );
        section_layout
        {
#ifdef __DHEAPADDR
            group ( ordered, contiguous )
            {
                group (run_addr=__DHEAPADDR) select "dheap";
            }
#endif
        }
    }

    space idata
    {
        id = 2;
        mau = 8;
        map (size=0x100, dest=bus:idata_bus);

        stack "stack"
        (
#ifdef __STACK_FIXED
            fixed,
#endif
            min_size = (__STACK)
        );

        section_layout
        {
            "__lc_bs" := "__lc_ub_stack";
#ifdef __STACKADDR
            group (run_addr=__STACKADDR, ordered, contiguous ) select "stack";
#endif
        }
    }

    space bdata
    {
        id = 3;
        mau = 8;
        map (size=0x10, src_offset=0x20, dest_offset=0x20, dest=space:data);
    }

    space bit
    {
        id = 4;
        mau = 1;
        map (size=0x80, dest_offset=0x20, dest=space:data);
    }

    space xdata
    {
        id = 5;
        mau = 8;
        map (size=64k, dest=bus:xdata_bus);

        stack "vstack_xdata"
        (
#ifdef __VSTACK_FIXED
            fixed,
#endif
            min_size = (__VSTACK_XDATA)
        );
        heap "xheap"
        (
#ifdef __HEAP_FIXED
            fixed,
#endif
            min_size = (__XHEAP)
        );
        section_layout
        {
#ifdef __XHEAPADDR
            group ( ordered, contiguous )
            {
                group (run_addr=__XHEAPADDR) select "xheap";
            }
#endif
            //start of pdata page
            "__lc_base_pdata" := __BASE_PDATA & 0xff00;
        }
    }

    space pdata
    {
        id = 6;
        mau = 8;
        map (size=256, dest_offset=__BASE_PDATA & 0xff00, dest=space:xdata);

        stack "vstack_pdata"
        (
#ifdef __VSTACK_FIXED
            fixed,
#endif
            min_size = (__VSTACK_PDATA) 
        );
        heap "pheap"
        (
#ifdef __HEAP_FIXED
            fixed,
#endif
            min_size = (__PHEAP)
        );
        section_layout
        {
#ifdef __PHEAPADDR
            group ( ordered, contiguous )
            {
                group (run_addr=__PHEAPADDR) select "pheap";
            }
#endif
        }
    }

    space code
    {
        id = 7;
        mau = 8;
        map (size=64k, dest=bus:code_bus);

        start_address
        (
            symbol = "__start"
        );
    }

    space romdata
    {
        id = 8;
        mau = 8;
        map (size=64k, dest=bus:code_bus);

        copytable;
        section_layout
        {
            "__lc_cp" := "__lc_ub_table";
        }
    }

    bus idata_bus
    {
        mau = 8;
        width = 8;
        // size = 256
    }

    bus xdata_bus
    {
        mau = 8;
        width = 8;
        // size = 64k
    }

    bus code_bus
    {
        mau = 8;
        width = 8;
        // size = 64k
    }
}
