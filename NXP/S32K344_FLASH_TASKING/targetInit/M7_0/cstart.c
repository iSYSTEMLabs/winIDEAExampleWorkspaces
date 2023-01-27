/*
**      @(#)cstart.c    1.10    $E%
**
**  Copyright 1996-2015 Altium BV                                         *
**
**      DESCRIPTION:
**
**      The system startup code initializes the processor's registers
**      and the application C variables.
**
*/

#pragma nomisrac
#pragma profiling       off                     /* prevent profiling information on cstart      */
#pragma optimize        abcefgIJKlopRsUy        /* preset optimization level                    */
#pragma tradeoff        4                       /* preset tradeoff level                        */
#pragma runtime         BCMSZ                   /* disable runtime error checking for cstart    */
#pragma warning         750                     /* do not warn about unsaved registers          */
#pragma section         .text=cstart            /* use: .text.cstart as the section name        */

#include <stdlib.h>
#include <dbg.h>
#include "cstart.h"
#include "S32K344.h"
#define VTOR            (*(volatile unsigned int *)0xE000ED08)


extern  unsigned char   _lc_ub_stack[];
extern  unsigned char   _lc_vtor_value[];
extern void TimerInterruptHandler();

#pragma weak    exit
#pragma extern  _Exit
#pragma extern  main
extern  int     main( int argc, char *argv[] );
extern  void    SystemInit( void );
extern  void    __init( void );
#if     __PROF_ENABLE__
extern  void    __prof_init( void );
#endif

#ifdef __POSIX__
extern  void *  _posix_boot_stack_top;
extern  int     posix_main( void );
#endif

#ifdef  __USE_ARGC_ARGV
#ifndef __ARGCV_BUFSIZE
#define __ARGCV_BUFSIZE         256
#endif
static  char    argcv[__ARGCV_BUFSIZE];
#endif

void    __interrupt() __frame() Reset_Handler( void )
{

        /*
         *      Anticipate possible ROM/RAM remapping
         *      by loading the 'real' program address.
         */
        __remap_pc();
        /*
         *      Initialize stack pointer.
         */
        __setsp( _lc_ub_stack );
        /*
         *      Call a user function which initializes hardware,
         *      such as ROM/RAM re-mapping or MMU configuration.
         */
        SystemInit();
        /*
         *      Copy initialized sections from ROM to RAM
         *      and clear uninitialized data sections in RAM.
         */
        __init();
        __asm( "_cptable_handled:" );  /* symbol may be used by debugger       */

#ifdef __POSIX__
        __setsp( _posix_boot_stack_top );
#endif
#if  __PROF_ENABLE__
        __prof_init();
#endif
#ifdef __POSIX__
        exit( posix_main() );
#elif defined __USE_ARGC_ARGV
        exit( main( _argcv( argcv, __ARGCV_BUFSIZE ), (char **)argcv ) );
#else
        exit( main( 0, NULL ) );
#endif
        return;
}

void IntDefaultHandler() //Interrupt that should never happen
{
  while(1)
  {
  }
}

#pragma section "vectors" //section definition in C (tasking specific)
__attribute__ ((section("vectors"))) //put the table into "vectors" section

void (* const g_pfnVectors[])(void) = //interrupt vector table
{
  (void (*)(void))(&_lc_ub_stack), // The initial stack pointer
    Reset_Handler, // The reset handler
   IntDefaultHandler,                      // The NMI handler
    IntDefaultHandler,                      // The hard fault handler
    IntDefaultHandler,                      // The MPU fault handler
    IntDefaultHandler,                      // The bus fault handler
    IntDefaultHandler,                      // The usage fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
    0,
    IntDefaultHandler,                      // Pendable request for system service (PendableSrvReq)
    IntDefaultHandler,                      // System tick timer (SysTick)
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,                      // DMA transfer complete and error CH0 (dma_ipi_int[0] | dma_ipi_err_int[0])
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    TimerInterruptHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
};
#pragma endsection
