/*====================================================================
* Project:
* Developed using:
* Function: example using a serial line.
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "led.h"

#define BUFSIZE		128

#ifndef BAUDRATE
#define BAUDRATE	38400
#endif /* BAUDRATE */


static const char *my_str = "Hello world!";


int main(void)
{
	unsigned char c;
	int quit = 0;
	
	InitLED();
	puts(my_str);
	puts("Your choice please");

	while (!quit)
	{
	
		c = getchar();
	
			switch (c)
			{
				case '0' :
					LED_OFF;
					puts("LED switched to OFF");
					break;
				case '1' :
					LED_ON;
					puts("LED switched to ON");
					break;
				case '2' :
					puts(my_str);
					break;
				case 'E' :
					quit = 1;
					puts("Bye bye!");
					break;
			
				case '\n' :
				case '\r' :
					/* do nothing -- ignore it */
					break;
			                      
				default :
					printf("Command '%c' not supported\r\n", c);
					break;
			}
		
	}		
	
 
	return EXIT_SUCCESS;
}
