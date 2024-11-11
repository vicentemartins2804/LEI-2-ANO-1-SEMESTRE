exec_file: asm.o main.o
	gcc asm.o main.o -o exec_file

asm.o: asm.s asm.h
	as -g asm.s -o asm.o

main.o: main.c asm.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

clean:
	rm -f *.o exec_file
	
run: exec_file
	./exec_file
