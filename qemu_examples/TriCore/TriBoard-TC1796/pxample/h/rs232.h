/*====================================================================
* Project:
* Developed using:
* Function: Transmit and receive characters via serial line
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#ifndef __RS232_H__
#define __RS232_H__

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */


/* UART transmit and receive handler function types */
typedef int  (*ttyxint_func)(void);
typedef void (*ttyrint_func)(void);


/* Initialize asynchronous interface to operate at BAUDRATE,8,n,1 */

void _init_uart(int baudrate);

/* Send character CHR via the serial line */

void _out_uart(unsigned char chr);

/* Receive (and return) a character from the serial line */

unsigned char _in_uart(void);

/* Install transmit and receive handler for UART */
void _install_uart(ttyxint_func, ttyrint_func);


#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __RS232_H__ */
