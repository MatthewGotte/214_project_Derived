#include "AllHeaders.h"
#include <stdexcept>
#include <limits.h>
#include <gtest/gtest.h>
#include <iostream>

namespace{

    TEST(IsNegativeHuman , TestPreconditionPositive) {
          try {
            Human * human = new Human("Taku" , -30 , "Leader");
            FAIL();
        } catch (std::invalid_argument & err) {
            EXPECT_EQ(err.what(),std::string("weight must be greater than zero"));
        } catch(...) {
            FAIL();
        }
    }

    TEST(IsNegativeCargo , TestPreconditionPositive) {
          try {
            Cargo * cargo = new Cargo("Car" , -30 , "A very Heavy Car");
            FAIL();
        } catch (std::invalid_argument & err) {
            EXPECT_EQ(err.what(),std::string("weight must be greater than zero"));
        } catch(...) {
            FAIL();
        }
    }

    TEST(IsCargoEmpty , TestPreconditionCargoNotEmpty) {
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
