CC=g++
CFLAGS=-I. -I../ -L/boost/lib

%.o : %.c
	$(CC) -c -o $@ $< $(CFLAGS)

guia01_ejer01: guia01_ejer01.o guia01_ejer01_sol.o guia01_ejer01_alu.o epsilon.o
	$(CC) -o main guia01_ejer01.o guia01_ejer01_sol.o guia01_ejer01_alu.o epsilon.o

guia01_ejer02: guia01_ejer02.o guia01_ejer02_sol.o guia01_ejer02_alu.o epsilon.o
	$(CC) -o main guia01_ejer02.o guia01_ejer02_sol.o guia01_ejer02_alu.o epsilon.o

guia01_ejer03: guia01_ejer03.o guia01_ejer03_sol.o guia01_ejer03_alu.o epsilon.o
	$(CC) -o main guia01_ejer03.o guia01_ejer03_sol.o guia01_ejer03_alu.o epsilon.o

guia01_ejer04: guia01_ejer04.o guia01_ejer04_sol.o guia01_ejer04_alu.o epsilon.o
	$(CC) -o main guia01_ejer04.o guia01_ejer04_sol.o guia01_ejer04_alu.o epsilon.o

guia01_ejer05: guia01_ejer05.o guia01_ejer05_sol.o guia01_ejer05_alu.o epsilon.o
	$(CC) -o main guia01_ejer05.o guia01_ejer05_sol.o guia01_ejer05_alu.o epsilon.o

guia02_ejer01: guia02_ejer01.o guia02_ejer01_sol.o guia02_ejer01_alu.o epsilon.o
	$(CC) -o main guia02_ejer01.o guia02_ejer01_sol.o guia02_ejer01_alu.o epsilon.o

guia02_ejer02: guia02_ejer02.o guia02_ejer02_sol.o guia02_ejer02_alu.o epsilon.o
	$(CC) -o main guia02_ejer02.o guia02_ejer02_sol.o guia02_ejer02_alu.o epsilon.o

guia02_ejer03: guia02_ejer03.o guia02_ejer03_sol.o guia02_ejer03_alu.o epsilon.o
	$(CC) -o main guia02_ejer03.o guia02_ejer03_sol.o guia02_ejer03_alu.o epsilon.o

guia02_ejer04: guia02_ejer04.o guia02_ejer04_sol.o guia02_ejer04_alu.o epsilon.o
	$(CC) -o main guia02_ejer04.o guia02_ejer04_sol.o guia02_ejer04_alu.o epsilon.o

guia02_ejer05: guia02_ejer05.o guia02_ejer05_sol.o guia02_ejer05_alu.o epsilon.o
	$(CC) -o main guia02_ejer05.o guia02_ejer05_sol.o guia02_ejer05_alu.o epsilon.o

guia03_ejer01: guia03_ejer01.o guia03_ejer01_sol.o guia03_ejer01_alu.o epsilon.o
	$(CC) -o main guia03_ejer01.o guia03_ejer01_sol.o guia03_ejer01_alu.o epsilon.o

guia03_ejer02: guia03_ejer02.o guia03_ejer02_sol.o guia03_ejer02_alu.o epsilon.o
	$(CC) -o main guia03_ejer02.o guia03_ejer02_sol.o guia03_ejer02_alu.o epsilon.o

guia03_ejer03: guia03_ejer03.o guia03_ejer03_sol.o guia03_ejer03_alu.o epsilon.o
	$(CC) -o main guia03_ejer03.o guia03_ejer03_sol.o guia03_ejer03_alu.o epsilon.o

guia03_ejer04: guia03_ejer04.o guia03_ejer04_sol.o guia03_ejer04_alu.o epsilon.o
	$(CC) -o main guia03_ejer04.o guia03_ejer04_sol.o guia03_ejer04_alu.o epsilon.o

guia03_ejer05: guia03_ejer05.o guia03_ejer05_sol.o guia03_ejer05_alu.o epsilon.o
	$(CC) -o main guia03_ejer05.o guia03_ejer05_sol.o guia03_ejer05_alu.o epsilon.o

