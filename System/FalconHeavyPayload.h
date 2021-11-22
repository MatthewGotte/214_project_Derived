#ifndef DERIVED_FALCONHEAVYPAYLOAD_H
#define DERIVED_FALCONHEAVYPAYLOAD_H

#include "Payload.h"
#include "CrewDragon.h"
#include "SpaceCraft.h"
#include "VacuumMerlinEngine.h"
#include "Falcon9Core.h"

class FalconHeavyPayload : public Payload 
{
    public:

        /**
         * @brief Construct a new Falcon Heavy Payload object
         * @author Derived
         * @param s 
         * @param vme 
         */
        FalconHeavyPayload(SpaceCraft * s, VacuumMerlinEngine * vme);

        /**
         * @brief Destroy the Falcon Heavy Payload object
         * @author Derived
         */
        ~FalconHeavyPayload();

        /**
         * @brief Launch the Falcon Heavy Payload object
         * @author Derived
         */
        void launch();

};

#endif //DERIVED_FALCONHEAVYPAYLOAD_H   
