# Challenge 3

Create a variadic function template named allTrue that takes a variable number of boolean arguments and returns true if all arguments are true, and false otherwise. If no arguments are given, the function should return true.

Example usage:

```cpp
// Should output: 1 (true)
std::cout << allTrue(true, true, true) << std::endl;
// Should output: 0 (false)
std::cout << allTrue(true, false, true) << std::endl;
// Should output: 1 (true)
std::cout << allTrue() << std::endl;
```