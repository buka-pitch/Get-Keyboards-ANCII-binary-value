ANCII: main.o evaluate.o
	gcc main.o evaluate.o -o ANCII
	make clean


main.o: main.c
	gcc -c main.c


evaluate.o: evaluate.c
	gcc -c evaluate.c


clean:
	rm *.o
