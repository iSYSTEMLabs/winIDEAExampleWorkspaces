/*====================================================================
* Project:
* Developed using:
* Function: simple tty driver task for PXROS
*           This Task handles input and output from/to a data stream.
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include "pxdef.h"
#include "termio.h"
#include "itc.h"
#include "rs232.h"
#include "ttytask.h"
#include "tty.h"


/* default control chars */
#define CESC	'\\'
#define CINTR	0177	/* DEL */
#define CQUIT	034		/* FS, cntl | */
#define CERASE	'#'
#define CKILL	'@'
#define CEOF	04		/* cntl d */
#define CSTART	021		/* cntl q */
#define CSTOP	023		/* cntl s */
#define CSWTCH	032		/* cntl z */
#define CNSWTCH	0377	/* _POSIX_VDISABLE */

/* constant data used by driver */

#define BEL		0x07
#define TAB		0x09
#define LF		0x0a
#define CR		0x0d
#define BS		0x08
#define SPACE	0x20
#define DEL		0x7f
#define ESC		0x1b
#define XON		0x11
#define XOFF	0x13

#define OFF		0
#define ON		1




typedef struct ttydata
{
	PxMsg_t		write_tok;	/* actual writebuffer token */
	itc_t		*write_itc;	/* current writeblock */
	char		*write_end;	/* end of writebuffer */
	char		*write_p;	/* writebuffer pointer */
	PxMbx_t		read_mbx;	/* the read channel */
	PxMsg_t		read_tok;	/* actual readbuffer  token */
	itc_t		*read_itc;	/* current readblock */
	PxTask_t	owntask;	/* task id of own task */
	PxMbx_t		ownmbx;		/* tasks own mbx */
	int			ownint;		/* own interrupt id */
	PxDelay_t	readtmostr;	/* delay for input-timeouts */
	short		mode;		/* mode of driver */
	char		dtrbit;		/* set or clear dtr */
	char		r_state;	/* state of inputhandler */
	char		x_state;	/* state of outputhandler */
	char		freeze;		/* freeze state of handler */
	char		xonoff;		/* xon/xoff state */
	char		tabcnt;		/* count tabposition */
	struct termio	termio;		/* termio structure */
	char		echo_buf[256];	/* the echo buffer */
	char		read_buf[256];	/* input buffer */
	unsigned char	read_in;	/* put index in read_buf */
	unsigned char	read_out;	/* get index in read_buf */
	unsigned char	read_lfind;	/* index of last LF in read_buf */
	unsigned char	echo_out;	/* get index of echobuffer */
	unsigned char	echo_in;	/* put index of echobuffer */
}  ttydata_t;

static ttydata_t	TtyData;

#define Write_tok	TtyData.write_tok
#define Write_itc	(TtyData.write_itc)
#define Write_end	(TtyData.write_end)
#define Write_p		(TtyData.write_p)
#define Echo_out	(TtyData.echo_out)
#define Echo_in		(TtyData.echo_in)
#define Read_mbx	TtyData.read_mbx
#define Read_tok	TtyData.read_tok
#define Read_itc	(TtyData.read_itc)
#define Read_buf	(TtyData.read_buf)
#define Read_in		(TtyData.read_in)
#define Read_lfind	(TtyData.read_lfind)
#define Read_out	(TtyData.read_out)
#define Tabcnt		(TtyData.tabcnt)
#define Termio		(TtyData.termio)
#define Owntask		TtyData.owntask
#define Ownmbx		TtyData.ownmbx
#define Readtmostr	TtyData.readtmostr
#define Mode		TtyData.mode
#define R_state		TtyData.r_state
#define X_state		TtyData.x_state
#define Freeze		TtyData.freeze
#define Xonoff		TtyData.xonoff
#define Echo_buf	(TtyData.echo_buf)


#define ECHOCHAR(c)	{Echo_buf[Echo_in++] = c;}


/* function declarations */

static int  ttyxint(void);
static void ttyrint(void);
static void outactivate(int flag);
static int  readCopy(unsigned char *buf, int len);
static int  ttyIoctl(struct ioc *iop);
static char ttyoutput(char c);
static int  ttyinput(char c);


