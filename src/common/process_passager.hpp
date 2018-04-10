// Copyright 2018 Cdric Lemaitre
#ifndef SRC_COMMON_PROCESS_PASSAGER_HPP_
#define SRC_COMMON_PROCESS_PASSAGER_HPP_

#include <vector>
#include <map>
#include <string>
#include "passager_reader.hpp"
#include "passager.hpp"

struct StatSurvived{
    int nb_survived;
    double percentage_survived;
};

class ProcessPassager{
 public:
     explicit ProcessPassager(const std::vector<Passager> &);
     double p_mean_age();
     StatSurvived p_survived();
     std::map<std::string, int> p_hist_emabarked();
 private:
     std::vector<Passager> data;
     std::map<std::string, int> hist_embarked;
     double mean_age;
     StatSurvived info_survived;
};



#endif  // SRC_COMMON_PROCESS_PASSAGER_HPP_
