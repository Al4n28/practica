CC=g++ 
CFLAGS=-I. -I../ -L../boost/lib

%.o : %.c
	$(CC) -c -o $@ $< $(CFLAGS)

ejer01_guia01: ejer01_guia01.o ejer01_guia01_sol.o
	$(CC) -o main ejer01_guia01.o ejer01_guia01_sol.o

clean:
	rm -Rf *.o main