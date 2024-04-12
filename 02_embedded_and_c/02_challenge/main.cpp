// コードを入力してください
#include <iostream>
#include "units.hpp"
#include "cpu_temperature.hpp"
#include "cabin_temperature.hpp"
#include "tire_pressure.hpp"

int main(){

    struct temperature::kelvin kelvinCabin{20};
    struct temperature::kelvin kelvinCPU{60};
    struct pressure::psi pressureTire{200};

    CabinTemperature cabin;
    CPUTemperture cpu;
    TirePressure tire;

    cabin.set(kelvinCabin);
    cpu.set(kelvinCPU);
    tire.set(pressureTire);

    std::cout << cabin.read().value << std::endl;
    std::cout << cpu.read().value << std::endl;
    std::cout << tire.read().value << std::endl;

    return 0;
}