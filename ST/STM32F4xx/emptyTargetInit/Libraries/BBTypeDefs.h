#ifndef __BB_TYPE_DEFS_H__
#define __BB_TYPE_DEFS_H__

typedef unsigned long long QWORD;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef long long QLONG;
typedef long LONG;
typedef short SHORT;
typedef signed char SBYTE;
typedef char CHAR;


#ifndef NO_BOOL
typedef enum _BOOL
{
  FALSE = 0,
  TRUE = !FALSE
}__BOOL;
typedef DWORD BOOL;
#endif

#ifndef NULL
#define NULL (void *)0
#endif

#endif  //  __BB_TYPE_DEFS_H__
