#include "isystem_profile_HAL.h"

void isystem_sft_dbpush_r28(int value)
{
  __asm("prepare {r28},0"); // save register r28    
  __asm( "mov %0, r28"
   :
   : "X" (value)
   : "r28"
    );                      // write value to register r28
  __asm("DBPUSH r28-r28");  // output register r28
  __asm("dispose 0,{r28}"); // restore register r28 
}