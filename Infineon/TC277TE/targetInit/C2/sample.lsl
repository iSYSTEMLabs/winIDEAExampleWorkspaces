#ifndef CSA
#define CSA             64              /* number of context blocks */
#endif
#ifndef HEAP
#define HEAP            1k             /* heap size */
#endif
#ifndef PCPHEAPFAR
#define PCPHEAPFAR      1k             /* pcp linear heap size */
#endif
#ifndef PCPHEAP
#define PCPHEAP         1k              /* pcp pram heap size */
#endif
#ifndef ISTACK
#define ISTACK          1k              /* interrupt stack size */
#endif
#ifndef USTACK
#define USTACK          1k             /* user stack size */
#endif
#ifndef XVWBUF
#define XVWBUF          256             /* buffer used by CrossView */
#endif
#ifndef RESET
#define RESET           0xa0003900      /* reset address */
#endif
#ifndef LIBRARIES
#define LIBRARIES       0xa0032000      /* start address of libraries locate group */
#endif
#ifndef INTTAB
#define INTTAB          0xa0030000      /* start address of interrupt table */
#endif
#ifndef TRAPTAB
#define TRAPTAB         0xa0031000      /* start address of trap table */
#endif
#ifndef CSA_START
#define CSA_START       0xd0006000      /* start address of CSA */
#endif
#ifndef STUBS_ALIGNMENT
#define STUBS_ALIGNMENT 0x00008000      /* alignment for stubs (32k) */
#endif
#ifndef STUBS_MAXSIZE
#define STUBS_MAXSIZE   0x00006000      /* max. size for stubs (24k)*/
#endif


