// "Copyright [2018] Sadiq"
#include <gtest/gtest.h>
#include <common/3Dpoint.hpp>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name
TEST(first_coordinates_values, second_coordinate_values) {
    Geometry coordinates(20.0, 45.5, 90.0);
    ASSERT_FLOAT_EQ(coordinates.x, 20.0);
    ASSERT_FLOAT_EQ(coordinates.y, 45.5);
    ASSERT_FLOAT_EQ(coordinates.z, 90.0);
}
