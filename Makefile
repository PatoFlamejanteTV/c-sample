# the compiler: gcc for C program, define as g++ for C++
CC  = gcc
CXX = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS   = -g -Wall
CXXFLAGS = -g -Wall

all: hello hello-plus

hello: hello.c
	$(CC) $(CFLAGS) -o $@ $<

hello-plus: hello-plus.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	$(RM) hello hello-plus
