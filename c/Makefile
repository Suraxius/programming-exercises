run: program
	./program

program: exam.o analyzer.o
	gcc -o program exam.o analyzer.o

exam.o: exam.c
	gcc -c exam.c

analyzer.o: analyzer.c
	gcc -c analyzer.c
