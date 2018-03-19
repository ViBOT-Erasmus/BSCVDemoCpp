

// Include our own code
#include <common/point.hpp>
#include <cmath>
// Include the gtest library
#include <gtest/gtest.h>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name 
// * The test name
TEST(SmartPointBuild, UserPreciseValue) {
    Point a(12.0, 0.0);

	ASSERT_FLOAT_EQ(a.x, 12.0);
	ASSERT_FLOAT_EQ(a.y, 0.0);
}
