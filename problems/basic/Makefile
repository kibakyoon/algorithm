CC = g++
OBJS = main.o
TARGET = MAIN

.SUFFIXES : .c .o

all : $(TARGET)

$(TARGET) : $(OBJS)
	      $(CC) -o $@ $(OBJS)

clean:
	    rm -f $(OBJS) $(TARGET)

MySocket.o : main.cpp main.h
