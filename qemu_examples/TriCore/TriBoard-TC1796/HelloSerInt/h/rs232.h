#ifndef __RS232_H__
#define __RS232_H__
/*====================================================================
* Project:
* Developed using:
* Function: Transmit and receive characters via serial line
*           (interrupt variant)
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */

/* Initialize asynchronous interface to operate at BAUDRATE,8,n,1 */

void _init_uart(int baudrate);

/* send a string over serial line */

int _uart_puts(const char *str);

/* get a character from serial line */

int _uart_getchar(unsigned char *c);

/* test UARTs sending state */

int _uart_sending(void);

#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __RS232_H__ */
