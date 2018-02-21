// Include our own code
#include <common/complex.hpp>
#include <cmath>
// Include the gtest library
#include <gtest/gtest.h>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name 
// * The test name
TEST(ComplexBuild, DefaultVal) {
    float x = 2;
	float y = 2;
	complex a;
	complex b(x,y);
    GTEST_ASSERT_EQ(a.get_real(), 0);
    ASSERT_FLOAT_EQ(b.get_mod(), std::sqrt(8));

	b.clear_real();
    ASSERT_FLOAT_EQ(0, 0);
}
