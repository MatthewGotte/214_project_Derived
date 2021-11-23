#ifndef DERIVED_ROCKETSTATE_H
#define DERIVED_ROCKETSTATE_H

class Rocket;

class RocketState 
{
    private:

    public:

        /**
         * @brief Handle Change for the Rocket State 
         * @author Derived
         * @param r 
         */
        virtual void handleChange(Rocket* r)=0;

        /**
         * @brief Construct a new Rocket State object
         * @author Derived
         */
        RocketState();

        /**
         * @brief Destroy the Rocket State object
         * @author Derived
         */
        virtual ~RocketState();

};

#endif //DERIVED_ROCKETSTATE_H
