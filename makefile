default: lab1


_explode_: main.o

	gcc -o _explode_ main.o lab1.c

main.o: main.c lab1.c

	gcc -c main.c lab1.c

clean:

	-rm -f *.o _explode_
