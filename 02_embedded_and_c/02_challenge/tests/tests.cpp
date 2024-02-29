#include "tests.hpp"

#include <gtest/gtest.h>

#include "cpu_temperature.hpp"
#include "cabin_temperature.hpp"
#include "tire_pressure.hpp"

#include <type_traits>

template<typename T, typename ExpectedType>
struct is_same_return_type : std::false_type {};

template<typename T, typename R, typename... Args, typename ExpectedType>
struct is_same_return_type<R(T::*)(Args...) const, ExpectedType> : std::is_same<R, ExpectedType> {};

TEST(TypeCheckTests, CheckReturnTypes) {
    static_assert(is_same_return_type<decltype(&CPUTemperature::read), temperature::kelvin>::value, "CPUTemperature::read must return temperature::kelvin");
    static_assert(is_same_return_type<decltype(&CabinTemperature::read), temperature::kelvin>::value, "CabinTemperature::read must return temperature::kelvin");
    static_assert(is_same_return_type<decltype(&TirePressure::read), pressure::psi>::value, "TirePressure::read must return pressure::psi");
}

TEST(SensorTests, CPUTemperatureRead) {
    CPUTemperature sensor;
    auto temp = sensor.read();
    ASSERT_TRUE(true);
}

TEST(SensorTests, CabinTemperatureRead) {
    CabinTemperature sensor;
    auto temp = sensor.read();
    ASSERT_TRUE(true);
}

TEST(SensorTests, TirePressureRead) {
    TirePressure sensor;
    auto pressure = sensor.read();
    ASSERT_TRUE(true);
}
