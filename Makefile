add.o: 
	gcc add.c -o add.o

sub.o: 
	gcc sub.c -o sub.o

mult_div.o:
	gcc mult_div.c -o mult_div.o

main.o:
	gcc mult_div.o sub.o add.o main.c -o main.o

output:
	gcc main.o -o try
