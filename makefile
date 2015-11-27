all: dessins
CFLAGS =-Wall -W -ansi -pedantic
LDLIBS = -lm


dessins: labo11.o dessins.o

dessins.o: dessins.c dessins.h

labo11.o: labo11.c dessins.h

clean:
	rm -rf *.o
