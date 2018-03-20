

// Include our own code
#include <common/watch.hpp>
#include <string>
// Include the gtest library
#include <gtest/gtest.h>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name 
// * The test name
TEST(watch_brand, serial_number) {

    	Watch any_watch("Rolex", 52177);
    	std::string name;
    	name = "Rolex";
	ASSERT_STREQ(any_watch.brand.c_str(), name.c_str());
	GTEST_ASSERT_EQ(any_watch.serial_number, 52177);

}
