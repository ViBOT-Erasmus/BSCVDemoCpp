// Copyright 2019 Cedric Lemaitre

#ifndef SRC_COMMON_POLYMORPHISM_HPP_
#define SRC_COMMON_POLYMORPHISM_HPP_


#include <iostream>

namespace demobscv {
namespace polymorph {
class Vehicule {
 public:
    void display() const;
 protected:
    int price_;
};

class  Car : public Vehicule {
 public:
    void display() const;
 private:
    int num_door_;
};

class  Moto : public Vehicule {
 public:
    void display() const;
 private:
    int max_speed_;
};

}  //  namespace polymorph
}  //  namespace demobscv


#endif  //  SRC_COMMON_POLYMORPHISM_HPP_

