#include "Simulation.h"
#include "HumanFactory.h"
#include "CargoFactory.h"


const char* ordinal_suffix(int n)
{
    static const char suffixes [][3] = {"th", "st", "nd", "rd"};
    auto ord = n % 100;
    if (ord / 10 == 1){ 
        ord = 0;
    }
    ord = ord % 10;
    if (ord > 3) { 
        ord = 0; 
    }
    return suffixes[ord];
}
void Simulation::setup() {

    if(dogeToMoon != nullptr) {
        cout << Colours::yellow("The Rocket has already been setup") << endl;
        return;
    }
    int numHumans, numCargo;

    HumanFactory* humanFactory = new HumanFactory();
    CargoFactory* cargoFactory = new CargoFactory();

    HumanCollection * voh = new VectorOfHumans();
    CargoCollection * voc = new VectorOfCargo();
    
    cout << "How many Humans do you want: " ;
    cin >> numHumans;
    //input the names
    //cout << "Invaild Input "<< endl;
    for (int i=0; i < numHumans; i++) {
        string name;
        double weight;
        string role;

        cout << "What is the name of person " << i+1 << ": ";
        cin >> name;
        cout << "How much does " << name << " weigh: ";
        cin >> weight;
        cout << "What is " << name << "'s role: ";\
        cin >> role;
        //factory
        voh->addHuman(humanFactory->createHuman(name,weight,role));

    }
    cout << "How much Cargo do you want on the rocket: ";
    cin >> numCargo;
    //input the Cargo
    for(int i=0; i < numCargo; i++){
        string name;
        double weight;
        string description;

        cout<<"What is the "<<i+1;
        cout<<ordinal_suffix(i+1)<< " cargo: ";
        cin >> name;
        cout<<"How much does "<<name<<" weigh: ";
        cin >> weight;
        cout<<"What is "<<name<<"'s description: ";
        cin >> description;
        //factory

        voc->addCargo(cargoFactory->createCargo(name,weight,description));
    }
    //the builder used to build the rocket.
    ConfigurationManager * configmanager = new ConfigurationManager(voc, voh);
    dogeToMoon = configmanager->BuildAndDecorateRocket(); //we have the rocket now.
    delete humanFactory;
    delete cargoFactory;
    delete configmanager;


}


void Simulation::liftOff() {
    //  cout<<"taku is awesome"<<endl;

    //this code has to change.
    if(dogeToMoon == nullptr) {
        cout<<Colours::yellow("Warning: Rocket is not yet setup starting the setup wizard")<<endl;
        setup();
    }
    dogeToMoon->print();
    dogeToMoon->testRocket();
    dogeToMoon->launch();
    // dogeToMoon->nextstage();
    // dogeToMoon->nextstage();
    // dogeToMoon->nextstage();
}
void Simulation::staticFire(){
    if(dogeToMoon == nullptr) {
        cout<<Colours::yellow("Warning: Rocket is not yet setup, starting the setup wizard")<<endl;
        setup();
    }
    
}
void Simulation::testThatFails(){
    if(dogeToMoon == nullptr) {
        cout<<Colours::yellow("Warning: Rocket is not yet setup, starting the setup wizard")<<endl;
        setup();
    }
}

Simulation::Simulation(){

}

Simulation::~Simulation() {
    delete voh;
    delete voc;
    delete dogeToMoon;
}
