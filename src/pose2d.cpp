#include "amr_core/pose2d.hpp"
#include "cmath"

namespace amr_core {
    double normalizeAngle(double angle_rad) {
        while (angle_rad > M_PI) {
            angle_rad -= 2.0 * M_PI;
        }

        while (angle_rad <= -M_PI) {
            angle_rad += 2.0 * M_PI;
        }

        return angle_rad;
    }

}