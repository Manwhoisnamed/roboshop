 #include "Arm.h"
 #include "RoboPart.h"
 #include "Leg.h"

 using namespace std;

 int main(void){
    //variables for the RoboPart
    string name = "super awesome part";
    int SN = 1234;
    double weight = 1234.12;
    double cost = 1234.12;
    string description = "This is a great description";
    string type = "garbage";   
    
    //test RoboPart getters
    RoboPart garbage(name, SN, weight, cost, description, type);
    cout << "The name of the part is: " << garbage.getName() << "\n";
    cout << "The SN of the part is: " << garbage.getSN() << "\n";
    cout << "The weight of the part is: " << garbage.getWeight() << "\n";
    cout << "The cost of the part is: " << garbage.getCost() << "\n";
    cout << "The description of the part is: " << garbage.getDescription() << "\n";
    cout << "The type of the part is: " << garbage.getType() << "\n";


    //test arm
    type = "arm";
    double passiveDraw = 27;
    double activeDraw = 34;
    bool laser = true;
    Arm arm(name,SN,weight,cost,description,type,passiveDraw,activeDraw,laser);
    cout << "\nThe type of the part is: " << arm.getType() << "\n";
    cout << "The passive draw on the arm is " << arm.getpassiveDraw() << "\n";
    cout << "The passive draw on the arm is " << arm.getactiveDraw() << "\n";
    cout << "It has a laser on the arm:  " << arm.getLaser() << "\n";

    //test leg
    type = "leg";
    passiveDraw = 32;
    activeDraw = 97;
    int speed = 40;
    Leg leg(name,SN,weight,cost,description,type,passiveDraw,activeDraw,speed);
    cout << "\nThe type of the part is: " << leg.getType() << "\n";
    cout << "The passive draw on the arm is " << leg.getpassiveDraw() << "\n";
    cout << "The passive draw on the arm is " << leg.getactiveDraw() << "\n";
    cout << "The speed of the leg is " << leg.getSpeed() << "\n";


    
 }
