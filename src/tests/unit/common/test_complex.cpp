// "Copyright [2018] Cedric Lemaitre"
#include <gtest/gtest.h>

#include <cmath>

#include <common/complex.hpp>
// Include the gtest library

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name

TEST(ComplexBuild, DefaultVal) {
    float x = 2;
    float y = 2;
    complex a;
    complex b(x, y);
    GTEST_ASSERT_EQ(a.get_real(), 0);
    ASSERT_FLOAT_EQ(b.get_mod(), std::sqrt(8));
    ASSERT_FLOAT_EQ(b.get_arg(), std::atan(1));
    b.set_real(-2.0f);
    ASSERT_FLOAT_EQ(b.get_arg(), std::atan(-1)+PI);
    b.clear_real();
    ASSERT_FLOAT_EQ(0, 0);
}

TEST(ComplexMod, DefaultTest) {
    float x = 2;
    float y = 2;
    complex b(x, y);
    ASSERT_FLOAT_EQ(b.get_mod(), std::sqrt(8));
}
TEST(ComplexArg, AnglePos) {
    float x = 2;
    float y = 2;
    complex b(x, y);
    ASSERT_FLOAT_EQ(b.get_arg(), std::atan(1));
}
TEST(ComplexArg, AngleNeg) {
    float x = -2;
    float y = 2;
    complex b(x, y);
    ASSERT_FLOAT_EQ(b.get_arg(), std::atan(-1)+PI);
}
TEST(ComplexClear, Default) {
    float x = -2;
    float y = 2;
    complex b(x, y);
    b.clear_real();
    ASSERT_FLOAT_EQ(b.get_real(), 0.0);
}
/// Test overloading operator+
TEST(ComplexAddOperator, Default) {
    float x = 2;
    float y = 2;
    complex b(x, y);
    complex a(x, y);
    complex res;
    res = a + b;

    ASSERT_FLOAT_EQ(res.get_real(), 4);
    ASSERT_FLOAT_EQ(res.get_imag(), 4);
}  //  Test ComplexAddOperator

/// Test overloading opertor-
TEST(ComplexSubOperator, Default) {
    float x = 2;
    float y = 2;
    complex b(x, y);
    complex a(x, y);
    complex res;
    res = a - b;

    ASSERT_FLOAT_EQ(res.get_real(), 0);
    ASSERT_FLOAT_EQ(res.get_imag(), 0);
}  //  ComplexSubOperator

/// Test overloading opertor*
TEST(ComplexMulOperator, Default) {
    float ar = -2.0;
    float ai = 5.0;
    float br = 1.0;
    float bi = -3.0;

    complex b(br, bi);
    complex a(ar, ai);
    complex res;
    res = a * b;

    ASSERT_FLOAT_EQ(res.get_real(), 13);
    ASSERT_FLOAT_EQ(res.get_imag(), 11);
}  //  ComplexMulOperator

/// Test overloading opertor/
TEST(ComplexDivOperator, Default) {
    float ar = 6.0;
    float ai = 3.0;
    float br = 7.0;
    float bi = -5.0;

    complex b(br, bi);
    complex a(ar, ai);
    complex res;
    res = a / b;

    ASSERT_FLOAT_EQ(res.get_real(), float(27)/float(74));
    ASSERT_FLOAT_EQ(res.get_imag(), float(51)/float(74));
}  //  ComplexDivOperator

/// Test overloading opertor* for floating value
TEST(ComplexOstreamOperator, FloatingVal) {
    float ar = -2.1;
    float ai = 5.1;

    std::stringstream buf;
    std::string str_buf;
    complex a(ar, ai);

    buf << a;
    str_buf = buf.str();
    std::string str_a = "-2.1+i5.1";

    ASSERT_STREQ(str_buf.c_str(), str_a.c_str());
}  //  ComplexMulOperator for floating value

/// Test overloading opertor* for int value
TEST(ComplexOstreamOperator, IntegerVal) {
    float ar = -2.0;
    float ai = 5.0;

    std::stringstream buf;
    std::string str_buf;
    complex a(ar, ai);

    buf << a;
    str_buf = buf.str();
    std::string str_a = "-2+i5";

    ASSERT_STREQ(str_buf.c_str(), str_a.c_str());
}  //  ComplexMulOperator for floating value

/// Test overloading opertor* for int value
TEST(ComplexOstreamOperator, NegativeImag) {
    float ar = -2.0;
    float ai = -5.0;

    std::stringstream buf;
    std::string str_buf;
    complex a(ar, ai);

    buf << a;
    str_buf = buf.str();
    std::string str_a = "-2-i5";

    ASSERT_STREQ(str_buf.c_str(), str_a.c_str());
}  //  ComplexMulOperator for floating value
