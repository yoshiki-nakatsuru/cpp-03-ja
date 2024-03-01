#include "tests.hpp"

#include <gtest/gtest.h>

#include "unique_ptr.hpp"

TEST(Test, Task1) {    
    int* ptr = nullptr;
    unique_int_ptr unique(3);
    ASSERT_EQ(*unique.get(), 3);
    ptr = unique.get();

    auto released_ptr = unique.release();
    ASSERT_EQ(released_ptr, ptr);
    ASSERT_EQ(unique.get(), nullptr);
    ASSERT_EQ(*released_ptr, 3);
}

TEST(Test, Task2) {    
    unique_int_ptr unique(3);
    ASSERT_EQ(*unique, 3);
}

TEST(Test, Task3) {    
    int* int_ptr = nullptr;
    {
    unique_ptr<int> unique(3);
    ASSERT_EQ(*unique.get(), 3);
    int_ptr = unique.get();

    auto released_ptr = unique.release();
    ASSERT_EQ(released_ptr, int_ptr);
    ASSERT_EQ(unique.get(), nullptr);
    ASSERT_EQ(*released_ptr, 3);
    }

    double* double_ptr = nullptr;
    {
    unique_ptr<double> unique(3.1415);
    ASSERT_EQ(*unique.get(), 3.1415);
    double_ptr = unique.get();

    auto released_ptr = unique.release();
    ASSERT_EQ(released_ptr, double_ptr);
    ASSERT_EQ(unique.get(), nullptr);
    ASSERT_EQ(*released_ptr, 3.1415);
    }
}
