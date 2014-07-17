#==============================================================
BASEDIR    = ${shell pwd}
SRCDIR     = $(BASEDIR)/src
INCLUDEDIR = $(BASEDIR)/include
LIBDIR     = $(BASEDIR)/obj
CFLAGS :=
CFLAGS += -g -Wall
CFLAGS += -I$(INCLUDEDIR)
CFLAGS += -L$(LIBDIR)

LIBOBJ = -lc_interface
PROJECT = a.out


CC = gcc

export SRCDIR INCLUDEDIR LIBDIR CFLAGS CC

.PHONY: all build clean

all: build_src make_exe


build_src:
	make -C $(SRCDIR)

make_exe:
	$(CC) -o $(PROJECT) main.c $(CFLAGS) $(LIBOBJ)

clean:
	make -C $(SRCDIR) clean
	-rm $(LIBDIR)/*
	-rm $(PROJECT)
