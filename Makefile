
CC=gcc
LIBS=-lm

build:
	$(CC) $(LIBS) mhs.c -o mhs

run: build
	./mhs

clean:
	rm -f mhs
