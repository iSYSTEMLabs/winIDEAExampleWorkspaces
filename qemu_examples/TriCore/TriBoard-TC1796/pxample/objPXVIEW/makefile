
#
# Makefile to generate the "pxample" demo program
# (TRIBOARD-TC1796 Board)
#
# * Copyright HighTec EDV-Systeme GmbH 1982 - 2007
#
BSPPATH	= ../../../..

BSPBASE	= $(BSPPATH)/bsp/TriBoard-TC1796
PXMNAME = tc1796

CC	= tricore-gcc -mcpu=tc1796
LD	= $(CC)
OBJCOPY	= tricore-objcopy
ASDEBUG = -Wa,--gdwarf2


CDEFS	= -DTRIBOARD_TC1796
# activate (uncomment) this line for using with HighTec's pxview monitor
CDEFS	+= -DPXVIEW  -DPXVIEW_USE_TTY -DPXVIEW_USE_TTY1
VPATH	= ../src ../h $(BSPBASE)/src $(BSPBASE)/h

CEXTRA	= -fno-common
CWARN	= -Wall
CFLAGS	= -g -O2 $(CDEFS) $(CEXTRA)  $(CWARN) $(patsubst %,-I%,$(VPATH))
ASFLAGS	= $(CFLAGS) $(ASDEBUG) 
LDFLAGS =  -Wl,-Map,$(PROJECT).lst

LIBS	= $(MONITOR) $(PXFLIB) $(PXROS) 

MONITOR = -lpxview -lhwuart_$(PXMNAME)
PXROS = -lpxdbg
PXFLIB = 

.PHONY: all clean

PROJECT = pxample
PROJTYP = .elf
PRJ	= $(PROJECT)$(PROJTYP)

SRC	:= pxample.c  clock.c  ledserver.c  stdinit.c  stdtask.c  task1.c  task2.c  task3.c  tty.c  cpufreq.c  rs232.c  timer.c  

OBJ	= $(SRC:%.c=%.o)
CRT0	:= 
STARTUP	= $(CRT0:%.S=%.o) 

all: .depend $(PRJ)

$(PRJ): $(OBJ) $(STARTUP)


%.o: %.S
	$(CC) -c -o $@ $(ASFLAGS) $<
%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

%$(PROJTYP): %.o 
	$(LD) $(LDFLAGS) -o $@ $(STARTUP) $(OBJ) $(LIBS)
	

clean:
	$(RM) $(wildcard *.o)
	$(RM) $(PRJ)
	$(RM) $(wildcard *.lst)
	-$(RM) $(wildcard *.log)

realclean: clean
	$(RM) .depend

.depend: $(SRC) $(CRT0)
	$(CC) -MM $(CFLAGS) $^ > $@

ifeq (.depend,$(wildcard .depend))
include .depend
endif