guia04_ejer01: guia04_ejer01.o guia04_ejer01_sol.o guia04_ejer01_alu.o epsilon.o
	$(CC) -o main guia04_ejer01.o guia04_ejer01_sol.o guia04_ejer01_alu.o epsilon.o

guia04_ejer02: guia04_ejer02.o guia04_ejer02_sol.o guia04_ejer02_alu.o epsilon.o
	$(CC) -o main guia04_ejer02.o guia04_ejer02_sol.o guia04_ejer02_alu.o epsilon.o

guia04_ejer03: guia04_ejer03.o guia04_ejer03_sol.o guia04_ejer03_alu.o epsilon.o
	$(CC) -o main guia04_ejer03.o guia04_ejer03_sol.o guia04_ejer03_alu.o epsilon.o

guia04_ejer04: guia04_ejer04.o guia04_ejer04_sol.o guia04_ejer04_alu.o epsilon.o
	$(CC) -o main guia04_ejer04.o guia04_ejer04_sol.o guia04_ejer04_alu.o epsilon.o

guia04_ejer05: guia04_ejer05.o guia04_ejer05_sol.o guia04_ejer05_alu.o epsilon.o
	$(CC) -o main guia04_ejer05.o guia04_ejer05_sol.o guia04_ejer05_alu.o epsilon.o

guia05_ejer01: guia05_ejer01.o guia05_ejer01_sol.o guia05_ejer01_alu.o epsilon.o
	$(CC) -o main guia05_ejer01.o guia05_ejer01_sol.o guia05_ejer01_alu.o epsilon.o

guia05_ejer02: guia05_ejer02.o guia05_ejer02_sol.o guia05_ejer02_alu.o epsilon.o
	$(CC) -o main guia05_ejer02.o guia05_ejer02_sol.o guia05_ejer02_alu.o epsilon.o

guia05_ejer03: guia05_ejer03.o guia05_ejer03_sol.o guia05_ejer03_alu.o epsilon.o
	$(CC) -o main guia05_ejer03.o guia05_ejer03_sol.o guia05_ejer03_alu.o epsilon.o

guia05_ejer04: guia05_ejer04.o guia05_ejer04_sol.o guia05_ejer04_alu.o epsilon.o
	$(CC) -o main guia05_ejer04.o guia05_ejer04_sol.o guia05_ejer04_alu.o epsilon.o

guia05_ejer05: guia05_ejer05.o guia05_ejer05_sol.o guia05_ejer05_alu.o epsilon.o
	$(CC) -o main guia05_ejer05.o guia05_ejer05_sol.o guia05_ejer05_alu.o epsilon.o

guia06_ejer01: guia06_ejer01.o guia06_ejer01_sol.o guia06_ejer01_alu.o epsilon.o
	$(CC) -o main guia06_ejer01.o guia06_ejer01_sol.o guia06_ejer01_alu.o epsilon.o

guia06_ejer02: guia06_ejer02.o guia06_ejer02_sol.o guia06_ejer02_alu.o epsilon.o
	$(CC) -o main guia06_ejer02.o guia06_ejer02_sol.o guia06_ejer02_alu.o epsilon.o

guia06_ejer03: guia06_ejer03.o guia06_ejer03_sol.o guia06_ejer03_alu.o epsilon.o
	$(CC) -o main guia06_ejer03.o guia06_ejer03_sol.o guia06_ejer03_alu.o epsilon.o

guia06_ejer04: guia06_ejer04.o guia06_ejer04_sol.o guia06_ejer04_alu.o epsilon.o
	$(CC) -o main guia06_ejer04.o guia06_ejer04_sol.o guia06_ejer04_alu.o epsilon.o

guia06_ejer05: guia06_ejer05.o guia06_ejer05_sol.o guia06_ejer05_alu.o epsilon.o
	$(CC) -o main guia06_ejer05.o guia06_ejer05_sol.o guia06_ejer05_alu.o epsilon.o

clear:
	rm -Rf *.o main