# Challenge 3

## Task 1

Create an enum class `TrafficLight` representing the different states of a traffic light (red, yellow, and green). Write a function that takes a traffic light state as an argument and returns the duration of that state in seconds.

## Task 2

Implement a templated function `clamp` that takes a minimum value, a maximum value, and a value to clamp. If the value is less than the minimum, return the minimum. If the value is greater than the maximum, return the maximum. Otherwise, return the value. Test the function with different types like int, float, and double.

## Task 3

Write a constant called `pi` that represents the number pi using `constexpr`. Then write a `consteval` function `circumference` that computes the circumference of a circle of a given radius that uses this `pi` constant. Use a tool like [godbolt.org](https://godbolt.org/) to observe what the compiled code looks like.
