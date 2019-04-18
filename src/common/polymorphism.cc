// Copyright 2019 Cedric Lemaitre

#include "polymorphism.hpp"

namespace demobscv {
namespace polymorph {
void Vehicule::display() const {
  std::cout << "This is a Vehicule" << std::endl;
}

void Car::display() const {
  std::cout << "This is a car" << std::endl;
}

void Moto::display() const {
  std::cout << "This is a moto" << std::endl;
}
}  //  namespace polymorph
}  //  namespace demobscv
