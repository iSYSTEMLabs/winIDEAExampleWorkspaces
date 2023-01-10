#ifndef __RS232_H__
#define __RS232_H__
/*====================================================================
* Project:
* Developed using:
* Function: Transmit and receive characters via serial line
*           (polling variant)
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */

/* Initialize asynchronous interface to operate at BAUDRATE,8,n,1 */

void _init_uart(int baudrate);

/* Send character CHR via the serial line */

void _out_uart(const unsigned char chr);


/* Receive (and return) a character from the serial line */

unsigned char _in_uart(void);

/* Check the serial line if a character has been received.
   returns 1 and the character in *chr if there is one
   else 0
 */

int _poll_uart(unsigned char *chr);


#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __RS232_H__ */
