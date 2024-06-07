CXX = g++
CXXFLAGS = -Wall -std=c++11

all: main

main: main.o search_algorithms.o
	$(CXX) $(CXXFLAGS) -o main main.o search_algorithms.o

main.o: main.cpp search_algorithms.h
	$(CXX) $(CXXFLAGS) -c main.cpp

search_algorithms.o: search_algorithms.cpp search_algorithms.h
	$(CXX) $(CXXFLAGS) -c search_algorithms.cpp

clean:
	rm -f *.o main
