all: mylib.o
	gcc -o main_test.exe main_test.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib.c

run:
	gcc -o mylib.o -c mylib.c
	gcc -o main_test.exe main_test.c mylib.o
	./main_test.exe

time: mylib.o
	gcc -o main_b_time_recursive.exe main_b_time_recursive.c mylib.o
	gcc -o main_b_time_iterative.exe main_b_time_iterative.c mylib.o

space: mylib.o
	gcc -o main_b_space_recursive.exe main_b_space_recursive.c mylib.o
	gcc -o main_b_space_iterative.exe main_b_space_iterative.c mylib.o

clear:
	rm -rf*.exe
	rf -rf*.o