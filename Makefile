all: mem1 mem2 mem3

clean:
	rm -f mem1 mem2 mem3

mem1: mem1.c
	gcc -o mem1 mem1.c -Wall

mem2: mem2.c
	gcc -o mem2 mem2.c -Wall

mem3: mem3.c
	gcc -o mem3 mem3.c -Wall