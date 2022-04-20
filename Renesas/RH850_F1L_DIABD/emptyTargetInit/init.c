#include "fileio.h"
#include "memfile.h"
#include <stdio.h>
#include <string.h>

extern void __init(void);
extern int main(int, char **, char **);
#pragma weak __DATA_ROM
#pragma weak __DATA_END
#pragma weak __DATA_RAM
#pragma weak __BSS_START
#pragma weak __BSS_END
extern char __DATA_ROM[], __DATA_RAM[], __DATA_END[], __BSS_START[], __BSS_END[];
#pragma weak __COPY_TABLE_BEGIN__
#pragma weak __COPY_TABLE_END__
extern struct copytable __COPY_TABLE_BEGIN__[], __COPY_TABLE_END__[] ;

#ifndef MAKE_OSE
char **environ;	/* used by getenv(), putenv()	*/
#endif

/**************	Local data, types, fns and macros ***************/


/**************	Implementation of exported functions ************/

static int init_main_guts(void)
{
	int argc;

	/* move initialized data from ROM to RAM if defined at	*/
	/* different locations					*/
	if (__DATA_ROM != __DATA_RAM) {
		memcpy(__DATA_RAM,__DATA_ROM,__DATA_END-__DATA_RAM);
	} else {
#if LATER
		/* init some initialized data to make it easier	*/
		/* to run multiple times			*/
		extern char *__heap_beg, *__heap_ptr;
		__uinfo[0].dev = __uinfo[1].dev = __uinfo[2].dev = DT_CHR;
		__uinfo[0].min = STDIN_MIN;
		__uinfo[1].min = STDOUT_MIN;
		__uinfo[2].min = STDERR_MIN;
		__heap_ptr = __heap_beg;
#endif
	}

	__copy_multiple(__COPY_TABLE_BEGIN__, __COPY_TABLE_END__);

	/* clear uninitialized data				*/
	if (__BSS_START != __BSS_END) {
		memset(__BSS_START,0,__BSS_END-__BSS_START);
	}
#if defined(__tc)
	if (__ZBSS_START != __ZBSS_END) {
		memset(__ZBSS_START,0,__ZBSS_END-__ZBSS_START);
	}
	/* .lbss could be in ROM in which case it would not be
	   writable and this next if statement should be deleted
	*/
	if (__LBSS_START != __LBSS_END) {
		memset(__LBSS_START,0,__LBSS_END-__LBSS_START);
	}
#endif

#ifdef MAKE_OSE
	argc = 0;
#else
	/* check how many arguments we have			*/
	for(argc = 0; __argv[argc] != NULL; argc++) ;

	environ = __env;

	/* initialize constructors				*/
	__init();
#endif

	/* prepare to call the main function			*/
	return argc ;
}

#ifdef __PPC_VLE_FSSIM__
void __init_FS_args(int argc, char *argv[], char* env[])
{
	char *ptr = __argv[0]; /* The value given by DLD */
	char *iss;
	int   i;

	ptr = (char*)((int)ptr + 4*(argc+1));
	for(i=0;i<argc;i++ ) {
		__argv[i] = ptr;
		iss = argv[i];
		while(*ptr++ = *iss++);
		if ((int)ptr & 0x3) {
			ptr = (char*)(((int)ptr ^ 0x3) + 4);
		}
	}
	__argv[argc] = NULL;

	ptr = __env[0];
	i = 0;
	do { 
		ptr = env[i];
		__env[i++] = ptr;
	} while (ptr);
}
#endif

/* Need a wrapper function so that this function will work
   whether or not it is linked with something that uses 
   small data */

int __init_main(void)
{
	int argc = init_main_guts() ;
#ifdef MAKE_OSE
	return main(0,NULL,NULL) ;
#else
	return main(argc,__argv,__env) ;
#endif
}