static void ReadTMO(PxArg_t a)
{
	PxTaskSignalEvents_Hnd(Owntask, EV_RECEIVE);
}
static void resetio(void)
{
	_init_uart(0);
	Xonoff = XON;
	X_state = OFF;
}
static void ttyInitTermio(void)
{
	if (Mode & RAW)
	{
		Termio.c_iflag = 0;
		Termio.c_oflag = 0;
		Termio.c_cflag = 0;
		Termio.c_lflag = 0;
	}
	else
	{
		Termio.c_iflag = ISTRIP|ICRNL|IXON|IXOFF;
		Termio.c_oflag = OPOST|ONLCR;
		Termio.c_lflag = ISIG|ICANON;
	}
	Termio.c_cflag = B9600|CS8|CREAD;
	if (Mode & TTYECHO)
		Termio.c_lflag |= ECHO|ECHOE;
	Termio.c_cc[VINTR] = CINTR;
	Termio.c_cc[VQUIT] = CQUIT;
	Termio.c_cc[VERASE] = BS;
	Termio.c_cc[VKILL] = CKILL;
	Termio.c_cc[VEOF] = CEOF;
	Termio.c_cc[VSWTC] = CSWTCH;
	if (Mode & RAW)
	{
		Termio.c_cc[VMIN] = 1;
		Termio.c_cc[VTIME] = 1;
	}
}

static void TtyTask(PxTask_t task, PxMbx_t pmbx, PxEvents_t actevents)
{
	PxMsg_t		iojob;
	itc_t		*iohdr;
	PxEvents_t	ev;
	int			i;


	/* preset local variables */

	Owntask = task;
	Ownmbx = pmbx;
	R_state = OFF;
	X_state = OFF;
	Xonoff = XON;
	Echo_out = Echo_in = 0;
	Read_in = Read_out = 0;
	Mode = TTYECHO;
	ttyInitTermio();


	/* reset and initialize hardware */
	_init_uart(0);
	
	/* install transmit and receive handler */
	_install_uart(ttyxint, ttyrint);

	for (iojob = 0,ev = 0;;)
	{
		if (!iojob)
		{
			ev = PxMsgReceive_EvWait(&iojob, Ownmbx, EV_SEND|EV_RECEIVE|TMO_EV|TOK_TMO_EV);
		}
		else
			ev = PxAwaitEvents(EV_SEND|EV_RECEIVE|TMO_EV|TOK_TMO_EV);
		if ((ev & EV_SEND) && Write_tok)
		{
			Write_itc->result = Write_itc->u.io.length;
			PxMsgRelease(&Write_tok);
		}
		if ((ev & EV_RECEIVE) && Read_tok)
		{
			PxMsg_t tok;

			Read_itc->result = Read_itc->u.io.length
							 = readCopy((unsigned char *)Read_itc->u.io.data,
										Read_itc->u.io.length);
			tok = Read_itc->owntoken;
			Read_tok = 0;
			Read_itc = Read_itc->next;
			if (Read_itc)
			{
				Read_tok = Read_itc->owntoken;
				Read_itc->msg_typ = DREAD;
				R_state = ON;
				if (Mode & TIME)
				{
					PxDelaySched(Readtmostr,
								 READTIMEOUT(Termio.c_cc[VTIME]),
								 ReadTMO, (PxArg_t)0);
				}
			}
			PxMsgRelease(&tok);
		}
		if (ev & TMO_EV)
		{
			if (Write_tok)
			{
				Write_itc->result = -1;
				PxMsgRelease(&Write_tok);
			}
			resetio();	/* reset hardware */
		}

		if (!iojob)
			continue;
		iohdr = (itc_t *)PxMsgGetData(iojob);
		switch (iohdr->msg_typ)
		{
			case DWRITE:
				if (!Write_tok)
				{
					Write_itc = iohdr;
					Write_tok = iojob;
					Write_p   = &iohdr->u.io.data[0];
					Write_end = &iohdr->u.io.data[iohdr->u.io.length];
					iojob = 0;
					Freeze = 1;
					if ((X_state == OFF) && (Xonoff == XON))
					{
						X_state = ON;
						_out_uart(ttyoutput(*Write_p++));
					}
					Freeze = 0;
				}
				break;
			case DREAD:
				iohdr->owntoken = iojob;
				if (Read_itc != 0)
				{
					iohdr->next = Read_itc->next;
					Read_itc->next = iohdr;
					iojob = 0;
					break;
				}
				if (Read_in != Read_out)
				{
					iohdr->result = iohdr->u.io.length
								  = readCopy((unsigned char *)iohdr->u.io.data,
											 iohdr->u.io.length);
					PxMsgRelease(&iojob);
					break;
				}
				if ((Mode & O_NONBLOCK))
				{
					iohdr->result = -1;
					PxMsgRelease(&iojob);
					break;
				}
				iohdr->next = 0;
				Read_itc = iohdr;
				Read_tok = iojob;
				R_state = ON;
				if (Mode & TIME)
				{
					PxDelaySched(Readtmostr,
								 READTIMEOUT(Termio.c_cc[VTIME]),
								 ReadTMO, (PxArg_t)0);
				}
				iojob = 0;
				break;
			case DCONTROL:
				iohdr->result = 0;
				switch (iohdr->u.ioc.ioc_typ)
				{
					case DMODE:
						Mode = iohdr->u.ioc.ioc_arg;
						break;
					case DPRIO:
						i = PxTaskGetPrio(PxGetId());
						PxTaskSetPrio(PxGetId(), iohdr->u.ioc.ioc_arg);
						iohdr->u.ioc.ioc_arg = i;
						break;
					default:
						iohdr->result = ttyIoctl(&(iohdr->u.ioc));
						iohdr->result = 0;
						break;
				}
			default:
				PxMsgRelease(&iojob);
				break;
		}
	}
}

