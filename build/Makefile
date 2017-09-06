IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

LDIR=../lib
BDIR=../bin

LIBS=-lm


OBJ = ./../src/helloworld.o 


%.o:%.c
	$(CC) -c -o $@ $<  $(CFLAGS)

helloworld:$(OBJ)
	$(CC) -o $(BDIR)/$@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(BDIR)/*
