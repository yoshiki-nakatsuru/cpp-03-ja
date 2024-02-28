#include "tests.hpp"

#include <gtest/gtest.h>

#include "templates.hpp"

TEST(Test, Sum) {
    ASSERT_EQ(sum(1), 1);
    ASSERT_EQ(sum(1, 2), 3);
    ASSERT_EQ(sum(2, 4), 6);
    ASSERT_EQ(sum(2, 4, 6, 12, 24), 48);
}