architecture TC1V1.3
{
        endianness
        {
                little;
        }

        space linear
        {
                id = 1;
                mau = 8;
                map (src_offset=0x00000000, dest_offset=0x00000000, size=4G,      dest=bus:fpi_bus);
                                
                copytable
                (
                        align = 1 << 2,
                        copy_unit = 4,
                        dest = linear
                );
                
                stack "ustack"
                (
                        min_size = (USTACK),
                        fixed,
                        align = 1 << 3
                );
                
                stack "istack"
                (
                        min_size = (ISTACK),
                        fixed,
                        align = 1 << 3
                );
                
                heap "heap"
                (
                        min_size = (HEAP),
                        fixed,
                        align = 1 << 3
                );

                start_address
                (
                        run_addr = (RESET),
                        symbol = "_START"
                );

                section_layout
                {
                        // define legacy labels
                        "_lc_bh" := "_lc_ub_heap";
                        "_lc_eh" := "_lc_ue_heap";
                        "_lc_cp" := "_lc_ub_table";
                        
                        // libraries in abs24 space, but reserve abs18 
                        // space for .zro variables 
                        group libraries (ordered, contiguous, run_addr=(LIBRARIES))
                        {
                                select ".text.libc";
                                select ".text.libcs";
                                select ".text.libcs_fpu";
                                select ".text.libfp";
                                select ".text.libfpt";
                                select ".text.librt";
                                select ".text.*.libcp*";
                                select ".text.*.libstl*";
                        }

#if (XVWBUF>0)
                        // buffer for CrossView Pro debugger
                        group (align = 1 << 2) reserved "_xvwbuffer_" (size=XVWBUF, attributes=rw);
                        // Force reference to label used by CrossView
                        "_lc_ub_xvwbuffer" = "_lc_ub__xvwbuffer_";
                        "_lc_ue_xvwbuffer" = "_lc_ue__xvwbuffer_";
#endif

                        // quasi address spaces (relative to register)
                        
                        group a0 (ordered, contiguous, align = 1 << 2)
                        {
                                select ".sdata";
                                select ".sdata.*";
                                select ".sbss";
                                select ".sbss.*";
                        }
                        "_SMALL_DATA_" := sizeof(group:a0) > 0 ? addressof(group:a0) + 0x8000 : 0;

                        group a1 (ordered, contiguous, align = 1 << 2)
                        {
                                select ".ldata";
                                select ".ldata.*";
                        }
                        "_LITERAL_DATA_" := sizeof(group:a1) > 0 ? addressof(group:a1) + 0x8000 : 0;
                        
                        group a8 (ordered, contiguous, align = 1 << 2)
                        {
                                select ".data_a8";
                                select ".data_a8.*";
                                select ".bss_a8";
                                select ".bss_a8.*";
                                select ".rodata_a8";
                                select ".rodata_a8.*";
                        }
                        "_A8_DATA_" := sizeof(group:a8) > 0 ? addressof(group:a8) + 0x8000 : 0;

                        group a9 (ordered, contiguous, align = 1 << 2)
                        {
                                select ".data_a9";
                                select ".data_a9.*";
                                select ".bss_a9";
                                select ".bss_a9.*";
                                select ".rodata_a9";
                                select ".rodata_a9.*";
                        }
                        "_A9_DATA_" := sizeof(group:a9) > 0 ? addressof(group:a9) + 0x8000 : 0;

                        // vector tables
                        
                        "_lc_u_int_tab" = (INTTAB);

                        // interrupt vector table
                        group int_tab (ordered)
                        {
                               #include "inttab.lsl"
                        }

                        "_lc_u_trap_tab" = (TRAPTAB);

                        // trapvector table
                        group trap_tab (ordered)
                        {
                               #include "traptab.lsl"           
                        }
                }
        }
        
        space abs24
        {
                id = 2;
                mau = 8;
                map (src_offset=0x00000000, dest_offset=0x00000000, size=2M, dest=space:linear);
                map (src_offset=0x10000000, dest_offset=0x10000000, size=2M, dest=space:linear);
                map (src_offset=0x20000000, dest_offset=0x20000000, size=2M, dest=space:linear);
                map (src_offset=0x30000000, dest_offset=0x30000000, size=2M, dest=space:linear);
                map (src_offset=0x40000000, dest_offset=0x40000000, size=2M, dest=space:linear);
                map (src_offset=0x50000000, dest_offset=0x50000000, size=2M, dest=space:linear);
                map (src_offset=0x60000000, dest_offset=0x60000000, size=2M, dest=space:linear);
                map (src_offset=0x70000000, dest_offset=0x70000000, size=2M, dest=space:linear);
                map (src_offset=0x80000000, dest_offset=0x80000000, size=2M, dest=space:linear);
                map (src_offset=0x90000000, dest_offset=0x90000000, size=2M, dest=space:linear);
                map (src_offset=0xa0000000, dest_offset=0xa0000000, size=2M, dest=space:linear);
                map (src_offset=0xb0000000, dest_offset=0xb0000000, size=2M, dest=space:linear);
                map (src_offset=0xc0000000, dest_offset=0xc0000000, size=2M, dest=space:linear);
                map (src_offset=0xd0000000, dest_offset=0xd0000000, size=2M, dest=space:linear);
                map (src_offset=0xe0000000, dest_offset=0xe0000000, size=2M, dest=space:linear);
                map (src_offset=0xf0000000, dest_offset=0xf0000000, size=2M, dest=space:linear);      
        }
        
        space abs18
        {
                id = 3;
                mau = 8;
                map (src_offset=0x00000000, dest_offset=0x00000000, size=16k, dest=space:linear);
                map (src_offset=0x10000000, dest_offset=0x10000000, size=16k, dest=space:linear);
                map (src_offset=0x20000000, dest_offset=0x20000000, size=16k, dest=space:linear);
                map (src_offset=0x30000000, dest_offset=0x30000000, size=16k, dest=space:linear);
                map (src_offset=0x40000000, dest_offset=0x40000000, size=16k, dest=space:linear);
                map (src_offset=0x50000000, dest_offset=0x50000000, size=16k, dest=space:linear);
                map (src_offset=0x60000000, dest_offset=0x60000000, size=16k, dest=space:linear);
                map (src_offset=0x70000000, dest_offset=0x70000000, size=16k, dest=space:linear);
                map (src_offset=0x80000000, dest_offset=0x80000000, size=16k, dest=space:linear);
                map (src_offset=0x90000000, dest_offset=0x90000000, size=16k, dest=space:linear);
                map (src_offset=0xa0000000, dest_offset=0xa0000000, size=16k, dest=space:linear);
                map (src_offset=0xb0000000, dest_offset=0xb0000000, size=16k, dest=space:linear);
                map (src_offset=0xc0000000, dest_offset=0xc0000000, size=16k, dest=space:linear);
                map (src_offset=0xd0000000, dest_offset=0xd0000000, size=16k, dest=space:linear);
                map (src_offset=0xe0000000, dest_offset=0xe0000000, size=16k, dest=space:linear);
                map (src_offset=0xf0000000, dest_offset=0xf0000000, size=16k, dest=space:linear);
        }
        
        space csa
        {
                id = 4;
                mau = 8;

                //
                // CSA area should be mapped on internal dsram
                map (src_offset=0xd0006000, dest_offset=0xd0006000, size=4M, dest=space:linear);
                section_layout
                {
                    group (ordered, align = 1 << 6, attributes=rw, run_addr=(CSA_START))
                            reserved "csa.01" (size = 64 * (CSA));
                }
        }
          
        bus fpi_bus
        {
                mau = 8;
                width = 32;
        }
}

processor spe
{
        derivative = tc277;
}

derivative tc277
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
        
        memory pflash1
        {
                mau = 8;
                size = 0x1000;
                type = rom;
                map (dest=bus:tc:fpi_bus, dest_offset=RESET, size=0x1000);
        }
        
        memory pflash2
        {
                mau = 8;
                size = 0x10000;
                type = rom;
                map (dest=bus:tc:fpi_bus, dest_offset=0xa0030000, size=0x10000);
        }

        memory dflash0
        {
                mau = 8;
                size = 16k;
                type = reserved nvram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xafe00000, size=16k);
        }

        memory dflash1
        {
                mau = 8;
                size = 16k;
                type = reserved nvram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xafe10000, size=16k);
        }

        memory brom
        {
                mau = 8;
                size = 16k;
                type = reserved rom;
                map (dest=bus:tc:fpi_bus, dest_offset=0xafffc000, size=16k);
        }
                        
        memory ovram
        {
                mau = 8;
                size = 8k;
                type = reserved ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xc0000000, size=8k);
        }
                
        memory ldram
        {
                mau = 8;
                size = 32k;
                type = ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xd0000000, size=32k);
        }

        memory spram
        {
                mau = 8;
                size = 16k;
                type = reserved ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xd4000000, size=16k);
        }
        
        memory pram
        {
                mau = 8;
                size = 8k;
                type = ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xf0050000, size=8k);
        }

        memory pcode
        {
                mau = 8;
                size = 12k;
                type = ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0xf0060000, size=12k);
        }
}

