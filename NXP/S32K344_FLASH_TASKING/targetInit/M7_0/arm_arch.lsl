////////////////////////////////////////////////////////////////////////////
//
//  File        :  arm_arch.lsl
//
//  Version     :  @(#)arm_arch.lsl     1.24    15/06/17
//
//  Description :  Generic LSL file for ARM architectures
//
//  Copyright 2008-2015 Altium BV
//
// The following macros are available to control this file:
// 
#define __NO_AUTO_VECTORS 1            Define this macro when you do not want to generate a 
//                              vector table automatically.
// __NO_DEFAULT_AUTO_VECTORS    Define this macro when you define your own vectors.
//  __VECTOR_TABLE_RAM_COPY     // Define this macro to enable copying the vector table 
//                              at startup from ROM to RAM.
#define __VECTOR_TABLE_ROM_ADDR 0x0000     Specify the vector table address in ROM
// __VECTOR_TABLE_RAM_ADDR      Specify the vector table address in RAM when the the
//                              it is copied from ROM to RAM (__VECTOR_TABLE_RAM_COPY)
// __NR_OF_VECTORS              The number of vectors to be allocated in the vector table
//
// __SET_VTOR_BIT29             Set this if bit29 of the vtor sfr indicates vector table is in RAM
// __STACK                      Specify the (minimum) size of the stack
// __STACKADDR                  Specify the start address of the stack. If not defined
//                              the stack will be located freely
// __STACK_FIXED                Define this macro if you do not want to let the stack
//                              section grow to the maximum available memory
// __STACK_THREADS              Specify the number of threads used to calculate the estimated
//                              stack usage which is listed in the map file.
// 
// __HEAP                       Specify the (minimum) size of the heap
// __HEAPADDR                   Specify the start address of the heap. If not defined
//                              the heap will be located freely.
// __HEAP_FIXED                 Define this macro if you do not want to let the heap
//                              section grow to the maximum available memory
//
// __START                      Specify a start address
//
// __MTB_SIZE                   The size of the Micro Trace Buffer.

//
// The following macros are not applicable to ARMv6M, ARMv7M and ARMv7EM:
//
// __STACK_FIQ     
// __STACK_IRQ     
// __STACK_SVC     
// __STACK_ABT     
// __STACK_UND     
//
// __PROCESSOR_MODE             Define the value for processor mode in the CPSR
// __IRQ_BIT                    Define the value for the I bit in the CPSR, 
//                              must be 0x80, or 0x00
// __FIQ_BIT                    Define the value for the F bit in the CPSR, 
//                              must be 0x40, or 0x00
//
// __PIC_VECTORS                Define this macro to generate the vector table for 
//                              position independent code
// __FIQ_HANDLER_INLINE         Define this macro to inline the FIQ handler in the 
//                              vector table
// 
// The following macro is only applicable to ARMv7R and ARMv7A:
//
// __THUMB__                    Define this when using Thumb startup code and vectors
//
// The following macro is for internal use only:
//
// __THUMB_OFFSET
//
////////////////////////////////////////////////////////////////////////////


// Global stack and heap sizes
#ifndef __STACK
#  define __STACK                       32k
#endif
#ifndef __HEAP
#  define __HEAP                        32k
#endif

// Interrupt stack sizes (not used for ARMv6m, ARMv7M and ARMv7EM)
#ifndef __STACK_FIQ
#define __STACK_FIQ                   8
#endif
#ifndef __STACK_IRQ
#define __STACK_IRQ                   8
#endif
#ifndef __STACK_SVC
#define __STACK_SVC                   8
#endif
#ifndef __STACK_ABT
#define __STACK_ABT                   8
#endif
#ifndef __STACK_UND
#define __STACK_UND                   8
#endif

// The call graph is used to calculate the estimated stack usage which is listed in the map
// file. Each root node of the call graph is treated as a separate thread that can run
// independently from the other threads. The estimated stack usage for a root node is the
// highest sum of stack usage values along a path to a leaf node. The total estimated stack
// usage of a link task is the sum of the calculated stack usage of such independent call
// graphs. If only a limited number of these threads can make use of a specific stack at a
// time, you can specify this by assigning a number to the threads keyword on that stack's
// definition. When threads is set to n, only the n highest stack usage numbers of root nodes
// are summed. A threads argument equal to zero or negative is ignored.
#ifndef __STACK_THREADS
#  if defined(__CPU_ARMV7M__) || defined(__CPU_ARMV7EM__) || defined(__CPU_ARMV6M__)
#    define __STACK_THREADS             2
#  endif
#endif

