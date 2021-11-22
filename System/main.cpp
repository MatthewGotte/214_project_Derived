#include <iostream>

#include "AllHeaders.h"
#include "test.cpp"
#include <gtest/gtest.h>

using namespace std;

void Muzi();
void Taku();
void Matthew();
void Rourke();
void Hloni();

int main(int argc , char ** argv ) {
    testing::InitGoogleTest(&argc , argv);
    // cout<<
    //testing:
    // Muzi();
    // Taku();
    Matthew();
    Rourke();
    Hloni();

    //actual main:

    return RUN_ALL_TESTS();
    return 0;
}

void Muzi() {
    
}

void Taku() {
    cout << Colours::green("Takudzwanashe:")<< endl;
    
    //collection of humans [optional]:
    Human * h1 = new Human("human1", 50, "Leader");
    Human * h2 = new Human("human2", 60, "Pilot");
    Human * h3 = new Human("human3", 70, "Engineer");
    Human * h4 = new Human("human4", 80, "Scientist");
    Human * h5 = new Human("human5", 90, "Doctor");
    HumanCollection * voh = new VectorOfHumans();
    // voh->addHuman(h1);
    // voh->addHuman(h2);
    // voh->addHuman(h3);
    // voh->addHuman(h4);
    // voh->addHuman(h5);

    //collection of cargo:
    Cargo * c1 = new Cargo("cargo1", 20, "car");
    Cargo * c2 = new Cargo("cargo2", 30, "desc");
    Cargo * c3 = new Cargo("cargo3", 40, "desc");
    Cargo * c4 = new Cargo("cargo4", 50, "desc");
    Cargo * c5 = new Cargo("cargo5", 60, "desc");
    CargoCollection * voc = new VectorOfCargo();
    voc->addCargo(c1);
    voc->addCargo(c2);
    voc->addCargo(c3);
    voc->addCargo(c4);
    voc->addCargo(c5);

    //call config manager:
    ConfigurationManager * configmanager = new ConfigurationManager(voc, voh);

    Rocket * output = configmanager->BuildAndDecorateRocket();


    //cout <<"calling the print function"<<endl;
    output->print();
    cout<<"changing the state of the rocket"<<endl;
    output->nextstage();
    cout<<"changing the state of the rocket again"<<endl;
    output->nextstage();
    cout<<"trying the change state one more time"<<endl;
    output->nextstage();
    //deleting memory.
    delete h1;
    delete h2;
    delete h3;
    delete h4;
    delete h5;
    delete c1;
    delete c2;
    delete c3;
    delete c4;
    delete c5;
    delete configmanager;
    delete output;
}

void Matthew() {
   cout << Colours::green("Takudzwanashe:")<< endl;
    
    //collection of humans [optional]:
    Human * h1 = new Human("Rourke", 50, "Scientist");
    Human * h2 = new Human("Gotte", 80, "Pilot");
    Human * h3 = new Human("Muzi", 73, "Engineer");
    Human * h4 = new Human("Taku", 80, "Leader");
    Human * h5 = new Human("Hloni", 90, "Doctor");
    HumanCollection * voh = new VectorOfHumans();
    voh->addHuman(h1);
    voh->addHuman(h2);
    voh->addHuman(h3);
    voh->addHuman(h4);
    voh->addHuman(h5);

    //collection of cargo:
    Cargo * c1 = new Cargo("carg1", 20, "car");
    Cargo * c2 = new Cargo("cargo2", 30, "descdafad");
    Cargo * c3 = new Cargo("cargo3", 40, "desc");
    Cargo * c4 = new Cargo("cargo4", 50, "desc");
    Cargo * c5 = new Cargo("cargo5", 60, "desc");
    CargoCollection * voc = new VectorOfCargo();
    voc->addCargo(c1);
    voc->addCargo(c2);
    voc->addCargo(c3);
    voc->addCargo(c4);
    voc->addCargo(c5);

    //call config manager:
    ConfigurationManager * configmanager = new ConfigurationManager(voc, voh);

    Rocket * output = configmanager->BuildAndDecorateRocket();


    //cout <<"calling the print function"<<endl;
    output->print();
    cout<<"changing the state of the rocket"<<endl;
    output->nextstage();
    cout<<"changing the state of the rocket again"<<endl;
    output->nextstage();
    cout<<"trying the change state one more time"<<endl;
    output->nextstage();
    //deleting memory.
    delete h1;
    delete h2;
    delete h3;
    delete h4;
    delete h5;
    delete c1;
    delete c2;
    delete c3;
    delete c4;
    delete c5;
    delete configmanager;
    delete output;
}

void Rourke() {

    cout << Colours::purple("Rourke:") << endl;
    
    //collection of humans [optional]:
    Human * h1 = new Human("Rourke", 100.01, "Leader");
    Human * h2 = new Human("Rob", 99.99, "Pilot");
    HumanCollection * voh = new VectorOfHumans();
    voh->addHuman(h1);
    voh->addHuman(h2);

    //collection of cargo:
    Cargo * c1 = new Cargo("Pizza Box", 20, "Pizza");
    CargoCollection * voc = new VectorOfCargo();
    voc->addCargo(c1);

    //call config manager:
    ConfigurationManager * configmanager = new ConfigurationManager(voc, voh);

    Rocket * output = configmanager->BuildAndDecorateRocket();


    //cout <<"calling the print function"<<endl;
    output->print();
    cout << "changing the state of the rocket" << endl;
    output->nextstage();
    cout << "changing the state of the rocket again" << endl;
    output->nextstage();
    cout << "trying the change state one more time" << endl;
    output->nextstage();
    //deleting memory.
    delete h1;
    delete h2;
    delete c1;
    delete configmanager;
    delete output;
}

void Hloni() {

    //Testing Communication between StarLink Satellites and GroundMissionControl - Observer
    //sls1 - StarLinkSatellite 1
    //cmgc - ConcreteGroundMissionControl
    cout << endl; 
    
    cout << "Testing Communication" << endl;

    ConcreteGroundMissionControl* cgmc = new ConcreteGroundMissionControl();

    StarLinkSatellite* sls1 = new StarLinkSatellite(cgmc);
    sls1->print();
    cgmc->notify();

    cgmc->attach(sls1);
    cgmc->setConnection(true);
    cgmc->notify();

    sls1->print();

    cout << endl;

    

}
