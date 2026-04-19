prog: mult_div.o sub.o add.o main.o
	gcc mult_div.o sub.o add.o main.o -o prog

add.o: add.c
	gcc -c add.c -o add.o

sub.o: sub.c
	gcc -c sub.c -o sub.o

mult_div.o: mult_div.c
	gcc -c mult_div.c -o mult_div.o

main.o: main.c
	gcc -c main.c -o main.o

clean:
	rm -f *.o prog