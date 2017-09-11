all: main 
main: main.c

	gcc main.c functions.c functions.h -o main

.PHONY: clean
clean:
	rm -fv main *.o
	rm -fv *~ #*#
