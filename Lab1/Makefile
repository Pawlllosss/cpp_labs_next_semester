CXX = g++
CXXFlags = -Wall -g

all: vtest

vtest: vtest.o PVec.o FloatWrapper.o IntWrapper.o StringWrapper.o
	$(CXX) $^ -o $@

PVec.o: PVec.cpp PVec.h
	$(CXX) $(CXXFlags) -c $<

FloatWrapper.o: FloatWrapper.cpp FloatWrapper.h
	$(CXX) $(CXXFlags) -c $<

IntWrapper.o: IntWrapper.cpp IntWrapper.h
	$(CXX) $(CXXFlags) -c $<

StringWrapper.o: StringWrapper.cpp StringWrapper.h
	$(CXX) $(CXXFlags) -c $<

Wrapper.o: Wrapper.cpp Wrapper.h
	$(CXX) $(CXXFlags) -c $<

vtest.o: vtest.cpp PVec.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o vtest
