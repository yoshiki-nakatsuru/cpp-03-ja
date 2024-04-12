// コードを入力してください
#include "traffic_light.hpp"

int trafficLightDuration(TrafficLightState state){
    int durationTime;
    switch(state){
        case TrafficLightState::red:
            durationTime = 30;
            break;
        case TrafficLightState::yellow:
            durationTime = 5;
            break;
        case TrafficLightState::green:
            durationTime = 40;
            break;
        default:
            durationTime = 0;
            break;            
    }
    return durationTime;

}