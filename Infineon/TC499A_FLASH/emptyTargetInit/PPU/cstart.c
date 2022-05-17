/*
 * Copyright (c) 2020-2021 TASKING BV
 *
 * The system startup code initializes the processor's registers
 * and the application C variables.
 */

#pragma nomisrac
#pragma profiling       off                     /* prevent profiling information on cstart      */
#pragma tradeoff        4                       /* preset tradeoff level                        */

#include <stdlib.h>
#include <sfr/regppu.sfr>

extern  unsigned char   _lc_ub_stack[];
extern  unsigned char   _SDA_BASE_[];
extern  unsigned char   _lc_ub_vstack[];
extern  unsigned char   _lc_ue_vstack[];

#pragma weak    exit
#pragma extern  _Exit
#pragma extern  main
extern  int     main( int argc, char *argv[] );
extern  void    __init( void );
#if     __PROF_ENABLE__
extern  void    __prof_init( void );
#endif

#ifdef  __USE_ARGC_ARGV
#ifndef __ARGCV_BUFSIZE
#define __ARGCV_BUFSIZE         256
#endif
static  char    argcv[__ARGCV_BUFSIZE];
#else
static  char*   argv_last = NULL;
#endif

void    __interrupt(0) __noreturn__ _START( void )
{
        /*
         *      Initialize stack pointer.
         */
        __asm( "mov\t%%sp, %0" :: "r"(_lc_ub_stack) );

        /*
         *      Initialize global pointer.
         */
        __asm( "mov\t%%gp, %0" :: "r"(_SDA_BASE_) );

#ifndef __ARC_DISABLE_VCCM__
        /*
         *      Initialize vector stack ptr.
         */
        __asm( "mov\t%%r56, %0" :: "r"(_lc_ub_vstack) );

        /*
         *      Initialize vector stack protection.
        */
        VEC_STACK_TOP = (unsigned int)_lc_ue_vstack;
        VEC_STACK_BASE = (unsigned int)_lc_ub_vstack;
        VEC_CTRL.SC = 1;
#endif

        /*
         *      Copy initialized sections from ROM to RAM
         *      and clear uninitialized data sections in RAM.
         */
        __init();

#if __PROF_ENABLE__
        __prof_init();
#endif

        /*
         *      Call main.
         */
#if defined __USE_ARGC_ARGV
        exit( main( _argcv( argcv, __ARGCV_BUFSIZE ), (char **)argcv ) );
#else
        exit( main( 0, &argv_last ) );
#endif
        return;
}

