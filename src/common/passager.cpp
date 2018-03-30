// Copyright 2018 Cedric Lemaitre


#include "passager.hpp"



Passager::Passager(bool survived,
        int pclass,
        std::string name,
        bool sex,
        int age,
        int slbsp,
        int parch,
        std::string ticket,
        double fare,
        std::string cabin,
        std::string embarked) {
    this->survived = survived;
    this->pclass = pclass;
    this->name = name;
    this->sex = sex;
    this->age = age;
    this->slbsp = slbsp;
    this->parch = parch;
    this->ticket = ticket;
    this->fare = fare;
    this->cabin = cabin;
    this->embarked = embarked;
}
