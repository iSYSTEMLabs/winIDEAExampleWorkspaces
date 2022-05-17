/**************************************************************************
**                                                                        *
**  FILE        :  cstart.c                                               *
**                                                                        *
**  DESCRIPTION : 							  *
**                                                                        *
**	The system startup code initializes the Program Status Word (PSW),*
**	the system Stack Pointer (SP), the vitual stack pointer (_SP) and *
**	the application C variables.                                      *
**                                                                        *
**      When linking your C modules with the library, you automatically   *
**	link the object module, containing the C startup code. This       *
**	module is called cstart.obj and is present in every C library     *
**	(once for every compiler model).                                  *
**                                                                        *
**  Copyright 1996-2017 TASKING BV                                        *
**                                                                        *
**************************************************************************/
#define ACC (*(volatile unsigned char *)0xE0)
#define B   (*(volatile unsigned char *)0xDD)
#define SP  (*(volatile unsigned char *)0xD4)
#define DPL (*(volatile unsigned char *)0xD5)
#define DPH (*(volatile unsigned char *)0xD6)
#define XRAM_START 0x1000
#define XRAM_END 0x2000

#pragma	extern	main 
extern int   main();
extern char _lc_ub_stack[];
extern void _init( void );

void __interrupt(0) _start(void)
{  

  /* Initialize stack pointer */
  SP = (char)_lc_ub_stack;
  _init();
  main();
}
