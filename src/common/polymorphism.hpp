// Copyright 2019 Cedric Lemaitre

#ifndef SRC_COMMON_POLYMORPHISM_HPP_
#define SRC_COMMON_POLYMORPHISM_HPP_


#include <iostream>

namespace demobscv {
namespace polymorph {
class Vehicule {
 public:
  Vehicule(int);
  //  Vehicule();
  virtual void display() const;
  virtual int nb_wheels() const = 0;
 protected:
    int price_;
};

class  Car : public Vehicule {
 public:
  Car(int, int);
  void display() const;
  int nb_wheels() const;
 private:
    int num_door_;
};

class  Moto : public Vehicule {
 public:
  Moto(int, int);
  void display() const;
  int nb_wheels() const;
 private:
  int max_speed_;
};


void introduice(const Vehicule &);
}  //  namespace polymorph
}  //  namespace demobscv


#endif  //  SRC_COMMON_POLYMORPHISM_HPP_

