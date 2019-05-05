// "Copyright 2019  Cedric Lemaitre"
#include <gtest/gtest.h>

#include "../../../common/polymorphism.hpp"
// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name
TEST(DefaultBehav_polymorph, nb_wheels_from_abstract_class) {

demobscv::polymorph::Car c(1000, 4);
demobscv::polymorph::Moto m(1000, 250);

// c.display();
// m.display();

// introduice(c);
// introduice(m);

demobscv::polymorph::Vehicule * ptr_v(0);
 ptr_v = & c;
 
 int val_w = ptr_v->nb_wheels();




  GTEST_ASSERT_EQ(val_w, 4);
  // GTEST_ASSERT_EQ(a.get_year(), 0);
  // GTEST_ASSERT_EQ(a.get_os(), "");
}

