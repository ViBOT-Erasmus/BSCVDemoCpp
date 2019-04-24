// "Copyright 2019  Cedric Lemaitre"

#include <vector>
#include <algorithm>

#include <gtest/gtest.h>

#include "../../../common/functor.hpp"
// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name
TEST(test_construction_class, test_construction_class) {
  std::vector<int> v = { 1, 2, 3, 4, 5 };
  int val = 10;
  demobscv::functor::A(1)(val);
  // GTEST_ASSERT_EQ(my_a.get_res_pop(), 11);
}

