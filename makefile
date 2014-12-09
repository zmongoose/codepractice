program: main.o sqlist.o
	gcc -o program main.o sqlist.o
main.o: main.c
	gcc -c main.c

sqlist.o: sqlist.c
	gcc -c sqlist.c

clean:
	rm -fr *.o

