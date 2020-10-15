# the compiler: gcc for C program, define as g++ for C++
CC  = gcc
CXX = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS   = -g -Wall
CXXFLAGS = -g -Wall

all: hello hello-plus reverse test_reverse

hello: hello.c
	$(CC) $(CFLAGS) -o $@ $<

hello-plus: hello-plus.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

reverse: reverse.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

test_reverse: test_reverse.c
	$(CC) $(CFLAGS) -lcgreen -o $@ $<

clean:
	$(RM) hello hello-plus
