# Challenge 4: Smart Pointer Implementation

## Task 1

Implement a simplified version of a smart pointer class that mimics the behavior of `std::unique_ptr`. The class should manage the ownership of a dynamically allocated integer.

### Requirements

- Your class should be named `unique_int_ptr`.
- Implement constructor(s) to allocate an integer on the heap.
- Implement a destructor to clean up the dynamically allocated memory.
- Implement a `get` method to return the stored pointer.
- Implement a `release` method that relinquishes control of the pointer. In other words, this method will return the stored pointer and set the pointer within the class to `nullptr` to prevent it being used again.

## Task 2

In order for us to be able to easily dereference our `unique_int_ptr` to use the underlying value, we need to define our own `operator*` for this class. This task is to define `operator*`.

### Requirements

- An instance of your class should be able to be used like so:
  ```cpp
  unique_int_ptr my_int(3);
  std::cout << *my_int << std::endl;
  ```

## Task 3

Create a second class template version of the class you created in the previous tasks that manages any built-in data type that is passed in by the user.

### Requirements

- Your class should be named `unique_ptr`.
