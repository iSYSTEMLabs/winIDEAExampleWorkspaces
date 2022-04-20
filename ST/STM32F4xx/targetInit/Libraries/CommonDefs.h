#ifndef __COMMON_DEFS_H__
#define __COMMON_DEFS_H__

#ifndef _countof
#define _countof(a) (sizeof(a)/sizeof(a[0]))
#endif

#ifndef _PtrAndCnt
#define _PtrAndCnt(a) &(a[0]), _countof(a)
#endif

#ifndef _CntAndPtr
#define _CntAndPtr(a)  _countof(a), &(a[0])
#endif

#ifndef COMPILETIME_ASSERT
#define COMPILETIME_ASSERT(e) extern char _cta[((e) ? 1 : -1)]
#endif

#ifndef NO_ABS
  #define ABS(X)  ((X) > 0 ? (X) : -(X))
#endif
#ifndef NO_MAX
  #define MAX(X,Y)  ((X) > (Y) ? (X) : (Y))
#endif
#ifndef NO_MIN
  #define MIN(X,Y)  ((X) > (Y) ? (Y) : (X))
#endif

#define BYTE0(v) ((BYTE)(v))
#define BYTE1(v) ((BYTE)((v) >> 8))
#define BYTE2(v) ((BYTE)((v) >> 16))
#define BYTE3(v) ((BYTE)((v) >> 24))

#ifdef __BIG_ENDIAN__
  #define DWORD2LSB(dw, p)      { ((BYTE*)(p))[0] = (BYTE)(dw); ((BYTE*)(p))[1] = (BYTE)((dw) >> 8); \
                                  ((BYTE*)(p))[2] = (BYTE)((dw) >> 16); ((BYTE*)(p))[3] = (BYTE)((dw) >> 24); }
#else
  #define LSB2DWORD(b) *(DWORD *)(b)
  #define LSB2WORD(b)  *(WORD *)(b)

  #define MSB2DWORD(b) ((((BYTE *)(b))[0] << 24) | (((BYTE *)(b))[1] << 16) | (((BYTE *)(b))[2] << 8) | (((BYTE *)(b))[3]))
  
  #define DWORD2LSB(dw, p)      { *((DWORD*)(p)) = (dw); }
  #define WORD2LSB(w, p)        { *((WORD*)(p)) = (w); }
#endif

#define IS_RANGE_INSIDE(ria, ris, ora, ors) ( ( (ria) >= (ora) ) && ( ((ria) + (ris)) <= ((ora) + (ors)) ) )

typedef enum _ESizeInBytes
{
  size1kB = 0x400,
  size2kB = size1kB * 2,
  size4kB = size1kB * 4,
  size8kB = size1kB * 8,
  size16kB = size1kB * 16,
  size32kB = size1kB * 32,
  size64kB = size1kB * 64,
  size128kB = size1kB * 128,
  size256kB = size1kB * 256,
  size512kB = size1kB * 512,
  size1024kB = size1kB * 1024,
  size1MB = size1024kB,
}ESizeInBytes;

#endif  //  __COMMON_DEFS_H__
