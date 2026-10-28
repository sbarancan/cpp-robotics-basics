#include "amr_core/angles.hpp"
#include <iostream>

int main() {

    std::vector<double> angles = {3.5, 1.5, 2.0, 350.0, 10.0};

    std::cout << amr_core::wrap(3.5) << std::endl;
    std::cout << amr_core::shortestDiff(3.5, 1.5) << std::endl;
    std::cout << amr_core::mean(angles) << std::endl;

    return 0;
}