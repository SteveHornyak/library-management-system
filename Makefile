all: library

library: main.cpp
	g++ -g -Wall -std=c++11 main.cpp -o library

clean:
	rm library
	rm *.o