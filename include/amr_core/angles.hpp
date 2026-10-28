#pragma once
#include <vector>

namespace amr_core {

    double wrap(double angle);
    double shortestDiff(double angle1, double angle2);
    double mean(const std::vector<double>& angles);
}



