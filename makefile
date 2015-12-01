all: dessins
CFLAGS =-Wall -W -ansi -pedantic
LDLIBS = -lm


dessins: labo11.o dessins.o outils_saisie.o

dessins.o: dessins.c dessins.h

labo11.o: labo11.c dessins.h outils_saisie.h

outils_saisie.o: outils_saisie.c outils_saisie.h

clean:
	rm -rf *.o
