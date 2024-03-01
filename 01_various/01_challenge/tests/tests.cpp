#include "tests.hpp"

#include <gtest/gtest.h>

#include "timer.hpp"
#include <thread>
#include <regex>
#include <string>

using namespace std::chrono_literals;

int extractNumber(const std::string& input) {
    std::regex pattern("\\d+");
    std::smatch match;

    if (std::regex_search(input, match, pattern)) {
        return std::stoi(match.str(0));
    } else {
        return -1;
    }
}

void timeMachine(auto time) {
    Timer t;
    std::this_thread::sleep_for(time);
}

TEST(Test, Timer1) {
    auto captured_output = captureOutput([](){ timeMachine(300ms); });
    auto num = extractNumber(captured_output);
    ASSERT_TRUE(std::abs(num - 300) < 10);
}

TEST(Test, Timer2) {
    auto captured_output = captureOutput([](){ timeMachine(123ms); });
    auto num = extractNumber(captured_output);
    ASSERT_TRUE(std::abs(num - 123) < 10);
}
