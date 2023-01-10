#ifndef __ITC_H__
#define __ITC_H__
/*====================================================================
* Project:
* Developed using:
* Function: structure of messages between driver tasks
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#include "pxdef.h"

/* message types */
#define DINIT		0
#define DOPEN		1
#define DCLOSE		2
#define DREAD		3
#define DWRITE		4
#define DCONTROL	5

#define IODONE		0x8000		/* Done flag in message type */
#define IOINIT		DINIT		/* initialization message	 */
#define IOOPEN		DOPEN		/* open message		*/
#define IOCLOSE		DCLOSE		/* close message	*/
#define IOREAD		DREAD		/* received Data	*/
#define IOWRITE		DWRITE		/* send data		*/
#define IOCTL		DCONTROL	/* control message	*/

/* subfunctions for DCONTROL */
#define DMODE		1			/* select operation mode */
#define DPRIO		2			/* change priority */
#define DDTR		3			/* Clear or Set DTR */
#define DMBXINIT	4			/* tell driver about a mailbox for input tokens */
#define DSELECT		5			/* set task and event for input */


/* Intertask-communication structure for PXROS task */

struct itc
{
	struct itc		*next;
	PxMsg_t			owntoken;
	unsigned short	msg_typ;
	int				result;
	union
	{
		/* IO message */
		struct io
		{
			char	*data;
			short	length; /* actual  length */
		} io;
		/* ioctl structure */
		struct ioc
		{
			int		ioc_typ;
			int		ioc_arg;
			char	*ioc_userdata;
		} ioc;
	} u;
};
typedef struct itc itc_t;

#endif /* __ITC_H__ */
