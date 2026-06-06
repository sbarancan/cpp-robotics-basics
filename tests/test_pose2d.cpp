#include "amr_core/pose2d.hpp"
#include "gtest/gtest.h"
#include "cmath"

TEST(Pose2DTest, DefaultValuesAreZero) {
    amr_core::Pose2D pose;
    EXPECT_DOUBLE_EQ(pose.x, 0.0);
    EXPECT_DOUBLE_EQ(pose.y, 0.0);
    EXPECT_DOUBLE_EQ(pose.yaw, 0.0);
}

TEST(AngleTest, ZeroStaysZero) {
    EXPECT_DOUBLE_EQ(amr_core::normalizeAngle(0.0), 0.0);                // 
}

TEST(AngleTest, PositiveAngleWraps) {
    const double angle = amr_core::normalizeAngle(4.0);

    EXPECT_GT(angle, -M_PI);    
    EXPECT_LE(angle, M_PI);
}

TEST(AngleTest, NegativeAngleWraps) {
    const double angle = amr_core::normalizeAngle(-4.0);

    EXPECT_GT(angle, -M_PI);    
    EXPECT_LE(angle, M_PI);
}

TEST(AngleTest, TwoPiBecomesZero) {
    EXPECT_NEAR(amr_core::normalizeAngle(2.0 * M_PI), 0.0, 1e-9);
}