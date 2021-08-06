#! /bin/bash

CC = g++
FLAGS = -c -Wall

demo: main.o getDistance.o getDisplay.o getResult.o
	$(CC) -o demo main.o getDistance.o getDisplay.o getResult.o


getResult.o: getResult.cpp headers.h declerations.h
	$(CC) $(FLAGS) getResult.cpp
getDisplay.o: getDisplay.cpp headers.h declerations.h
	$(CC) $(FLAGS) getDisplay.cpp
getDistance.o: getDistance.cpp headers.h declerations.h
	$(CC) $(FLAGS) getDistance.cpp
main.o: main.cpp headers.h declerations.h
	$(CC) $(FLAGS) main.cpp

clean:
	-rm *.o
	-rm demo
