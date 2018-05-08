CXX=g++
CXXFLAGS=-c
FLAGS=-Wall -g -std=c++11
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
TRGT=exc


all: $(SRC) $(TRGT)

$(TRGT): $(OBJ)
	$(CXX) $(OBJ) -o $(TRGT)

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@ $(FLAGS)

clean:
	rm *.o $(TRGT)
