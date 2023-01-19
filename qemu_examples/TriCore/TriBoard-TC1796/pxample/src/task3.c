/*====================================================================
* Project:
* Developed using:
* Function: Waits for input characters from the communication channel
*            and displays the complete string and its length
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include <stdio.h>
#include <string.h>

#include "pxdef.h"
#include "ttytask.h"
#include "task.h"

static char readBuf[BUFLEN];

void Task3Func(PxTask_t myid, PxMbx_t mymbx, PxEvents_t myevs)
{
	int len;
	char buf[32];
	
	sprintf(buf, "\nTask3 started\n");
	TtyWrite(buf, strlen(buf));
	
	while (1)
	{
		len = TtyRead(readBuf, BUFLEN);
		/* wait until CR or LF is typed */

		sprintf(buf, "Task3: read %d bytes: ", len);
		TtyWrite(buf, strlen(buf));
		TtyWrite(readBuf, len);
		TtyWrite("\n", 1);
	}
}
