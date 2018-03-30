// Copyright 2018 Cedric Lemaitre

#ifndef SRC_COMMON_PASSAGER_HPP_
#define SRC_COMMON_PASSAGER_HPP_

#include <string>

/// class Passagerwhich data for a passager
// only a constructor and data (private)
class Passager {
 public:
     /// Constructor with in parameter all data which should affected to the
     // menber variables
     Passager(
             bool,
             int,
             std::string,
             bool,
             int,
             int,
             int,
             std::string,
             double,
             std::string,
             std::string);

 private:
    bool survived;  ///< survived or not
    int pclass;  ///< range class
    std::string name;  ///< full name and title CSV give unconsistent things
    bool sex;  ///< male true, female 0
    int age;
    int slbsp;  ///< see owner for wahit for
    int parch;  ///< see owner for wahit for
    std::string ticket;  ///< id for ticket heterogenous value
    double fare;
    std::string cabin;  ///< number cabin
    std::string embarked;
};
#endif  //  SRC_COMMON_PASSAGER_HPP_

