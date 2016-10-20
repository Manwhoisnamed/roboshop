# Maxwell Sanders 1001069652
# Makefile for roboshop
CXXFLAGS = 

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable:  Storage.o RoboModel.o Order.o SalesFloor.o Database.o Customer.o login.o Menu.o testFile.o Arm.o Leg.o Battery.o RoboPart.o Head.o Torso.o Workshop.o
	$(CXX) $(CXXFLAGS)  Storage.o RoboModel.o Order.o SalesFloor.o Database.o Customer.o login.o Menu.o testFile.o Arm.o Leg.o Battery.o RoboPart.o Head.o Torso.o Workshop.o
SalesFloor.o: SalesFloor.cpp
	$(CXX) $(CXXFLAGS) -w -c SalesFloor.cpp
Order.o: Order.cpp
	$(CXX) $(CXXFLAGS) -w -c Order.cpp
Customer.o: Customer.cpp
	$(CXX) $(CXXFLAGS) -w -c Customer.cpp
Database.o: Database.cpp
	$(CXX) $(CXXFLAGS) -w -c Database.cpp
RoboModel.o: RoboModel.cpp
	$(CXX) $(CXXFLAGS) -w -c RoboModel.cpp
Storage.o: Storage.cpp
	$(CXX) $(CXXFLAGS) -w -c Storage.cpp
Workshop.o: Workshop.cpp 
	$(CXX) $(CXXFLAGS) -w -c Workshop.cpp
Menu.o: Menu.cpp 
	$(CXX) $(CXXFLAGS) -w -c Menu.cpp
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
Torso.o: Torso.cpp
	$(CXX) $(CXXFLAGS) -w -c Torso.cpp
RoboPart.o: RoboPart.cpp
	$(CXX) $(CXXFLAGS) -w -c RoboPart.cpp
clean:
	rm -f *.o a.out
