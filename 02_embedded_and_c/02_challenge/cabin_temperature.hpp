// コードを入力してください
#pragma once

#include "temperature_sensor.hpp"

class CabinTemperature : TemperatureSensor{
public:
    struct temperature::kelvin read() const;
    void set(struct temperature::kelvin kl);
};