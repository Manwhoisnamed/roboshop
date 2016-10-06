# Makefile for Publications
CXXFLAGS = 

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: testFile.o Arm.o RoboPart.o Leg.o Battery.o
	$(CXX) $(CXXFLAGS) testFile.o Arm.o RoboPart.o Leg.o Battery.o
testFile.o: testFile.cpp 
	$(CXX) $(CXXFLAGS) -w -c testFile.cpp
Arm.o: Arm.cpp
	$(CXX) $(CXXFLAGS) -w -c Arm.cpp
Leg.o: Leg.cpp
	$(CXX) $(CXXFLAGS) -w -c Leg.cpp
Battery.o: Battery.cpp
	$(CXX) $(CXXFLAGS) -w -c Battery.cpp
RoboPart.o: RoboPart.cpp
	$(CXX) $(CXXFLAGS) -w -c RoboPart.cpp
clean:
	rm -f *.o a.out
