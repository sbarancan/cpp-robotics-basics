#include <amr_core/pose2d.hpp>
#include <iostream>

int main() {
    amr_core::Pose2D pose;
    pose.x = 1.0;
    pose.y = 2.0;
    pose.yaw = amr_core::normalizeAngle(4.0);

    std::cout << "x: " << pose.x << "\n";
    std::cout << "y: " << pose.y << "\n";
    std::cout << "yaw: " << pose.yaw << "\n";

}