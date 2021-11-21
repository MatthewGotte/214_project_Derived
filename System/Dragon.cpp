#include "Dragon.h"
#include "Cargo.h"
#include "CargoIterator.h"
#include "Colours.h"
/**
 * @brief Construct a new Dragon:: Dragon object
 * @author Derived 
 * @param c 
 */
Dragon::Dragon(CargoCollection * c) : SpaceCraft(c) {
    this->c = c;
}
/**
 * @brief Destroy the Dragon:: Dragon object
 * @author Derived 
 */
Dragon::~Dragon() {

}

void Dragon::printSpaceCraft(){
    string space = "        ";
    string space2 = "    "; 
    cout << "-----------------Manifest------------------" << endl;
    cout << "-----------------Falcon 9------------------" << endl;
    cout << "----------Cargo-----------" << endl;
    cout << Colours::purple("Name\tWeight(kg)\tDescription") << endl;

    CargoIterator* it2 = c->createCargoIterator();
    Cargo * cargo = it2->first();
    while (it2->hasNext()) {
        
        cout << cargo->getName() << "\t" << space2 << cargo->getWeight() << "\t" << space << left << cargo->getDescription() << endl;
        cargo = it2->next();
    }
    cout << cargo->getName() << "\t" << space2 << cargo->getWeight() << "\t" << space << left << cargo->getDescription() << endl;

    cout << "-------------------------------------------" << endl;
}