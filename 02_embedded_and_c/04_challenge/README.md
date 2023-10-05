# Challenge 4

## Task 1

Let's consider an embedded system that controls a simple LED light. The LED can be turned on and off using an embedded C library. We'll create a C++ class that utilizes this C library to control the LED light.

### Embedded C Library

First, let's create an embedded C library that simulates the LED control.

#### led_controller.c:

```c
#include "led_controller.h"

static bool led_state = false;

void led_init(void) {
    led_state = false;
}

void led_on(void) {
    led_state = true;
}

void led_off(void) {
    led_state = false;
}

bool led_get_state(void) {
    return led_state;
}
```

#### led_controller.h:

```c
#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include <stdbool.h>

void led_init(void);
void led_on(void);
void led_off(void);
bool led_get_state(void);

#endif // LED_CONTROLLER_H
```

Let's first create a static library from the above led_controller code.

First we compile our led_controller.c file using the -c flag, which tells the compiler to compile our `led_controller.c` into an object file without performing linking:

```bash
gcc -c -Wall -Werror -Wextra led_controller.c
```

This will give us the `led_controller.o` object file.

Next, we create a static library using the `ar` command, passing it the object files we would like to include in our library:

```bash
ar -rcs libledcontroller.a led_controller.o
```

This will create the `libledcontroller.a` static library that we can link into our C++ program later.

Once we have written our C++ program, our final step will be to compile our C++ program and link our `libledcontroller.a` static library:

```bash
g++ -o main -L. -lledcontroller main.cpp led_controller.cpp
```

The `-L` flag specifies a path containing the libraries. The `-l` flag specifies the name of the library, omitting the leading 'lib' and trailing '.a'.

## Task 2

Wrap the LED controller C library function declarations using `extern "C"`.

## Task 3

Create a C++ class called `LedController` that utilizes the C library to control the LED light. Implement member functions to `initialize`, `turn_on`, `turn_off`, and `get` the LED state.

## Task 4

Create a C++ program that uses the `LedController` class to control the LED light. Turn on the LED, print its state, turn off the LED, and print its state again.
