

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT


  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}

	
// Current workaround for ARMv8-A samples which do not use MMU. If MMU is not used,
// core cannot do unaligned accesses and library memcpy version does them,
// so we need to make our own memcpy. GCC insists on using memcpy for some cases
// (e.g. in extended iTests), even though we specifically request build with no libraries
void *memcpy(char *pDest, const char *pSrc, unsigned long int nBytes)
{
  unsigned long int i;
  
  void *pOrigDest = pDest;
  
  for (i=0; i<nBytes;i++)
  {
    *pDest++ = *pSrc++;
  }
  
  return pOrigDest;
}
