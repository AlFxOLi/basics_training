CC=gcc
CFLAGS=-c -Wall

all: program

program: main.o hello.o sizes.o types.o binary.o struct.o pack.o
	gcc -o program main.o hello.o sizes.o types.o binary.o struct.o pack.o

main.o: main.c
	gcc -c main.c

hello.o: lab1/hello.c lab1/hello.h
	gcc -c lab1/hello.c lab1/hello.h

sizes.o: lab2/sizes.c lab2/sizes.h
	gcc -c lab2/sizes.c lab2/sizes.h

types.o: lab3/types.c lab3/types.h
	gcc -c  lab3/types.c lab3/types.h

binary.o: lab4/binary.c lab4/binary.h
	gcc -c lab4/binary.c lab4/binary.h

struct.o: lab5/struct.c lab5/struct.h
	gcc -c lab5/struct.c lab5/struct.h

pack.o: lab6/pack.c lab6/pack.h
	gcc -c lab6/pack.c lab6/pack.h

clean:
	rm -rf *.o
