// コードを入力してください
#include "cpu_temperature.hpp"

struct temperature::kelvin CPUTemperature:: read() const{
    return this->kl;
}

void CPUTemperature::set(struct temperature::kelvin kl){
    this->kl = kl;
}