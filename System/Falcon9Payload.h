#ifndef DERIVED_FALCON9PAYLOAD_H
#define DERIVED_FALCON9PAYLOAD_H

#include <iostream>
#include <vector>
#include "Cargo.h"
#include "Payload.h"
#include "Falcon9Core.h"
#include "MerlinEngine.h"
#include "Dragon.h"

using namespace std;

class Falcon9Payload : public Payload 
{
    public:

        /**
         * @brief Construct a new Falcon 9 Payload object
         * @author Derived 
         * @param s 
         * @param vme 
         */
        Falcon9Payload(SpaceCraft * s, VacuumMerlinEngine * vme);

        /**
         * @brief Destroy the Falcon 9 Payload object
         * @author Derived 
         */
        ~Falcon9Payload();

        /**
         * @brief Launch the Falcon 9 Payload object
         * @author Derived 
         */
        void launch();
};

#endif //DERIVED_FALCON9PAYLOAD_H
