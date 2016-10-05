# Makefile for Publications
CXXFLAGS = 

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: testFile.o Arm.o
	$(CXX) $(CXXFLAGS) testFile.o Arm.o
testFile.o: testFile.cpp Arm.h
	$(CXX) $(CXXFLAGS) -w -c testFile.cpp
Arm.o: Arm.cpp Arm.h
	$(CXX) $(CXXFLAGS) -w -c Arm.cpp
clean:
	rm -f *.o a.out
