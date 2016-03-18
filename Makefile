CFLAGS=-std=c++11
CPP=g++

all: main.cpp tree.cpp tree.hpp
	$(CPP) -c -o tree.o tree.cpp $(CFLAGS)
	$(CPP) -c -o main.o main.cpp $(CFLAGS)
	$(CPP) -o tree main.o tree.o -lstdc++
clean:
	rm *.o tree
