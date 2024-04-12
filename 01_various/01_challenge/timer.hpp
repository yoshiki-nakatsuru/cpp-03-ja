#pragma once
#include <chrono>
#include <iostream>
// コードを入力してください
class Timer{
public:
    Timer();
    ~Timer();
private:
    std::chrono::high_resolution_clock::time_point startTime;
};  