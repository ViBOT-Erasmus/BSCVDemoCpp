// Copyright 2019 Cedric Lemaitre

#include "polymorphism.hpp"

namespace demobscv {
namespace polymorph {

Vehicule::Vehicule(int p) {
  price_ = p;
}

void Vehicule::display() const {
  std::cout << "Ceci est un véhicule";
}

void Car::display() const {
  std::cout << "This is a car" << std::endl;
}

int Car::nb_wheels() const {
  return 4;
}

Car::Car(int p, int nb_d) : Vehicule(p) {
  num_door_ = nb_d;
}

void Moto::display() const {
  std::cout << "This is a moto" << std::endl;
}

int Moto::nb_wheels() const {
  return 2;
}

Moto::Moto(int p, int max_s) : Vehicule(p) {
  max_speed_ = max_s;
}

void introduice(const Vehicule  & v) {
  v.display();
}
}  //  namespace polymorph
}  //  namespace demobscv
