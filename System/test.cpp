#include "AllHeaders.h"
#include <stdexcept>
#include <limits.h>
#include <gtest/gtest.h>
#include <iostream>

namespace{
    /**
     * @brief Construct a new TEST object Test if Human Weight is Postive
     * @author Derived 
     */
    TEST(IsNegativeHuman , TestPreconditionPositive){
          try {
            Human * human = new Human("Taku" , -30 , "Leader");
            FAIL();
        } catch (std::invalid_argument & err) {
            EXPECT_EQ(err.what(),std::string("weight must be greater than zero"));
        } catch(...) {
            FAIL();
        }
    }
    /**
     * @brief Construct a new TEST object Test if Cargo Weight is Positive
     * @author Derived 
     */
    TEST(IsNegativeCargo , TestPreconditionPositive){
          try {
            Cargo * cargo = new Cargo("Car" , -30 , "A very Heavy Car");
            FAIL();
        } catch (std::invalid_argument & err) {
            EXPECT_EQ(err.what(),std::string("weight must be greater than zero"));
        } catch(...) {
            FAIL();
        }
    }
     /**
     * @brief Construct a new TEST object Test if Vector Of Cargo is not Empty
     * @author Derived 
     */
    TEST(IsCargoEmpty , TestPreconditionCargoNotEmpty){
          try {
            HumanCollection * voh = new VectorOfHumans();
            CargoCollection * voc = new VectorOfCargo();
            ConfigurationManager * configmanager = new ConfigurationManager(voc, voh);
            FAIL();
        } catch (std::invalid_argument & err) {
            EXPECT_EQ(err.what(),std::string("Cargo Always has to Have something"));
        } catch(...) {
            FAIL();
        }
    }


        
}
