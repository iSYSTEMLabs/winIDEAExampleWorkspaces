#include "S32Z27_sfr.h"


void disableWatchdog()
{
  
}

void R52LockStepConfiguration()
{
  /*Configure the R52 Cluster 0 losktep here.*/
  RTU0__GPR.CFG_CORE.R |= 0;
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  R52LockStepConfiguration();

  #endif /* EMPTY_TARGET_INIT */
}