// Compose application mode, used in startup code (not used for ARMv6m, ARMv7M and ARMv7EM)
#ifndef __PROCESSOR_MODE
#  define __PROCESSOR_MODE              0x1F            /* SYS mode */
#endif
#ifndef __IRQ_BIT
#  define __IRQ_BIT                     0x80            /* IRQ interrupts disabled */
#endif
#ifndef __FIQ_BIT
#  define __FIQ_BIT                     0x40            /* FIQ interrupts disabled */
#endif
#define __APPLICATION_MODE              (__PROCESSOR_MODE | __IRQ_BIT | __FIQ_BIT)

//
// Vector table control macros
// 

// Vector table address in ROM
#ifndef __VECTOR_TABLE_ROM_ADDR
#  define __VECTOR_TABLE_ROM_ADDR       0x00001000
#endif

// Vector table address in RAM, in case it is being copied
#ifndef __VECTOR_TABLE_RAM_ADDR
#  define __VECTOR_TABLE_RAM_ADDR       0x00000000
#endif

// control whether or not to copy the vector table
#ifdef __VECTOR_TABLE_RAM_COPY
# define __VECTOR_TABLE_COPY_ATTRIBUTE copy,
# define __VECTOR_TABLE_RUN_ADDR __VECTOR_TABLE_RAM_ADDR
#else
# define __VECTOR_TABLE_COPY_ATTRIBUTE
# define __VECTOR_TABLE_RUN_ADDR __VECTOR_TABLE_ROM_ADDR
#endif 

// Vector table size and number of vectors, size is required in case the 
// vector table is being copied from ROM to RAM
#if defined(__CPU_ARMV7M__) || defined(__CPU_ARMV7EM__) || defined(__CPU_ARMV6M__)
#  ifndef __NR_OF_VECTORS
#    define __NR_OF_VECTORS             48
#  endif
#  define __VECTOR_TABLE_SIZE           (__NR_OF_VECTORS * 4)
#else
#  ifdef __PIC_VECTORS
#    define __VECTOR_TABLE_SIZE         64
#  else
#    ifdef __FIQ_HANDLER_INLINE
#      define __VECTOR_TABLE_SIZE       28
#      define __NO_FIQ_VECTOR           1
#    else
#      define __VECTOR_TABLE_SIZE       32
#      define __NO_FIQ_VECTOR           0
#    endif
#  endif
#endif

// Thumb vector table and start address fix
#if (defined(__CPU_ARMV7R__) || defined(__CPU_ARMV7A__)) && defined(__THUMB__)
#  define __THUMB_OFFSET      1
#elif  defined(__CPU_ARMV7M__) || defined(__CPU_ARMV7EM__) || defined(__CPU_ARMV6M__)
#  define __THUMB_OFFSET      1
#else
#  define __THUMB_OFFSET      0
#endif


