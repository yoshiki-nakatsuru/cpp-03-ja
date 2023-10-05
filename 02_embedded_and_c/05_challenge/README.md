# Challenge 5

## Task 1

Let's assume we have the following C header file, and we want to call `double_array` from within our C++ program:

```c
// double_array.h
#ifndef DOUBLE_ARRAY_H
#define DOUBLE_ARRAY_H

#include <stddef.h>

void double_array(int *arr, size_t size);

#endif // DOUBLE_ARRAY_H
```

Wrap the `double_array` declaration within the C header file, so it can be used from within a C++ program.

## Task 2

Use `double_array` from within a C++ program `main.cpp` by calling it on the underlying data from a `std::array`.
