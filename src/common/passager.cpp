// Copyright 2018 Cedric Lemaitre


#include "passager.hpp"



Passager::Passager(bool survived,
    int pclass,
    bool sex,
    int age,
    int slbsp,
    int parch,
    int fare,
    std::string embarked,
    std::string type_class,
    std::string who,
    bool adult_male,
    std::string deck,
    std::string embark_town,
    bool alive,
    bool alone) {
    this->survived = survived;
    this->pclass = pclass;
    this->sex = sex;
    this->age = age;
    this->slbsp = slbsp;
    this->parch = parch;
    this->fare = fare;
    this->embarked = embarked;
    this->type_class = type_class;
    this->who = who;
    this->adult_male = adult_male;
    this->deck = deck;
    this->embark_town = embark_town;
    this->alive = alive;
    this->alone = alone;
}
