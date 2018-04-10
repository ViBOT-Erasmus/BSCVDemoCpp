// Copyright 2018 Cdric Lemaitre

#include "process_passager.hpp"




ProcessPassager::ProcessPassager(const std::vector<Passager> & data) {
    this->data = data;
    mean_age = 0;
}

double ProcessPassager::p_mean_age() {
    double acc = 0;
    double nb_data_valid = 0;
    if (mean_age == 0) {
        for (int i=0; i<static_cast<int>(data.size()-1); i++) {
            if (data[i].age != -1) {
                nb_data_valid++;
                acc += data[i].age;
            }  //  if there is valid age value
        }  // for all datat in file
    mean_age = acc / nb_data_valid;
    }
    return mean_age;
}
