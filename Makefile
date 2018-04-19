CXX = clang++
LD = clang++
LDFLAGS = -std=c++14 -fsanitize=address
CXXFLAGS = -std=c++14 -Wall -Wextra -Werror -pedantic -fsanitize=address
RM = rm

TESTS = tests

all : smart

clean:
	$(RM) -rf $(TARGETS) $(TESTS) *.o

smart : smart.o
	$(LD) $(LDFLAGS) -o smart smart.o

smart.o : smart.cpp smart.h
	$(CXX) -c $(CXXFLAGS) $(TESTFLAGS) smart.cpp -o smart.o


.PHONY: clean
