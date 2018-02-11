all: first_pic.c
	gcc -o first first_pic.c
	./first > first.ppm

run: all
	./first > first.ppm

clean:
	rm first
	rm *.o
	rm *~
