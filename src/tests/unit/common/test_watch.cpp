//  Copyright 2018 Sadiq
#include <gtest/gtest.h>

#include <string>
#include <common/watch.hpp>
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