architecture ARM
{
        endianness
        {
                little;
                big;
        }

        space linear
        {
                id = 1;
                mau = 8;
                map (size = 4G, dest = bus:local_bus);
               
                copytable
                (
                        align = 4,
                        copy_unit = 1,
                        dest = linear
                );

                start_address
                (
                        // It is not strictly necessary to define a run_addr for _START
                        // because hardware starts execution at address 0x0 which should
                        // be the vector table with a jump to the relocatable _START, but
                        // an absolute address can prevent the branch to be out-of-range.
                        // Or _START may be the entry point at reset and the reset handler
                        // copies the vector table to address 0x0 after some ROM/RAM memory
                        // re-mapping. In that case _START should be at a fixed address
                        // in ROM, specifically the alias of address 0x0 before memory
                        // re-mapping.
                        //
                        // For compatability with CMSIS _START has been replaced with Reset_Handler.
#ifdef __START
                        // This is a symbol, not a section. Ensure Thumb bit is set when
                        // using Thumb startup code.
                        //
                        run_addr = __START | __THUMB_OFFSET,
#endif
                        symbol = "Reset_Handler"
                );

                stack "stack"
                (
                        id = 0,
#ifdef __STACK_FIXED
                        fixed,
#endif
#ifdef __STACK_THREADS
                        threads = __STACK_THREADS,
#endif
                        align = 4,
                        min_size = __STACK,
                        grows = high_to_low
                );

                heap "heap"
                (
#ifdef __HEAP_FIXED
                        fixed,
#endif
                        align = 4,
                        min_size=__HEAP
                );

#if !defined(__CPU_ARMV7M__) && !defined(__CPU_ARMV7EM__) && !defined(__CPU_ARMV6M__)
                stack "stack_fiq"
                (
                        fixed,
                        align = 4,
                        min_size = __STACK_FIQ,
                        grows = high_to_low
                );
                stack "stack_irq"
                (
                        fixed,
                        align = 4,
                        min_size = __STACK_IRQ,
                        grows = high_to_low
                );
                stack "stack_svc"
                (
                        fixed,
                        align = 4,
                        min_size = __STACK_SVC,
                        grows = high_to_low
                );
                stack "stack_abt"
                (
                        fixed,
                        align = 4,
                        min_size = __STACK_ABT,
                        grows = high_to_low
                );
                stack "stack_und"
                (
                        fixed,
                        align = 4,
                        min_size = __STACK_UND,
                        grows = high_to_low
                );
#endif

#if !defined(__NO_AUTO_VECTORS) && !defined(__NO_DEFAULT_AUTO_VECTORS)
# if defined(__CPU_ARMV7M__) || defined(__CPU_ARMV7EM__) || defined(__CPU_ARMV6M__)
                // vector table with handler addresses
                vector_table "vector_table" ( vector_size = 4, size = __NR_OF_VECTORS, run_addr = __VECTOR_TABLE_RUN_ADDR,
                                              template = ".text.handler_address",
                                              template_symbol = "_lc_vector_handler",
                                              vector_prefix = "_vector_",
                                              __VECTOR_TABLE_COPY_ATTRIBUTE 
                                              fill = loop,
                                              no_inline
                                            )
                {
                        vector ( id = 0, fill = "_lc_ub_stack" );
                        vector ( id = 1, fill = "Reset_Handler" );
                }
#  else
#    ifdef __PIC_VECTORS
                // vector table with ldrpc instructions from handler table
                vector_table "vector_table" ( vector_size = 4, size = 8, run_addr = __VECTOR_TABLE_RUN_ADDR,
                                              template = ".text.vector_ldrpc",
                                              template_symbol = "_lc_vector_ldrpc",
                                              vector_prefix = "_vector_ldrpc_",
                                              __VECTOR_TABLE_COPY_ATTRIBUTE 
                                              fill = loop
                                            )
                {
                }
                // subsequent vector table (data pool) with addresses of handlers
                vector_table "handler_table" ( vector_size = 4, size = 8, run_addr = __VECTOR_TABLE_RUN_ADDR + 32,
                                               template = ".text.handler_address",
                                               template_symbol = "_lc_vector_handler",
                                               vector_prefix = "_vector_",
                                               __VECTOR_TABLE_COPY_ATTRIBUTE 
                                              fill = loop[-32],
                                               no_inline
                                             )
                {
                        vector ( id = 0, fill = "Reset_Handler" );
                }
#    else
                // vector table with branch instructions to handlers
                vector_table "vector_table" ( vector_size = 4, size = 8 - __NO_FIQ_VECTOR, run_addr = __VECTOR_TABLE_RUN_ADDR,
                                              template = ".text.vector_branch",
                                              template_symbol = "_lc_vector_handler",
                                              vector_prefix = "_vector_",
                                              __VECTOR_TABLE_COPY_ATTRIBUTE 
                                              fill = loop[__THUMB_OFFSET]
                                            )
                {
                        vector ( id = 0, fill = "Reset_Handler" );
                }
#    endif
#  endif
#endif



                section_layout
                {
                        group ( ordered, run_addr= 0x00400000 )
                        {
                              select "boot_header";
                        }
                        
                        group ( ordered, run_addr= 0x00401000 )
                        {
                              select "vectors";
                        }

#ifdef __STACKADDR
                        group ( ordered, run_addr=__STACKADDR )
                        {
                                select "stack";
                        }
#endif
                   
#ifdef __HEAPADDR
                        group ( ordered, run_addr=__HEAPADDR )
                        {
                                select "heap";
                        }
#endif

#if !defined(__CPU_ARMV7M__) && !defined(__CPU_ARMV7EM__) && !defined(__CPU_ARMV6M__)
                        // symbol to set mode bits and interrupt disable bits
                        // in cstart module before calling the application (main)
                        "_APPLICATION_MODE_" = __APPLICATION_MODE;
#endif

//
// Define the value for the VTOR register.
// For some devices it is requires to set bit 29 when the vector table is located in RAM.
// This can be controlled with the __SET_VTOR_BIT29 macro.
// If this macro is used, assume BIT30 and BIT31 should be cleared.
// Define a special mapping symbol for the debugger
//
#if !defined(__NO_AUTO_VECTORS)
# if defined(__CPU_ARMV7M__) || defined(__CPU_ARMV7EM__) || defined(__CPU_ARMV6M__)
                        // mapping symbol to separate stack from potential code in RAM
                        "$d.stack" = addressof(sect:"stack");
#  if defined(__SET_VTOR_BIT29)
#   if defined(__VECTOR_TABLE_RAM_COPY)
                        "_lc_vtor_value" = ( "_lc_ub_vector_table" & 0x1FFFFFFF ) | 0x20000000;
#   else
                        "_lc_vtor_value" = ( "_lc_ub_vector_table" & 0x1FFFFFFF );
#   endif
#  else
                        "_lc_vtor_value" = "_lc_ub_vector_table";
#  endif
# endif
#endif

//
// The following vector table related groups are temporary until
// a load_addr can be specified for a vector table as well.
//
#if defined(__VECTOR_TABLE_RAM_COPY)
                        // place reset vector and stack address vector in ROM when the
                        // the vector table is copied from ROM to RAM at startup
# if defined(__CPU_ARMV7M__) || defined(__CPU_ARMV7EM__) || defined(__CPU_ARMV6M__)
                        // vector table with handler addresses
                        group ( contiguous, ordered, load_addr = __VECTOR_TABLE_ROM_ADDR )
                        {
                                select "_vector_0";
                                select "_vector_1";
                        }
#  else
#    ifdef __PIC_VECTORS
                        // vector table with ldrpc instructions from handler table
                        group ( contiguous, ordered, load_addr = __VECTOR_TABLE_ROM_ADDR )
                        {
                                select "_vector_ldrpc_0";
                        }
                        // subsequent vector table (data pool) with addresses of handlers
                        group ( contiguous, ordered, load_addr = __VECTOR_TABLE_ROM_ADDR + 32 )
                        {
                                select "_vector_0";
                        }
#    else
                        // vector table with branch instructions to handlers
                        group ( contiguous, ordered, load_addr = __VECTOR_TABLE_ROM_ADDR )
                        {
                                select "_vector_0";
                        }
#    endif
#  endif
#endif

                        //
                        // Define the SRAM buffer to use as a Micro Trace Buffer (MTB)
                        //
                        // This allows tracing on Cortex-M0+ devices that support MTB. To use
                        // this debugging facility, define LSL macro __MTB_SIZE to a value that
                        // is a power of 2 and at least 32.
#if defined(__MTB_SIZE) && (__MTB_SIZE != 0)
# if ((__MTB_SIZE & (__MTB_SIZE - 1)) || (__MTB_SIZE < 32))
#  error _MTB_SIZE must be zero or a power of 2 not smaller than 32.
# elif !defined(__SRAM_SIZE)
#  error Expecting __SRAM_SIZE to be defined.
# else
                        group (align = __MTB_SIZE, run_addr=[0x20000000 .. (0x20000000 + __SRAM_SIZE)])
                        {
                                reserved "_mtb" ( size = __MTB_SIZE, attributes = rw);
                        }
# endif
#endif
                }
        }

        bus local_bus
        {
                mau = 8;
                width = 32;
        }
}
