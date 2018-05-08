CXX=g++
CXXFLAGS=-c
FLAGS=-Wall -g
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
TRGT=extest


all: $(SRC) $(TRGT)

$(TRGT): $(OBJ)
	$(CXX) $(OBJ) -o $(TRGT)

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@ $(FLAGS)

clean:
	rm *.o $(TRGT)
