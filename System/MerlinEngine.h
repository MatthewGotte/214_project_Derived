#ifndef __MerlinEngine_h__
#define __MerlinEngine_h__

#include <iostream>
#include "Engine.h"

class MerlinEngine : public Engine
{
    private:

        string name;

    public:

        /**
         * @brief Construct a new Merlin Engine object
         * @author Derived
         * @param name 
         */
        MerlinEngine(string name);

        /**
         * @brief Clone the Merlin Engine object
         * @author Derived
         * @return MerlinEngine* 
         */
        MerlinEngine * clone();

        /**
         * @brief Destroy the Merlin Engine object
         * @author Derived
         */
        ~MerlinEngine();
};

#endif
