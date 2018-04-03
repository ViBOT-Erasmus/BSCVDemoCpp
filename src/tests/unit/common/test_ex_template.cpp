// "Copyright [2018] Cedric Lemaitre"
#include <gtest/gtest.h>

#include <cmath>

#include <common/ex_template.hpp>
#include <common/complex.hpp>
// Include the gtest library

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name

TEST(Add_T, test_double) {
    double a = 2.13;
    double b = 2.17;
    double res = Add_T(a, b);
    ASSERT_FLOAT_EQ(res, a+b);
}

TEST(Add_T, test_complex) {
    float ar = 2.13;
    float ai = 3.17;
    float br = 2.17;
    float bi = 2.12;
    complex a(ar, ai);
    complex b(br, bi);
    complex res = Add_T(a, b);
    ASSERT_FLOAT_EQ(res.get_real(), ar+br);
    ASSERT_FLOAT_EQ(res.get_imag(), ai+bi);
}
