all: first_pic.c
	gcc -o first first_pic.c

run: all
	./first > first.ppm

clean:
	rm first
	rm *.o
	rm *~
