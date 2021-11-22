#include "CrewDragon.h"
#include "SpaceCraft.h"
#include "Human.h"
#include "HumanIterator.h"
#include "Cargo.h"
#include "CargoIterator.h"
#include <vector>
#include "Colours.h"
/**
 * @brief Construct a new Crew Dragon:: Crew Dragon object
 * @author Derived 
 * @param c 
 * @param h 
 */
CrewDragon::CrewDragon(CargoCollection * c, HumanCollection * h) : SpaceCraft(c) {
    this->h = h;
    this->c = c;
}
/**
 * @brief Destroy the Crew Dragon:: Crew Dragon object
 * @author Derived 
 */
CrewDragon::~CrewDragon() {
    // delete this->h;
    // delete this->c;
}
/**
 * @brief iterate thought the humans and cargo on the spacecraft 
 * @author Derived 
 */
void CrewDragon::printSpaceCraft() {
    //extend the functionality for printing with the human collection
    string space = "        ";
    string space2 = "    "; 
    cout << "-----------------Manifest------------------" << endl;
    cout << "---------------Falcon Heavy----------------" << endl;
  
    HumanIterator* it  = h->createHumanIterator();
    Human * human = it->first();

    cout << "----------Humans-----------" << endl;
    cout << Colours::purple("Name\tWeight(kg)\tRole") << endl;
    while (it->hasNext()) {
        cout << human->getName() << "\t" << space2 << human->getWeight() << "\t" << space << human->getRole() << endl;
        human = it->next();
    }
    cout << human->getName() << "\t" << space2 << human->getWeight() << "\t" << space << human->getRole() << endl;

    
    cout << "----------Cargo-----------" << endl;
    cout << Colours::purple("Name\tWeight(kg)\tDescription") << endl;

    CargoIterator* it2 = c->createCargoIterator();
    Cargo * cargo = it2->first();
    while (it2->hasNext()) {
        
        cout << cargo->getName() << "\t"<< space2 << cargo->getWeight() << "\t" << space << left << cargo->getDescription() << endl;
        cargo = it2->next();
    }
    cout << cargo->getName() << "\t" << space2 << cargo->getWeight() << "\t" << space << left << cargo->getDescription() << endl;

    cout << "-------------------------------------------" << endl;

    delete it;
    delete it2;
}