// Include our own code
#include <common/complex.hpp>

// Include the gtest library
#include <gtest/gtest.h>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name 
// * The test name
TEST(ComplexBuild, DefaultVal) {
    complex a;
    GTEST_ASSERT_EQ(a.get_real(), 0);
}