static int ttyxint(void)
{
	if (Xonoff == XOFF)
	{
		X_state = OFF;
		return 0;
	}
	if (Echo_in != Echo_out)
	{
		_out_uart(Echo_buf[Echo_out++]);
		return 1;
	}
	else
	{
		if (Write_p < Write_end)
		{
			_out_uart(ttyoutput(*Write_p++));
			return 1;
		}
		else
		{
			X_state = OFF;
			if (Write_end)
			{
				Write_p = Write_end = 0;
				PxTaskSignalEvents_Hnd(Owntask, EV_SEND);
			}
		}
	}
	return 0;
}

static void ttyrint(void)
{
	int ch;

	ch = _in_uart();
	ttyinput(ch);
	if (Read_tok && (Mode & TIME))
	{
		PxDelaySched_Hnd(Readtmostr,
						 READTIMEOUT(Termio.c_cc[VTIME]),
						 ReadTMO, (PxArg_t)0);
	}
	outactivate(1);
}

static void outactivate(int flag)
/* flag: call by handler */
{
	if ((X_state == OFF) && (Xonoff == XON) && !Freeze)
	{
		if (Echo_in != Echo_out)
		{
			X_state = ON;
			_out_uart(Echo_buf[Echo_out++]);
		}
		else if (Write_p != Write_end)
		{
			X_state = ON;
			_out_uart(ttyoutput(*Write_p++));
		}
		else if (Write_end)
		{
			if (flag)
				PxTaskSignalEvents_Hnd(Owntask, EV_SEND);
			else
				PxTaskSignalEvents(Owntask, EV_SEND);
		}
	}
}

static int readCopy(unsigned char *buf, int len)
{
	unsigned char *cp;

	cp = buf;
	while (len-- && (Read_in != Read_out))
	{
		if ((*buf++ = Read_buf[Read_out++]) == LF)
		{
			if (!(Mode & RAW))
				break;
		}
	}
	return (buf - cp);
}

static void ttySetParam(void)
{
	if (!(Termio.c_lflag & ICANON))
	{
		/* RAW mode */
		Mode |= RAW;
		if (Termio.c_cc[VMIN] == 0)
		{
			/* read with timeout */
			Mode |= TIME;
			if (Read_tok)
				PxDelaySched(Readtmostr,
							 READTIMEOUT(Termio.c_cc[VTIME]),
							 ReadTMO, (PxArg_t)0);
		}
		else
			Mode &= ~TIME;
	}
	else
	{
		Mode &= ~(RAW | TIME);
		PxDelaySched(Readtmostr, 0, ReadTMO, (PxArg_t)0);
	}
}

