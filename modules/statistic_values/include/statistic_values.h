// Copyright 2021 Prokofeva Elizaveta

#ifndef MODULES_STATISTIC_VALUES_INCLUDE_STATISTIC_VALUES_H_
#define MODULES_STATISTIC_VALUES_INCLUDE_STATISTIC_VALUES_H_

#include <vector>

namespace statisticValues {
    double calc_mean_value(std::vector<double> var, std::vector<double> p, int size);
    double calc_variance(std::vector<double> var, std::vector<double> p, int size);
    double calc_starting_moment(std::vector<double> var, std::vector<double> p, int size, int k);
    double calc_central_moment(std::vector<double> var, std::vector<double> p, int size, int k);
}

#endif  // MODULES_STATISTIC_VALUES_INCLUDE_STATISTIC_VALUES_H_