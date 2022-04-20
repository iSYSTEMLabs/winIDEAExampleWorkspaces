#ifndef CSA
#define CSA             64              /* number of context blocks */
#endif
#ifndef HEAP
#define HEAP            16k             /* heap size */
#endif
#ifndef PCPHEAPFAR
#define PCPHEAPFAR      16k             /* pcp linear heap size */
#endif
#ifndef PCPHEAP
#define PCPHEAP         1k              /* pcp pram heap size */
#endif
#ifndef ISTACK
#define ISTACK          1k              /* interrupt stack size */
#endif
#ifndef USTACK
#define USTACK          16k             /* user stack size */
#endif
#ifndef XVWBUF
#define XVWBUF          256             /* buffer used by CrossView */
#endif
#ifndef RESET
#define RESET           0xA0000800      /* reset address - abs18*/
#endif
#ifndef LIBRARIES
#define LIBRARIES       0xA0100800      /* start address of libraries locate group */
#endif
#ifndef INTTAB
#define INTTAB          0xA0100C00      /* start address of interrupt table */
#endif
#ifndef TRAPTAB
#define TRAPTAB         0xA0100E00      /* start address of trap table */
#endif
#ifndef CSA_START
#define CSA_START       0xD0000000      /* start address of CSA */
#endif
#ifndef STUBS_ALIGNMENT
#define STUBS_ALIGNMENT 0x00008000      /* alignment for stubs (32k) */
#endif
#ifndef STUBS_MAXSIZE
#define STUBS_MAXSIZE   0x00006000      /* max. size for stubs (24k)*/
#endif


architecture TC
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

                heap "pcp_heap_far"
                (
                        min_size = (PCPHEAPFAR),
                        fixed
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
                        "_PCP__lc_ub_heap_far" := "_lc_ub_pcp_heap_far";
                        "_PCP__lc_ue_heap_far" := "_lc_ue_pcp_heap_far";
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
                        
#ifdef A0_START_ADDRESS
                        group a0 (ordered, contiguous, align = 1 << 2, run_addr=(A0_START_ADDRESS))
#else
                        group a0 (ordered, contiguous, align = 1 << 2)
#endif
                        {
                                select ".sdata";
                                select ".sdata.*";
                                select ".sbss";
                                select ".sbss.*";
                        }
                        "_SMALL_DATA_" := sizeof(group:a0) > 0 ? addressof(group:a0) + 0x8000 : 0;

#ifdef A1_START_ADDRESS
                        group a1 (ordered, contiguous, align = 1 << 2, run_addr=(A1_START_ADDRESS))
#else
                        group a1 (ordered, contiguous, align = 1 << 2)
#endif
                        {
                                select ".ldata";
                                select ".ldata.*";
                        }
                        "_LITERAL_DATA_" := sizeof(group:a1) > 0 ? addressof(group:a1) + 0x8000 : 0;
                        
#ifdef A8_START_ADDRESS
                        group a8 (ordered, contiguous, align = 1 << 2, run_addr=(A8_START_ADDRESS))
#else
                        group a8 (ordered, contiguous, align = 1 << 2)
#endif
                        {
                                select ".data_a8";
                                select ".data_a8.*";
                                select ".bss_a8";
                                select ".bss_a8.*";
                                select ".rodata_a8";
                                select ".rodata_a8.*";
                        }
                        "_A8_DATA_" := sizeof(group:a8) > 0 ? addressof(group:a8) + 0x8000 : 0;

#ifdef A9_START_ADDRESS
                        group a9 (ordered, contiguous, align = 1 << 2, run_addr=(A9_START_ADDRESS))
#else
                        group a9 (ordered, contiguous, align = 1 << 2)
#endif
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
#                               include "inttab.lsl"
                        }

                        "_lc_u_trap_tab" = (TRAPTAB);

                        // trapvector table
                        group trap_tab (ordered)
                        {
#                               include "traptab.lsl"           
                        }
                        //
                        // CPU_TC.103 workaround:
                        // 1. Test if (start of) interrupt and trap table located at safe addresses.
                        // 2. Locate stubs at safe addresses.
                        //    The compiler generate stubs for RET, RFE, CALL and JUMP
                        //    instructions. These stubs are to be placed in
                        //    'safe' non-spram.
                        //    Definition safe addresses:
                        //    For tc1161/tc1162/tc1163/tc1164/tc1165/tc1166/
                        //      tc1762/tc1764/tc1766,   address bits [14:13] != "11"
                        //      (first 24k of a 32k aligned memory)
                        //    For tc1100/tc1115/tc1130, address bits [15:14] != "11"
                        //      (first 48k of a 64k aligned memory)
                        //
#ifdef __CPU_TC103__

#  if (INTTAB & STUBS_MAXSIZE ) == STUBS_MAXSIZE
#    error "Interrupt vector table at non-safe addres"
#  endif
#  if (TRAPTAB & STUBS_MAXSIZE ) == STUBS_MAXSIZE
#    error "Trap vector table at non-safe addres"
#  endif

                        group (page, page_size = STUBS_ALIGNMENT[0 .. STUBS_MAXSIZE])
                        {
                                select ".text.stubs";
                        }
#endif
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

 
                map (src_offset=0xd0000000, dest_offset=0xd0000000, size=4M, dest=space:linear);
                section_layout
                {

                        group (ordered, align = 1 << 6, attributes=rw, run_addr=(CSA_START))
                                reserved "csa.01" (size = 64 * (CSA));
                }
        }
                
        space pcp_code
        {
                id = 8;
                mau = 16;
                map (src_offset=0x00000000, dest_offset=0, size=0x04000000, dest=bus:pcp_code_bus);
        }
        
        space pcp_data
        {
                id = 9;
                mau = 32;
                page_size = 0x40;
                map (src_offset=0x00000000, dest_offset=0, size=0x04000000, dest=bus:pcp_data_bus);
                heap "pcp_heap"
                (
                        min_size = (PCPHEAP),
                        fixed
                );
                section_layout
                {
                        "_PCP__lc_ub_heap" := "_lc_ub_pcp_heap";
                        "_PCP__lc_ue_heap" := "_lc_ue_pcp_heap";

                        group ( align = 0x40 )
                        {
                                select ".pcpdata.stack_data";
                        }
                } 
        }

        bus pcp_code_bus
        {
                mau = 8;
                width = 8;
        }
        
        bus pcp_data_bus
        {
                mau = 8;
                width = 8;
        }

        bus fpi_bus
        {
                mau = 8;
                width = 32;
        }
}
