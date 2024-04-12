// コードを入力してください
#include "cabin_temperature.hpp"

struct temperature::kelvin CabinTemperature:: read() const{
    return this->kl;
}

void CabinTemperature::set(struct temperature::kelvin kl){
    this->kl = kl;
}
