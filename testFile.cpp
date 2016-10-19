 #include "Arm.h"
 #include "RoboPart.h"
 #include "Leg.h"
 #include "Battery.h"
 #include "Head.h"
 #include "Torso.h"
 #include "Storage.h"
 #include "Database.h"
 #include "Customer.h"

 using namespace std; 

 static void test(){
    Storage testStore;
    //variables for the RoboPart
    string name = "super awesome part";
    int SN = 1234;
    double weight = 4321.21;
    double cost = 1234.12;
    string description = "This is a great description";
    
    //testStore arm
    double passiveDraw = 27;
    double activeDraw = 34;
    bool laser = true;
    Arm arm(name,SN,weight,cost,description,passiveDraw,activeDraw,laser);
    //testStore RoboPart getters
    cout << "\nThe name of the part is: " << arm.getName() << "\n";
    cout << "The SN of the part is: " << arm.getSN() << "\n";
    cout << "The weight of the part is: " << arm.getWeight() << "\n";
    cout << "The cost of the part is: " << arm.getCost() << "\n";
    cout << "The description of the part is: " << arm.getDescription() << "\n";
    cout << "The type of the part is: " << arm.getType() << "\n";
    cout << "The passive draw on the arm is " << arm.getpassiveDraw() << " Kilowatts.\n";
    cout << "The passive draw on the arm is " << arm.getactiveDraw() << " Kilowatts.\n";
    cout << "It has a laser on the arm:  " << arm.getLaser() << "\n";

    //testStore leg
    passiveDraw = 32;
    activeDraw = 97;
    int speed = 40;
    Leg leg(name,SN,weight,cost,description,passiveDraw,activeDraw,speed);
    cout << "\nThe type of the part is: " << leg.getType() << "\n";
    cout << "The passive draw on the arm is " << leg.getpassiveDraw() << " Kilowatts.\n";
    cout << "The passive draw on the arm is " << leg.getactiveDraw() << " Kilowatts.\n";
    cout << "The speed of the leg is " << leg.getSpeed() << ".\n";

    //testStore battery
    int charge = 90;
    Battery battery(name,SN,weight,cost,description,charge);
    cout << "\nThe type of the part is: " << battery.getType() << "\n";
    cout << "The battery has " << battery.getCharge() << " Kilowatt hours of charge.\n";

    //testStore arm
    double draw = 12;
    laser = true;
    Head head(name,SN,weight,cost,description,draw,laser);
    cout << "\nThe type of the part is: " << head.getType() << "\n";
    cout << "The draw on the arm is " << head.getDraw() << " Kilowatts.\n";
    cout << "It has a laser on the head:  " << head.getLaser() << "\n";
    
    //testStore torso
    draw = 102;
    int bSpace = 1;
    int aSpace = 2;
    int lSpace = 3;
    Torso torso(name,SN,weight,cost,description,draw,bSpace);
    cout << "\nThe type of the part is: " << torso.getType() << "\n";
    cout << "The draw on the torso is " << torso.getDraw() << " Kilowatts.\n";
    cout << "The torso can hold " << torso.getBSpace() << " batteries.\n";
    
    //check storage
    testStore.addArm(arm);
    testStore.printArms();   

    testStore.addLeg(leg);
    testStore.printLegs();   

    testStore.addHead(head);
    testStore.printHeads();   

    testStore.addBattery(battery);
    testStore.printBatteries();   

    testStore.addTorso(torso);
    testStore.printTorsos();   

    //robomodel testing
    RoboModel robomodel;
    robomodel.setTorso(torso);
    robomodel.setLeg(leg);
    robomodel.setHead(head);
    robomodel.addBattery(battery);
    robomodel.addArm(arm);
    robomodel.setName("name lol");
    robomodel.setDescription("descript this");
    robomodel.setPrice(45);  

    cout << "\nrobomodel\n";
    cout << "torso:\n";
    cout << "SN: " << robomodel.getTorso().getSN() << "\n";
    cout << "Weight: " << robomodel.getTorso().getWeight() << "\n";
    cout << "Description: " << robomodel.getTorso().getDescription() << "\n";
    cout << "Cost: " << robomodel.getTorso().getCost() << "\n";
    cout << "batteryspace: " << robomodel.getTorso().getBSpace() << "\n";
    cout << "draw: " << robomodel.getTorso().getDraw() << "\n";
    cout << "name: " << robomodel.getTorso().getName() << "\n";

    cout << "\nleg:\n";
    cout << "SN: " << robomodel.getLeg().getSN() << "\n";
    cout << "Weight: " << robomodel.getLeg().getWeight() << "\n";
    cout << "Description: " << robomodel.getLeg().getDescription() << "\n";
    cout << "Cost: " << robomodel.getLeg().getCost() << "\n";
    cout << "passivedraw: " << robomodel.getLeg().getpassiveDraw() << "\n";
    cout << "activedraw: " << robomodel.getLeg().getactiveDraw() << "\n";
    cout << "name: " << robomodel.getLeg().getName() << "\n";
    cout << "speed: " << robomodel.getLeg().getSpeed() << "\n";

    cout << "\nhead:\n";
    cout << "SN: " << robomodel.getHead().getSN() << "\n";
    cout << "Weight: " << robomodel.getHead().getWeight() << "\n";
    cout << "Description: " << robomodel.getHead().getDescription() << "\n";
    cout << "Cost: " << robomodel.getHead().getCost() << "\n";
    cout << "draw: " << robomodel.getHead().getDraw() << "\n";
    cout << "name: " << robomodel.getHead().getName() << "\n";
    cout << "laser: " << robomodel.getHead().getLaser() << "\n";

for(int i = 0; i < robomodel.getArmCount(); i ++){
    cout << "\narm:\n";
    cout << "SN: " << robomodel.getArm(i).getSN() << "\n";
    cout << "Weight: " << robomodel.getArm(i).getWeight() << "\n";
    cout << "Description: " << robomodel.getArm(i).getDescription() << "\n";
    cout << "Cost: " << robomodel.getArm(i).getCost() << "\n";
    cout << "passivedraw: " << robomodel.getArm(i).getpassiveDraw() << "\n";
    cout << "activedraw: " << robomodel.getArm(i).getactiveDraw() << "\n";
    cout << "name: " << robomodel.getArm(i).getName() << "\n";
    cout << "laser: " << robomodel.getArm(i).getLaser() << "\n";
}

for(int i = 0; i < robomodel.getBatteryCount(); i ++){
    cout << "\nbattery:\n";
    cout << "SN: " << robomodel.getBattery(i).getSN() << "\n";
    cout << "Weight: " << robomodel.getBattery(i).getWeight() << "\n";
    cout << "Description: " << robomodel.getBattery(i).getDescription() << "\n";
    cout << "Cost: " << robomodel.getBattery(i).getCost() << "\n";
    cout << "name: " << robomodel.getBattery(i).getName() << "\n";
    cout << "charge: " << robomodel.getBattery(i).getCharge() << "\n";
}

    testStore.addRoboModel(robomodel); 
    testStore.printCatalogue();    
    cout << "\nThe cost of this model is " << testStore.getRoboModel(0).getCost() << "\n";

    Database testBase;
    Customer customer("Fred Williams", 1234, "4705 roady road");
    testBase.addCustomer(customer);
    testBase.printCustomers();


    
 };
