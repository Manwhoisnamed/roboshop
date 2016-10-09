# Makefile for Publications
CXXFLAGS = 

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: login.o testFile.o Arm.o RoboPart.o Leg.o Battery.o Head.o Torso.o
	$(CXX) $(CXXFLAGS) login.o testFile.o Arm.o RoboPart.o Leg.o Battery.o Head.o Torso.o
login.o: login.cpp 
	$(CXX) $(CXXFLAGS) -w -c login.cpp
testFile.o: testFile.cpp 
	$(CXX) $(CXXFLAGS) -w -c testFile.cpp
Arm.o: Arm.cpp
	$(CXX) $(CXXFLAGS) -w -c Arm.cpp
Leg.o: Leg.cpp
	$(CXX) $(CXXFLAGS) -w -c Leg.cpp
Battery.o: Battery.cpp
	$(CXX) $(CXXFLAGS) -w -c Battery.cpp
Head.o: Head.cpp
	$(CXX) $(CXXFLAGS) -w -c Head.cpp
RoboPart.o: RoboPart.cpp
	$(CXX) $(CXXFLAGS) -w -c RoboPart.cpp
Torso.o: Torso.cpp
	$(CXX) $(CXXFLAGS) -w -c Torso.cpp
clean:
	rm -f *.o a.out
