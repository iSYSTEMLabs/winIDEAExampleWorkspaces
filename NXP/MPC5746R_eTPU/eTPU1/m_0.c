#include <etpuc.h>
#include "production.h"

#pragma ETPU_function handler0, standard @ H0_FUNCTION_NUMBER;

#define PROD_TRACE_TEST_REQUEST   0
#define PROD_DEBUG_TEST_REQUEST   5

void handler0(void)
{
  if( hsr == PROD_DEBUG_TEST_REQUEST )
  {
    while(1)
    {
      productionDebugTestMain();
      productionTraceTestMain();        
    }
  }
  else
  {
    while(1)
    {
      productionDebugTestMain();
      productionTraceTestMain();        
    }
  }
}
 
 /* Information exported to Host CPU program */

#pragma write h, (::ETPUfilename (m_0_auto.h));
#pragma write h, ( );
#pragma write h, (/****************************************************************/);
#pragma write h, (/* WARNING this file is automatically generated DO NOT EDIT IT! */);
#pragma write h, (/****************************************************************/);
#pragma write h, (#ifndef _M_0_AUTO_H_ );
#pragma write h, (#define _M_0_AUTO_H_ );
#pragma write h, ( );
#pragma write h, (/* Function Configuration Information */);
#pragma write h, (::ETPUliteral(#define FS_M_0_FUNCTION_NUMBER) H0_FUNCTION_NUMBER );
#pragma write h, (::ETPUliteral(#define FS_M_0_TABLE_SELECT) ::ETPUentrytype(handler0) );
#pragma write h, (::ETPUliteral(#define FS_M_0_NUM_PARMS) ::ETPUram(handler0) );
#pragma write h, ( );
#pragma write h, (/* Parameter Definitions */);
#pragma write h, (::ETPUliteral(#define DEBUG_LOOP_CNT_LIMIT_ADDR) ::ETPUlocation (debugLoopCountLimit) );
#pragma write h, (::ETPUliteral(#define TRACE_LOOP_CNT_LIMIT_ADDR) ::ETPUlocation (traceLoopCountLimit) );
#pragma write h, ( );
#pragma write h, (#endif );
#pragma write h, ( );








