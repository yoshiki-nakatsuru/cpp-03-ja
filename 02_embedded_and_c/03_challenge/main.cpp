// コードを入力してください
#include <iostream>
#include "traffic_light.hpp"
#include "constexpr.hpp"
#include "clamp.hpp"

int main(){
    
    std::cout << "red:" << trafficLightDuration(TrafficLightState::red) << std::endl;
    std::cout << "yellow:" << trafficLightDuration(TrafficLightState::yellow) << std::endl;
    std::cout << "green:" << trafficLightDuration(TrafficLightState::green) << std::endl;

    std::cout << clamp<int>(4,1,3) << std::endl;
    std::cout << clamp<double>(2.4,4.3,543) << std::endl;

    std::cout << "circumference:" << calculateCircumference(3.0) << std::endl;


    return 0;
}