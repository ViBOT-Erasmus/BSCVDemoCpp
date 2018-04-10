// Copyright 2018 Cdric Lemaitre

#include <gtest/gtest.h>

#include <string>
#include <common/passager_reader.hpp>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name
TEST(TestPassagerReader, TestConstructorOneParamFileName) {
    //  first line in csv file
    //  0,3,male,22.0,1,0,7.25,S,Third,man,True,,Southampton,no,False
    std::string f_name = "../data/titanic.csv";
    PassagerReader my_passager_reader(f_name);
    ASSERT_FALSE(my_passager_reader.liste_passager[0].survived);
    ASSERT_EQ(my_passager_reader.liste_passager[0].pclass, 3);
    ASSERT_TRUE(my_passager_reader.liste_passager[0].sex);
    ASSERT_EQ(my_passager_reader.liste_passager[0].age, 22);
    std::string chaine_deck = "";
    ASSERT_STREQ(
            my_passager_reader.liste_passager[0].deck.c_str(),
            chaine_deck.c_str());
    ASSERT_FALSE(my_passager_reader.liste_passager[0].alone);
    // line number 4
    // 1,1,female,35.0,1,0,53.1,S,First,woman,False,C,Southampton,yes,False
    ASSERT_TRUE(my_passager_reader.liste_passager[3].survived);
    ASSERT_EQ(my_passager_reader.liste_passager[3].pclass, 1);
    ASSERT_FALSE(my_passager_reader.liste_passager[3].sex);
    ASSERT_EQ(my_passager_reader.liste_passager[3].age, 35);
    chaine_deck = "C";
    ASSERT_STREQ(
            my_passager_reader.liste_passager[3].deck.c_str(),
            chaine_deck.c_str());
    ASSERT_FALSE(my_passager_reader.liste_passager[3].alone);
    //  line number 6
    //  0,3,male,,0,0,8.4583,Q,Third,man,True,,Queenstown,no,True
    ASSERT_FALSE(my_passager_reader.liste_passager[5].survived);
    ASSERT_EQ(my_passager_reader.liste_passager[5].pclass, 3);
    ASSERT_TRUE(my_passager_reader.liste_passager[5].sex);
    ASSERT_EQ(my_passager_reader.liste_passager[5].age, -1);
    chaine_deck = "";
    ASSERT_STREQ(
            my_passager_reader.liste_passager[5].deck.c_str(),
            chaine_deck.c_str());
    ASSERT_TRUE(my_passager_reader.liste_passager[5].alone);
}
