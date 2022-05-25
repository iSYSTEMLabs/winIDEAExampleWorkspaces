/**************************************************
 * Copyright 2008-2017 IAR Systems AB.
 *
 * Global data initialization for use with ilink.
 * New style, where each init table routine defines
 * its own format.
 *
 * Note that this source is included as reference only,
 * the interface towards the linker may change without notice.
 *
 **************************************************/

#include "data_init.h"
#include "init_streams.h"

_DLIB_ELF_INIT_MODULE_ATTRIBUTES

typedef struct
{
#if _DLIB_ELF_INIT_USE_RELATIVE_ROM_ADDRESSES
  src_index_t  mOff;
#else // !_DLIB_ELF_INIT_USE_RELATIVE_ROM_ADDRESSES
  init_fun_t * mFun;
#endif // _DLIB_ELF_INIT_USE_RELATIVE_ROM_ADDRESSES
} FAddr;

_DLIB_ELF_INIT_FUNCTION_ATTRIBUTES
static init_fun_t * FAddr_GetPtr(FAddr const TABLE_MEM * me)
{
#if _DLIB_ELF_INIT_USE_RELATIVE_ROM_ADDRESSES
  return (init_fun_t *)((src_ptr_t)me + me->mOff);
#else // !_DLIB_ELF_INIT_USE_RELATIVE_ROM_ADDRESSES
  return me->mFun;
#endif // _DLIB_ELF_INIT_USE_RELATIVE_ROM_ADDRESSES
}

#pragma section = "Region$$Table" const TABLE_MEM

_DLIB_ELF_INIT_FUNCTION_ATTRIBUTES
void
IAR_DATA_INIT(void)
{
  FAddr TABLE_MEM const * pi = __section_begin("Region$$Table");
  table_ptr_t             pe = __section_end  ("Region$$Table");
  while (pi != pe)
  {
    init_fun_t * fun = FAddr_GetPtr(pi);
    ++pi;
    pi = fun(pi);
  }
}
