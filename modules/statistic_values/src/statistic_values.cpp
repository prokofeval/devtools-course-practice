// Copyright 2021 Prokofeva Elizaveta

#include <vector>
#include <cmath>
#include "include/statistic_values.h"

double statisticValues::calc_mean_value(std::vector<double> var, std::vector<double> p, int size) {
    double res = 0.0;
    for (int i = 0; i < size; i++) {
        res += var[i] * p[i];
    }
    return res;
}

double statisticValues::calc_variance(std::vector<double> var, std::vector<double> p, int size) {
    double res = 0.0;
    double mean_value = statisticValues::calc_mean_value(var, p, size);
    for (int i = 0; i < size; i++) {
        res += p[i] * pow((var[i] - mean_value), 2);
    }
    return res;
}

double statisticValues::calc_starting_moment(std::vector<double> var, std::vector<double> p, int size, int k) {
    double res = 0.0;
    for (int i = 0; i < size; i++) {
            res += pow(var[i], k) * p[i];
    }
    return res;
}

double statisticValues::calc_central_moment(std::vector<double> var, std::vector<double> p, int size, int k) {
    double res = 0.0;
    double mean_value = statisticValues::calc_mean_value(var, p, size);
    for (int i = 0; i < size; i++) {
        res += p[i] * pow((var[i] - mean_value), k);
    }
    return res;
}
