// コードを入力してください
#include "tire_pressure.hpp"

struct pressure::psi TirePressure::read() const{
    return this->ps;
}

void TirePressure::set(struct pressure::psi ps){
    this->ps = ps;
}