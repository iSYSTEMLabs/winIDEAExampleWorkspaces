
#
# Makefile to generate the "HelloSerial" demo program
# (TRIBOARD-TC1796 Board)
#
# * Copyright HighTec EDV-Systeme GmbH 1982 - 2007
#
BSPPATH	= ../../../..

BSPBASE	= $(BSPPATH)/bsp/TriBoard-TC1796

CC	= tricore-gcc -mcpu=tc1796
LD	= $(CC)
OBJCOPY	= tricore-objcopy


CDEFS	=  -DTRIBOARD_TC1796
VPATH	= ../src ../h $(BSPBASE)/src $(BSPBASE)/h

CEXTRA	= -fno-common
CWARN	= -Wall
CFLAGS	= -g -O2 $(CDEFS) $(CEXTRA)  $(CWARN) $(patsubst %,-I%,$(VPATH))
ASFLAGS	= $(CFLAGS) $(ASDEFS) 
LDFLAGS =  -Wl,-Map,$(PROJECT).lst

.PHONY: all clean

PROJECT = hello
PROJTYP = .elf
PRJ	= $(PROJECT)$(PROJTYP)

SRC	:= hello.c  cpufreq.c  rs232poll.c  

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
	

%.bin: %.elf
	$(OBJCOPY) -O binary $< $@

clean:
	$(RM) $(wildcard *.o)
	$(RM) $(PRJ)
	$(RM) $(PROJECT).bin
	$(RM) $(PROJECT).lst
	-$(RM) $(wildcard *.log)

realclean: clean
	$(RM) .depend

.depend: $(SRC) $(CRT0)
	$(CC) -MM $(CFLAGS) $^ > $@

ifeq (.depend,$(wildcard .depend))
include .depend
endif
