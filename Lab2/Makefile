CXX = g++
CXXFlags = -Wall -Wextra -pedantic -g

all: ftest

ftest: ftest.o Dir.o File.o
	$(CXX) $^ -o $@

Dir.o : Dir.cpp Dir.h File.h
	$(CXX) $(CXXFlags) -c $<

File.o : File.cpp File.h
	$(CXX) $(CXXFlags) -c $<

ftest.o: ftest.cpp Dir.h File.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o ftest
