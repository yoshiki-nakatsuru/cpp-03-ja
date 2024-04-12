// コードを入力してください
#pragma once

#include "units.hpp"

class PressureSensor{
public:
    PressureSensor():ps(0){};
    virtual struct pressure::psi read() const = 0;
protected:
    struct pressure::psi ps;
};