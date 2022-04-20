#include <sys/types.h>

#if TEST
#define _X(a)	test_##a
#define _Y(a)	a
#elif defined(__use_solaris_libs)
#define _X(a)	a
#define _Y(a)	a
#else
#define _X(a)	__##a
#define _Y(a)	a
#endif


#define OPEN	_X(open)
#define CLOSE	_X(close)
#define READ	_X(read)
#define WRITE	_X(write)
#define CREAT	_X(creat)
#define FCNTL	_X(fcntl)
#define SBRK	_X(sbrk)
#define GETPID	_X(getpid)
#define KILL	_X(kill)
#define _EXIT	_X(_exit)
#define ISATTY	_X(isatty)
#define LSEEK	_X(lseek)
#define LINK	_X(link)
#define UNLINK	_X(unlink)
#define ACCESS	_X(access)
#define STAT	_X(stat)
#define FSTAT	_X(fstat)
#define RENAME	_X(rename)
#define MKDIR   _X(mkdir)
#define RMDIR   _X(rmdir)
#define GETCWD	_X(getcwd)

#define SEND	_X(send)
#define RECV	_X(recv)

#define MALLOC	_Y(malloc)
#define FREE	_Y(free)
#define STRCMP	_Y(strcmp)
#define STRDUP	_Y(strdup)
#define EXIT	_Y(exit)
#define SIGNAL	_Y(signal)
#define CLOCK	_Y(clock)
#define TIME	_Y(time)

struct stat;
struct file_info;

extern void *MALLOC();
extern void FREE();
extern int STRCMP();
extern char *STRDUP();
void (*SIGNAL(int sig, void (*func)(int))) (int) ;

int OPEN(const char *path, int oflag, ...) ;
int CLOSE(int fildes) ;
#ifndef __use_solaris_libs
int READ(int fildes, void *buf, unsigned nbyte) ;
int WRITE(int fildes, const void *buf, unsigned nbyte) ;
int SEND(int s, const char *msg, int len, int flags) ;
int RECV(int s, char *buf, int len, int flags) ;
#endif
int __diab_lib_error(int fildes, const char *buf, unsigned nbyte) ;
int CREAT(const char *path, mode_t mode) ;
int FCNTL(int fildes, int cmd, ...) ;
void *SBRK(int incr) ;
pid_t GETPID(void) ;
void _EXIT(int status) ;
int ISATTY(int fildes) ;
#ifndef __use_solaris_libs
int KILL(int pid, int sig) ;
int LSEEK(int fildes, int offset, int whence) ;
int LINK(const char *path1, const char *path2) ;
int UNLINK(const char *path) ;
int MKDIR(const char * path) ;
int RENAME(const char *old, const char *new) ;
#else
int MKDIR(const char * path, mode_t mode) ;
#endif
int ACCESS(const char *path, int amode) ;
struct stat;
int STAT(const char *path, struct stat *buf) ;
int FSTAT(int fildes, struct stat *buf) ;
char *GETCWD(char * buf, int maxlen) ;
