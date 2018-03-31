CC=g++
FLAGS=-c -std=c++14 -Wall -Werror

all: pract2

pract2: main.o figures.o
	$(CC) main.o figures.o -o pract2

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

figures.o: figures.cpp
	$(CC) $(FLAGS) figures.cpp

clean:
	rm -rf *.o pract2