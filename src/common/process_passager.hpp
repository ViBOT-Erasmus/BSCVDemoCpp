// Copyright 2018 Cdric Lemaitre
#ifndef SRC_COMMON_PROCESS_PASSAGER_HPP_
#define SRC_COMMON_PROCESS_PASSAGER_HPP_

#include <vector>
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
 private:
     std::vector<Passager> data;
     double mean_age;
     StatSurvived info_survived;
};



#endif  // SRC_COMMON_PROCESS_PASSAGER_HPP_
