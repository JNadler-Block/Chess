CC = g++
CFLAGS = -std=c++20 -Wall -g
ALTFLAGS = -std=c++11 -Wall -Wnon-virtual-dtor -Woverloaded-virtual -g
objects = Rook.o Bishop.o Pawn.o King.o Queen.o Knight.o Board.o


default: main

main: main.o $(objects)
	$(CC) $(CFLAGS) -o main main.o $(objects) -lreadline


%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm *.o
