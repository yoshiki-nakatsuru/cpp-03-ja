#include "tests.hpp"

#include <gtest/gtest.h>

#include "traffic_light.hpp"
#include "clamp.hpp"
#include "constexpr.hpp"

TEST(TrafficLightTests, StateDurations) {
    EXPECT_TRUE(trafficLightDuration(TrafficLightState::red) > 0);
    EXPECT_TRUE(trafficLightDuration(TrafficLightState::yellow) > 0);
    EXPECT_TRUE(trafficLightDuration(TrafficLightState::green) > 0);
}

TEST(ClampTests, IntClamp) {
    EXPECT_EQ(clamp(5, 10, 20), 10);
    EXPECT_EQ(clamp(15, 10, 20), 15);
    EXPECT_EQ(clamp(25, 10, 20), 20);
}

TEST(ClampTests, FloatClamp) {
    EXPECT_FLOAT_EQ(clamp(15.0f, 10.0f, 20.0f), 15.0f);
    EXPECT_FLOAT_EQ(clamp(25.0f, 10.0f, 20.0f), 20.0f);
}

TEST(ClampTests, DoubleClamp) {
    EXPECT_DOUBLE_EQ(clamp(5.0, 10.0, 20.0), 10.0);
    EXPECT_DOUBLE_EQ(clamp(15.0, 10.0, 20.0), 15.0);
}

TEST(ConstexprTests, CircumferenceCalculation) {
    constexpr double radius1 = 3.5;
    constexpr double expectedCircumference1 = 2.0 * pi * radius1;
    static_assert(calculateCircumference(radius1) == expectedCircumference1, "Circumference calculation must be correct");

    constexpr double radius2 = 12.23;
    constexpr double expectedCircumference2 = 2.0 * pi * radius2;
    EXPECT_DOUBLE_EQ(calculateCircumference(radius2), expectedCircumference2);
}
