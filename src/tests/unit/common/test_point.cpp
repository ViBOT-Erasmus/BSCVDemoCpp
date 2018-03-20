// Copyright 2018 Cédric Lemaitre
#include <gtest/gtest.h>

#include <cmath>
#include <common/point.hpp>
// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name
TEST(SmartPointBuild, UserPreciseValue) {
    Point a(12.0, 0.0);
    ASSERT_FLOAT_EQ(a.x, 12.0);
    ASSERT_FLOAT_EQ(a.y, 0.0);
}
