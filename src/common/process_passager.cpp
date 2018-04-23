// Copyright 2018 Cdric Lemaitre

#include "process_passager.hpp"


ProcessPassager::ProcessPassager(const std::vector<Passager> & data) {
    this->data = data;
    mean_age = 0;
    info_survived.nb_survived = 0;
    info_survived.percentage_survived = 0;
}  //  ProcessPassager(const std::vector<Passager> &)

double ProcessPassager::p_mean_age() {
    double acc = 0;
    double nb_data_valid = 0;
    if (mean_age == 0) {
        for (int i=0; i<static_cast<int>(data.size()); i++) {
            if (data[i].age != -1) {
                nb_data_valid++;
                acc += data[i].age;
            }  //  if there is valid age value
        }  // for all datat in file
    mean_age = acc / nb_data_valid;
    }  //  if mean not already compute
    return mean_age;
}  //  p_mean_age()

StatSurvived ProcessPassager::p_survived() {
    double nb_data_valid = 0;
    if (info_survived.nb_survived == 0 &&
            info_survived.percentage_survived == 0) {
        for (int i=0; i<static_cast<int>(data.size()); i++) {
            if (data[i].survived == true) {
                nb_data_valid++;
            }  // if survived
        }  // for all data
        info_survived.nb_survived = nb_data_valid;
        info_survived.percentage_survived = nb_data_valid / data.size();
    }  // if stats not already compute
    return info_survived;
}  //  p_survived()

std::map<std::string, int> ProcessPassager::p_hist_emabarked() {
    for (int i=0; i<static_cast<int>(data.size()); i++) {
        if (hist_embarked.find(data[i].embark_town) == hist_embarked.end()) {
            hist_embarked[data[i].embark_town] = 1;
        } else {
            hist_embarked[data[i].embark_town]++;
        }  // the key is or is not in the already in the map
    }  // for all data
    return hist_embarked;
}  //  p_hist_embarked()
