// Copyright 2018 Cédric Lemaitre
//
#include <gtest/gtest.h>
#include <cmath>
#include <common/phone.hpp>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case nam* The test name

TEST(phoneBuild, DefaultVal) {
    phone a;
    GTEST_ASSERT_EQ(a.get_value(), 0);
    GTEST_ASSERT_EQ(a.get_year(), 0);
}
