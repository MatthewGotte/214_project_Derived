#ifndef __Falcon9_h__
#define __Falcon9_h__

#include "Rocket.h"

class Falcon9 : public Rocket 
{

        public:

                /**
                 * @brief Change to the Next Stage of the Falcon 9 object
                 * @author Derived
                 */
                void nextstage();

                /**
                 * @brief Construct a new Falcon 9 object
                 * @author Derived
                 */
                Falcon9(Payload*);
                
                /**
                 * @brief Destroy the Falcon 9 object
                 * @author Derived
                 */
                ~Falcon9();

                /**
                 * @brief Get the Name object
                 * 
                 * @return string 
                 */
                string getName();

};

#endif
