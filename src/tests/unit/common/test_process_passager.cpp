// Copyright 2018 Cdric Lemaitre

#include <gtest/gtest.h>

#include <string>
#include <common/passager_reader.hpp>
#include <common/process_passager.hpp>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name
TEST(TestProcessPassager, Testp_mean) {
    std::string f_name = "../data/titanic.csv";
    PassagerReader my_passager_reader(f_name);
    ProcessPassager my_process_passager(my_passager_reader.liste_passager);
    double val_mean_from_xls = 29.6991176470588;
    ASSERT_NEAR(my_process_passager.p_mean_age(), val_mean_from_xls, 0.2);
}
