// Copyright 2021 Prokofeva Elizaveta

#ifndef MODULES_STATISTIC_VALUES_INCLUDE_STATISTIC_VALUES_H_
#define MODULES_STATISTIC_VALUES_INCLUDE_STATISTIC_VALUES_H_

#include <vector>
using std::vector;

namespace statisticValues {
    double calc_mean_value(vector<double> var, vector<double> p, int n);
    double calc_variance(vector<double> var, vector<double> p, int n);
    double calc_starting_moment(vector<double> var, vector<double> p, int n, int k);
    double calc_central_moment(vector<double> var, vector<double> p, int n, int k);
}

#endif  // MODULES_STATISTIC_VALUES_INCLUDE_STATISTIC_VALUES_H_
