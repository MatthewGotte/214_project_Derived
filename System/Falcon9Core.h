#ifndef __Falcon9Core_h__
#define __Falcon9Core_h__

#include <vector>
#include <iostream>
#include "Core.h"
#include "MerlinEngine.h"

using namespace std;

class Falcon9Core: public Core 
{
    private:

        string name;
        vector< MerlinEngine* > coreEngines;

    public:

        /**
         * @brief Construct a new Falcon 9 Core object
         * @author Derived
         * @param name 
         */
        Falcon9Core(string name);

        /**
         * @brief Destroy the Falcon 9 Core object
         * @author Derived
         */
        ~Falcon9Core();

        /**
         * @brief Get the Name of the Falcon 9 Core object
         * @author Derived
         * @return string 
         */
        string getName();

};

#endif
 