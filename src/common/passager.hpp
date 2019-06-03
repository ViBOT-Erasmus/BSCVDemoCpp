// Copyright 2018 Cedric Lemaitre

#ifndef SRC_COMMON_PASSAGER_HPP_
#define SRC_COMMON_PASSAGER_HPP_

#include <string>
#include <iostream>

/// class Passagerwhich data for a passager
// only a constructor and data (private)
class Passager {
 public:
     /// Constructor with in parameter all data which should affected to the
     // menber variables
     inline Passager(){};
     Passager(bool,
             int,
             bool,
             int,
             int,
             int,
             int,
             std::string,
             std::string,
             std::string,
             bool,
             std::string,
             std::string,
             bool,
             bool);
// private:
    bool survived;  ///< survived or not
    int pclass;  ///< range class
    bool sex;  ///< male true, female 0
    int age;
    int slbsp;  ///< see owner for wahit for
    int parch;  ///< see owner for wahit for
    int fare;
    std::string embarked;
    std::string type_class;
    std::string who;
    bool adult_male;
    std::string deck;
    std::string embark_town;
    bool alive;
    bool alone;
};
    inline std::ostream & operator<<(std::ostream & out, Passager my_passager){
      out << "Test" << std::endl;

      return out;    }
#endif  //  SRC_COMMON_PASSAGER_HPP_

