#include "amr_core/angles.hpp"
#include <iostream>
#include <cmath>

const double deg = M_PI / 180.0;

int main() {

    std::vector<double> angles = {3.5, 1.5, 2.0, 350.0, 10.0};
    std::vector<double> a1 = {350.0 * deg, 10.0 * deg};
    std::vector<double> a2 = {-179.0 * deg, 179.0 * deg};

    std::cout << "wrap(3.5) = " << amr_core::wrap(3.5) << "     expected -2.78\n";
    std::cout << "shortestDiff(170.0 * deg, -170.0 * deg) = " << amr_core::shortestDiff(170.0 * deg, -170.0 * deg) <<"    expected 0.349\n";
    std::cout << "mean(a1) = {350, 10}) = "<< amr_core::mean(a1) << "    expected = 0 \n";
    std::cout << "mean(a2) = {-179, 179}) = "<< amr_core::mean(a2) << "    expected = 3.14\n";

    return 0;
}