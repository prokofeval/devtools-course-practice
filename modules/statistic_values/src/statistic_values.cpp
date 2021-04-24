// Copyright 2021 Prokofeva Elizaveta

#include <vector>
#include <cmath>
#include "include/statistic_values.h"

double statisticValues::calc_mean_value(std::vector<double> var, std::vector<double> p, int n) {
    double res = 0.0;
    for (int i = 0; i < n; i++) {
        res += var[i] * p[i];
    }
    return res;
}

double statisticValues::calc_variance(std::vector<double> var, std::vector<double> p, int n) {
    double res = 0.0;
    double mean_value = statisticValues::calc_mean_value(var, p, n);
    for (int i = 0; i < n; i++) {
        res += p[i] * pow((var[i] - mean_value), 2);
    }
    return res;
}

double statisticValues::calc_starting_moment(std::vector<double> var, std::vector<double> p, int n, int k) {
    double res = 0.0;
    for (int i = 0; i < n; i++) {
            res += pow(var[i], k) * p[i];
    }
    return res;
}

double statisticValues::calc_central_moment(std::vector<double> var, std::vector<double> p, int n, int k) {
    double res = 0.0;
    double mean_value = statisticValues::calc_mean_value(var, p, n);
    for (int i = 0; i < n; i++) {
        res += p[i] * pow((var[i] - mean_value), k);
    }
    return res;
}