static int ttyIoctl(struct ioc *iop)
{
	int		*arg;

	switch (iop->ioc_typ)
	{
		case FIONBIO:
			arg = (int *)(iop->ioc_arg);
			if (*arg)
				Mode |= O_NONBLOCK;
			else
				Mode &= ~O_NONBLOCK;
			return 0;
		case TCGETA:
			PxBcopy((PxUChar_t *)&Termio, (PxUChar_t *)iop->ioc_arg, sizeof(struct termio));
			return 0;
		case TCSETA:
		case TCSETAW:
		case TCSETAF:
			PxBcopy((PxUChar_t *)iop->ioc_arg, (PxUChar_t *)&Termio, sizeof(struct termio));
			ttySetParam();
			return 0;
		case TCSBRK:
		case TCXONC:
		case TCFLSH:
			return 0;
		default:
			return -1;
	}
}
/*
 * handling character output
 */
static char ttyoutput(char c)
{
	int		oflag;
	int		i;

	oflag = Termio.c_oflag;

	if (oflag & OPOST)
	{
		switch (c)
		{
			case LF:
				if (oflag & ONLCR)
				{
					ECHOCHAR(CR);
				}
				else if (oflag & ONLRET)
					c = CR;
				break;
			case CR:
				if (oflag & OCRNL)
					c = LF;
				break;
			case TAB:
				if ((oflag & TAB3) == TAB3)
				{
					for (i = 7 - Tabcnt; i > 0; i--)
					{
						ECHOCHAR(SPACE);
					}
					c = SPACE;
				}
				break;
			default:
				Tabcnt++;
				Tabcnt &= 0x07;
				break;
		}
	}
	if (oflag & OLCUC)
	{
		if ((c >= 'a') && (c <= 'z'))
			c += 'A' - 'a';
	}
	return c;
} /* ttyoutput */
/*
 * if delimiter
 */
static int endchr(int c)
{
	if ((c == CR) || (c == LF) || (c == Termio.c_cc[VEOF]))
		return 1;
	else
		return 0;
}
/*
 * handling input character
 */
static int ttyinput(char c)
{
	int lflag;
	int iflag;

	lflag = Termio.c_lflag;
	iflag = Termio.c_iflag;
	if (iflag & ISTRIP)
		c &= 0x7f;
	else
		c &= 0xff;
	if (lflag & ICANON)
	{
	/* check for input control functions */
		if (iflag & (IXON|IXANY))
		{
			if (!(iflag & IXON) || (c == CSTART))
			{
				Xonoff = XON;
				return 1;
			}
			else if (c == CSTOP)
			{
				Xonoff = XOFF;
				return 1;
			}
		}
	/* check for buffer editing functions - cooked mode */
		if (c == Termio.c_cc[VERASE])
		{
			if (Read_in == Read_lfind)
				return 1;
			else
			{
				Read_in--;
				if (lflag & ECHO)
				{
					if (lflag & ECHOE)
					{
						ECHOCHAR(BS);
						ECHOCHAR(SPACE);
						ECHOCHAR(BS);
					}
					else
					{
						ECHOCHAR(BS);
					}
				}
				return 1;
			}
		}
		if (c == Termio.c_cc[VKILL])
		{
			if (Read_in == Read_lfind)
				return 1;
			else
			{
				if (lflag & ECHO)
				{
					unsigned char i;
					if (lflag & ECHOE)
					{
						for (i = Read_lfind; i != Read_in; i++)
						{
							ECHOCHAR(BS);
							ECHOCHAR(SPACE);
							ECHOCHAR(BS);
						}
					}
					else
					{
						ECHOCHAR(BS);
					}
				}
				Read_in = Read_lfind;
				return 1;
			}
		}
		if (c == CR)
		{
			if (iflag & IGNCR)
				return 1;
			if (iflag & ICRNL)
			{
				c = LF;
			}
		}
		else if (c == LF)
		{
			if (iflag & INLCR)
			{
				c = CR;
			}
		}
		else if (iflag & IUCLC)
		{
			if ((c >= 'A') && (c <= 'Z'))
				c += 'a' - 'A';
		}
		if ((unsigned char)(Read_in + 1) != Read_out)
		{
			Read_buf[Read_in++] = c;
			if (endchr(c))
			{
				/* delimiter received */
				Read_lfind = Read_in;
				if (Read_tok)
					PxTaskSignalEvents_Hnd(Owntask, EV_RECEIVE);
			}
			else if ((unsigned char)(Read_in + 1) == Read_out)
			{
				Read_lfind = Read_in;
				PxTaskSignalEvents_Hnd(Owntask, EV_RECEIVE);
			}
		}
		else
			return 0;
	}
	else
	{
		if ((unsigned char)(Read_in + 1) != Read_out)
		{
			Read_buf[Read_in++] = c;
			Read_lfind = Read_in;
			if (Read_tok || ((unsigned char)(Read_in + 1) == Read_out))
				PxTaskSignalEvents_Hnd(Owntask, EV_RECEIVE);
		}
		else
			return 0;
	}
	if (iflag & IXOFF)
	{
		if ((Read_in - Read_out) > 196)
		{
			ECHOCHAR(CSTOP);
		}
	}
	if (lflag & ECHO)
	{
		ECHOCHAR(c);
		if ((c == LF) && (Termio.c_oflag & ONLCR))
		{
			ECHOCHAR(CR);
		}
		else if ((c == CR) && (Termio.c_oflag & OCRNL))
		{
			ECHOCHAR(LF)
		}
	}

	return 1;
}

