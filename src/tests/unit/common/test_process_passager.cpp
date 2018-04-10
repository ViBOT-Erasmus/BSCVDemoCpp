// Copyright 2018 Cdric Lemaitre

#include <gtest/gtest.h>

#include <string>
#include <common/passager_reader.hpp>
#include <common/process_passager.hpp>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name
TEST(TestProcessPassager, Testp_mean_age) {
    std::string f_name = "../data/titanic.csv";
    PassagerReader my_passager_reader(f_name);
    ProcessPassager my_process_passager(my_passager_reader.liste_passager);
    double val_mean_from_xls = 29.6991176470588;
    ASSERT_NEAR(my_process_passager.p_mean_age(), val_mean_from_xls, 0.2);
}
TEST(TestProcessPassager, Testp_survived) {
    std::string f_name = "../data/titanic.csv";
    PassagerReader my_passager_reader(f_name);
    ProcessPassager my_process_passager(my_passager_reader.liste_passager);
    int nb_survived_xls = 342;
    double per_sur = static_cast<double>(nb_survived_xls) /
        static_cast<double>(891);
    StatSurvived survived = my_process_passager.p_survived();
    ASSERT_EQ(survived.nb_survived, nb_survived_xls);
    ASSERT_NEAR(survived.percentage_survived, per_sur, 0.001);
}
