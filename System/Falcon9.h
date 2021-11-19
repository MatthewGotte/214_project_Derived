#ifndef __Falcon9_h__
#define __Falcon9_h__

#include "Rocket.h"

class Falcon9: public Rocket {
public:
        void nextstage();

        Falcon9(Payload*);
        
        ~Falcon9();
};

#endif
