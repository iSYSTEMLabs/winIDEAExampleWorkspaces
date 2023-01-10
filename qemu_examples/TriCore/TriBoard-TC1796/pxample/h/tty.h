#ifndef __TTY_H__
#define __TTY_H__
/*====================================================================
* Project:
* Developed using:
* Function: flags and structures of tty driver
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#define TTYECHO			1
#define CRLF			2
#define RAW				4
#define TIME			8		/* do input time checking */
#define O_NONBLOCK		0x10	/* non blocking IO */

#define EV_EXTSTATUS	0x01	/* external status interrupt */
#define EV_RECEIVE		0x02	/* receive complete */
#define EV_SEND			0x04	/* send complete */

#define TOK_TMO_EV		0x10
#define TMO_EV			0x80	/* output time exceeded */
#define WRITE_TMO		10*hz	/* 10 sec */
#define READTOK_TMO		hz/5	/* 0.5 sec */

#define READTIMEOUT(x)	((PxTicks_t)(x) * hz / 25)

extern unsigned int hz;

#endif /* __TTY_H__ */
