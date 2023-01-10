#include <stdint.h>
#include <sys/stat.h>

extern uint32_t _end;

void *_sbrk(int incr) {
  static unsigned char *heap = NULL;
  unsigned char *prev_heap;

  if (heap == NULL) {
    heap = (unsigned char *)&_end;
  }
  prev_heap = heap;

  heap += incr;

  return prev_heap;
}

int _fstat(int file, struct stat *st) {
  st->st_mode = S_IFCHR;
  return 0;
}

int _lseek(int file, int offset, int whence) {
  return 0;
}

int _close(int fd) {
  return 0;
}

int _write (int fd, char *buf, int count) {
  int written = 0;

  for (; count != 0; --count) {
    ++written;
  }
  return written;
}

int _read (int fd, char *buf, int count) {
  int read = 0;

  for (; count > 0; --count) {
    read++;
  }

  return read;
}