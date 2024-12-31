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



#! /bin/bash

csipc:init.o main.o createinfra.o  threadfunc.o exitfunc.o shutdown.o
	gcc -o csipc init.o main.o createinfra.o threadfunc.o exitfunc.o shutdown.o -lpthread

init.o:init.c headers.h declerations.h shrddeclerations.h
	gcc -c init.c 
main.o:main.c headers.h declerations.h shrddeclerations.h
	gcc -c main.c -lpthread
createinfra.o:createinfra.c headers.h declerations.h shrddeclerations.h
	gcc -c createinfra.c -lpthread
threadfunc.o:threadfunc.c headers.h declerations.h shrddeclerations.h
	gcc -c threadfunc.c -lpthread
exitfunc.o:exitfunc.c headers.h declerations.h
	gcc -c exitfunc.c 
shutdown.o:shutdown.c headers.h declerations.h shrddeclerations.h
	gcc -c shutdown.c 

clean:
	rm *.o
	rm csipc  

############## Another way of cratinng makefile ##############
CC = gcc
CFLAGS = -Wall -g
LDFLAGS = -lm

all: myprogram

myprogram: main.o other.o
    $(CC) $(CFLAGS) -o myprogram main.o other.o $(LDFLAGS)

main.o: main.c
    $(CC) $(CFLAGS) -c main.c

other.o: other.c
    $(CC) $(CFLAGS) -c other.c
################################################################

CC = gcc
CFLAGS = -lpthread

# List of object files
OBJ = init.o main.o createinfra.o threadfunc.o exitfunc.o shutdown.o

# Final target executable
TARGET = csipc

# Rule to create the final executable
$(TARGET): $(OBJ)
    $(CC) -o $(TARGET) $(OBJ) $(CFLAGS)

# Compilation rules for each .o file
init.o: init.c headers.h declerations.h shrddeclerations.h
    $(CC) -c init.c

main.o: main.c headers.h declerations.h shrddeclerations.h
    $(CC) -c main.c $(CFLAGS)

createinfra.o: createinfra.c headers.h declerations.h shrddeclerations.h
    $(CC) -c createinfra.c $(CFLAGS)

threadfunc.o: threadfunc.c headers.h declerations.h shrddeclerations.h
    $(CC) -c threadfunc.c $(CFLAGS)

exitfunc.o: exitfunc.c headers.h declerations.h
    $(CC) -c exitfunc.c

shutdown.o: shutdown.c headers.h declerations.h shrddeclerations.h
    $(CC) -c shutdown.c $(CFLAGS)

# Clean up object files and the executable
clean:
    rm -f *.o $(TARGET)
