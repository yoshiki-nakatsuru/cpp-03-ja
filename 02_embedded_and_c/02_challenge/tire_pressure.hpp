// コードを入力してください
#pragma once

#include "pressure_sensor.hpp"

class TirePressure : PressureSensor{
public:
    struct pressure::psi read() const;
    void set(struct pressure::psi ps);
};