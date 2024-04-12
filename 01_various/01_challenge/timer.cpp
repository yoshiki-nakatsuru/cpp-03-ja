// コードを入力してください
#include "timer.hpp"

Timer::Timer(){
    startTime = std::chrono::high_resolution_clock::now();
}

Timer::~Timer(){
    auto endTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsedTime = endTime - startTime;
    std::cout << elapsedTime.count() << std::endl;
}