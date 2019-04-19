// "Copyright [2018] Cedric Lemaitre"
#include <gtest/gtest.h>

#include <cmath>

#include <common/smartphone.hpp>
// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name
TEST(SmartPhoneBuild, DefaultVal) {
    Smartphone a;
    GTEST_ASSERT_EQ(a.get_value(), 0);
    GTEST_ASSERT_EQ(a.get_year(), 0);
    GTEST_ASSERT_EQ(a.get_os(), "");
}

TEST(SmartPhoneBuild, TestSetValue) {
    Smartphone a;
    a.set_value(10);
    GTEST_ASSERT_EQ(a.get_value(), 10);
}

TEST(SmartPhoneBuild, TestGetSetOS) {
    Smartphone a;
    a.set_os("iOS");
    GTEST_ASSERT_EQ(a.get_os(), "iOS");
}

TEST(SmartPhoneBuild, TestGetSetYear) {
    Smartphone a;
    a.set_year(2000);
    GTEST_ASSERT_EQ(a.get_year(), 2000);
}
