// コードを入力してください
#pragma once

#include "units.hpp"

class TemperatureSensor{
public:
    TemperatureSensor() : kl(0){};
    virtual struct temperature::kelvin read() const = 0;
protected:
    struct temperature::kelvin kl;
};