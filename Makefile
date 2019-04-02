CXX = g++
LD = g++
LDFLAGS = -std=c++1y
CXXFLAGS = -std=c++1y
RM = rm

TESTS = tests

all : smart

clean:
	$(RM) -rf $(TARGETS) $(TESTS) *.o

smart : smart.o
	$(LD) $(LDFLAGS) -o smart smart.o

smart.o : smart.cpp smart.h
	$(CXX) -c $(CXXFLAGS) $(TESTFLAGS) smart.cpp -o smart.o

hello : hello.cpp
	$(CXX) hello.cpp -o hello

.PHONY: clean
