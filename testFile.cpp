 #include "Arm.h"
 #include "RoboPart.h"
 #include "Leg.h"
 #include "Battery.h"
 #include "Head.h"
 #include "Torso.h"

 using namespace std;

 int main(void){
    //variables for the RoboPart
    string name = "super awesome part";
    int SN = 1234;
    double weight = 1234.12;
    double cost = 1234.12;
    string description = "This is a great description";
    
    //test arm
    double passiveDraw = 27;
    double activeDraw = 34;
    bool laser = true;
    Arm arm(name,SN,weight,cost,description,passiveDraw,activeDraw,laser);
    //test RoboPart getters
    cout << "The name of the part is: " << arm.getName() << "\n";
    cout << "The SN of the part is: " << arm.getSN() << "\n";
    cout << "The weight of the part is: " << arm.getWeight() << "\n";
    cout << "The cost of the part is: " << arm.getCost() << "\n";
    cout << "The description of the part is: " << arm.getDescription() << "\n";
    cout << "The type of the part is: " << arm.getType() << "\n";
    cout << "The passive draw on the arm is " << arm.getpassiveDraw() << " units of charge per day.\n";
    cout << "The passive draw on the arm is " << arm.getactiveDraw() << " units of charge per day.\n";
    cout << "It has a laser on the arm:  " << arm.getLaser() << "\n";

    //test leg
    passiveDraw = 32;
    activeDraw = 97;
    int speed = 40;
    Leg leg(name,SN,weight,cost,description,passiveDraw,activeDraw,speed);
    cout << "\nThe type of the part is: " << leg.getType() << "\n";
    cout << "The passive draw on the arm is " << leg.getpassiveDraw() << " units of charge per day.\n";
    cout << "The passive draw on the arm is " << leg.getactiveDraw() << " units of charge per day.\n";
    cout << "The speed of the leg is " << leg.getSpeed() << ".\n";

    //test battery
    int charge = 90;
    Battery battery(name,SN,weight,cost,description,charge);
    cout << "\nThe type of the part is: " << battery.getType() << "\n";
    cout << "The battery has " << battery.getCharge() << " units of charge.\n";

    //test arm
    double draw = 12;
    laser = true;
    Head head(name,SN,weight,cost,description,draw,laser);
    cout << "\nThe type of the part is: " << head.getType() << "\n";
    cout << "The draw on the arm is " << head.getDraw() << " units of charge per day.\n";
    cout << "It has a laser on the head:  " << head.getLaser() << "\n";
    
    //test torso
    draw = 102;
    int bSpace = 1;
    int aSpace = 2;
    int lSpace = 3;
    Torso torso(name,SN,weight,cost,description,draw,bSpace,aSpace,lSpace);
    cout << "\nThe type of the part is: " << torso.getType() << "\n";
    cout << "The draw on the torso is " << torso.getDraw() << " units of charge per day.\n";
    cout << "The torso can hold " << torso.getBSpace() << " batteries.\n";
    cout << "The torso can hold " << torso.getASockets() << " arms.\n";
    cout << "The torso can hold " << torso.getLSockets() << " legs.\n";
 }
