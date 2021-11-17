
#ifndef __Falcon9_h__
#define __Falcon9_h__

#include "Rocket.h"
#include "Satellite.h"
// class Rocket;
class Falcon9;

class Falcon9: public Rocket
{
        private:

                /**
                 * @brief 
                 * 
                 */
                Satellite* satellite;

        public:
                /**
                 * @brief 
                 * 
                 */
                void nextstage();

};

#endif
