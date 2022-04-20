/*	Definition module : fileio.h

	Copyright 1993 Diab Data AB, Sweden

	Description :
	Contains all definitions for embedded file I/O

	History :
	When	Who	What
	930312	teve	initial
*/

#ifndef D_fileio
#define D_fileio
/**************	Imports to declare exports **********************/

#include "fnames.h"
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#undef EXTERN
#ifdef M_fileio
#define EXTERN
#else
#define EXTERN extern
#endif
/**************	Exported data, types and macros	*****************/

struct file_info;

typedef struct {		/* info about device types	*/
	int	(*open)(int, struct file_info *, int);
	int	(*read)(int, char *,  unsigned int);
	int	(*write)(int, char *,  unsigned int);
	int	(*lseek)(int, int, int);
	int	(*close)(int);
	int	(*isatty)(int);
	int	(*trunc)(struct file_info *);
	int	oflag;
} DEV;
	
typedef struct {		/* info about file units	*/
	int	dev;		/* device type. see DT_xxx	*/
	int	min;		/* minor number			*/
	long	pos;		/* current position		*/
	void	*ptr;		/* pointer to file info		*/
} UINFO;

#define DT_NOD	0		/* no device attached yet	*/
#define DT_CHR	1		/* character IO, serial port	*/
#define DT_RAM	2		/* ram disk device		*/
#define DT_MEM	3		/* memory file			*/
#define	DT_MAX	4

extern DEV __dev[DT_MAX];

extern UINFO __uinfo[FOPEN_MAX];


/* file name info	*/

typedef struct file_info {
	char		*name;		/* name of file		*/
	void		*data;		/* records		*/
	long		len;		/* length (only DT_MEM)	*/
	int		dev;		/* device type (DT_*)	*/
	int		min;		/* minor number	(DT_CHR)*/
	struct file_info *next;		/* linked list		*/
	struct file_info *prev;		/* linked list		*/
} FILE_INFO;


/* ram disk structures	*/

#define RAM_REC	256		/* must be power of two!	*/
#define RAM_MASK (RAM_REC-1)

typedef struct ram_list {	/* linked list of records	*/
	struct ram_list	*next;
	char	buf[RAM_REC];
} RAM_LIST;

typedef struct ram_info {	/* more than one file can have links here */
	RAM_LIST	*data;
	long		len;
	int		links;
} RAM_INFO;

typedef struct {			/* ram control block	*/
	RAM_INFO	*rinfo;		/* current file		*/
	RAM_LIST	*curb;		/* current buffer	*/
	long		bpos;		/* position in buffer	*/
	int		oflag;
} RAM_CTRL;

#define ERR(err)	return (errno = err, -1)
#define WRERR(str)	WRITE(2,str,sizeof(str)-1)

#ifndef STDIN_MIN
#define STDIN_MIN 0
#endif

#ifndef STDOUT_MIN
#define STDOUT_MIN 0
#endif

#ifndef STDERR_MIN
#define STDERR_MIN 1
#endif

/**************	Exported functions ******************************/

extern FILE_INFO *__find_file(const char *);
extern FILE_INFO *__new_file(const char *,RAM_INFO *);

#endif /* D_fileio */
