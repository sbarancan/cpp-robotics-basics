#pragma once
#include <vector>

namespace amr_core {

    double wrap(double angle);
    double shortestDiff(double angle1, double angle2);   //shortest signed turn from angle 1 to angle2 in (-pi, pi]
    double mean(const std::vector<double>& angles);       //circular mean in (-pi, pi], returns 0 for an empty vector {}
}



