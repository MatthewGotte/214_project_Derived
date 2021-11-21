#include "CrewDragon.h"
#include "SpaceCraft.h"
#include "Human.h"
#include "HumanIterator.h"
#include "Cargo.h"
#include "CargoIterator.h"
#include <vector>
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

}
/**
 * @brief iterate thought the humans and cargo on the spacecraft 
 * @author Derived 
 */
void CrewDragon::printSpaceCraft() {
    //extend the functionality for printing with the human collection
    
    
    HumanIterator* it  = h->createHumanIterator();
    Human * human = it->first();
    while (it->hasNext()) {
        cout << "Hi I am " << human->getName() << " glad to be on board Falcon9" << endl;
        human = it->next();
    }
    cout << "Hi I am " << human->getName() << " glad to be on board Falcon9" << endl;


    CargoIterator* it2 = c->createCargoIterator();
    Cargo * cargo = it2->first();
    while (it2->hasNext()) {
        cout << "We have " << cargo->getName() << " on board the Falcon9" << endl;
        cargo = it2->next();
    }
    cout << "We have " << cargo->getName() << " on board the Falcon9" << endl;

}

