// コードを入力してください
#include  <iostream>
#include "led_controller.hpp"


int main(){
    LedController led;

    led.turnOn();
    std::cout << "led:" << std::boolalpha << led.get() << std::endl;
    led.turnOff();
    std::cout << "led:" << std::boolalpha << led.get() << std::endl;

    return 0;
}