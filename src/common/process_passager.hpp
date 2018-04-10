// Copyright 2018 Cdric Lemaitre
#ifndef SRC_COMMON_PROCESS_PASSAGER_HPP_
#define SRC_COMMON_PROCESS_PASSAGER_HPP_

#include <vector>
#include "passager_reader.hpp"
#include "passager.hpp"

class ProcessPassager{
 public:
     explicit ProcessPassager(const std::vector<Passager> &);
     double p_mean_age();
 private:
     std::vector<Passager> data;
     double mean_age;
};



#endif  // SRC_COMMON_PROCESS_PASSAGER_HPP_