/***************************************************************************
 *
 *	Interface Function to the tty driver
 *
 *	TtyTask(int prio) creates the tty driver task with the priority prio
 *
 *	TtyWrite(char *buf, int length)	writes the contents of buf with length
 *		length to the output stream
 *
 *	TtyRead(char *buf, int length) reads length byte characters at maximum
 *		or until a end-of-line or edn-of-file character was received
 *
 ***************************************************************************/

int TtyWrite(char *buf, int length)
{
	itc_t		tty_itc;
	PxUChar_t	tty_flag;
	PxMsg_t		tty_token;

	if (Ownmbx == 0)
		return -1;

	PxMsgEnvelop_NoWait(&tty_token, (void *)&tty_itc, sizeof(tty_itc),
						PXOpoolTaskdefault, &tty_flag);
	if (tty_token == 0)
	{
		return -1;
	}

	tty_itc.result = 0;
	tty_itc.msg_typ = DWRITE;
	tty_itc.u.io.data = buf;
	tty_itc.u.io.length = length;

	PxMsgSend(&tty_token, Ownmbx);
	PxAwaitMsgrel(&tty_flag);

	return tty_itc.result;
}

int TtyRead(char *buf, int length)
{
	itc_t		tty_itc;
	PxUChar_t	tty_flag;
	PxMsg_t		tty_token;

	if (Ownmbx == 0)
		return -1;
	PxMsgEnvelop_NoWait(&tty_token, (void *)&tty_itc, sizeof(tty_itc),
						PXOpoolTaskdefault, &tty_flag);
	if (tty_token == 0)
	{
		return -1;
	}

	tty_itc.result = 0;
	tty_itc.msg_typ = DREAD;
	tty_itc.u.io.data = buf;
	tty_itc.u.io.length = length;

	PxMsgSend(&tty_token, Ownmbx);
	PxAwaitMsgrel(&tty_flag);

	return tty_itc.result;
}


PxTask_t CreateTtyTask(int prio)
{
	PxTaskSpec_T ts;
	PxTask_t task;

	PxBzero((PxUChar_t *)&ts, sizeof(ts));

	/* Create Tasks */
	/* no tblimit restrictions */
	ts.ts_tblimit = (PxSize_t)-1;
	
	ts.ts_mc = PXMcTaskdefault;
	
	ts.ts_opool = PXOpoolTaskdefault;

	/* Specify the task's stack.  */
	ts.ts_taskstack.stk_type = PXStackAlloc;
	ts.ts_taskstack.stk_src  = PXMcSystemdefault;
	ts.ts_taskstack.stk_size = 500;

	ts.ts_abortstacksize = 0;
	ts.ts_abortstack = 0;
	ts.ts_name = "TtyTask";
	ts.ts_fun  = TtyTask;

	ts.ts_prio = prio;
	PxTaskCreate(&task, &ts);
	return task;
}
