
// Include our own code
#include <common/phone.hpp>
#include <cmath>
// Include the gtest library
#include <gtest/gtest.h>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name 
// * The test name
TEST(phoneBuild, DefaultVal) {
    phone a;
	GTEST_ASSERT_EQ(a.get_value(), 0);
	GTEST_ASSERT_EQ(a.get_year(), 0);
}
