#include "amr_core/angles.hpp"
#include <cmath>

namespace amr_core {
    double wrap(double angle){
        while (angle > M_PI){  angle -= 2 * M_PI; }
        while (angle <= -M_PI){  angle += 2 * M_PI;  }
        return angle;
    }
    
    double shortestDiff(double angle1, double angle2){
        return wrap(angle2 - angle1);
    }
    
    double mean(const std::vector<double>& angles){
        double x_total{0.0};
        double y_total{0.0};

        for (double a : angles) {
            x_total += cos(a);
            y_total += sin(a);        
        }
        return std::atan2(y_total, x_total);
    }
}














