CC = g++
OBJS = main.o
TARGET = MAIN

.SUFFIXES : .c .o

all : $(TARGET)

$(TARGET) : $(OBJS)
	      $(CC) -o $@ $(OBJS)

clean:
	    rm -f $(OBJS) $(TARGET)

main.o : main.cpp main.h
