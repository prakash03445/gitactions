CXX = g++
CXXFLAGS = -Iinclude -std=c++17 -Wall

all: test/test

test: test/test.cpp src/math.cpp
	$(CXX) $(CXXFLAGS) -o test/test test/test.cpp src/math.cpp

clean:
	rm -f test/test
