
#ifndef __FalconHeavy_h__
#define __FalconHeavy_h__

#include "Rocket.h"

class FalconHeavy: public Rocket {
public:
    void nextstage();
    
    FalconHeavy(Payload * payload);
    ~FalconHeavy();
};

#endif
