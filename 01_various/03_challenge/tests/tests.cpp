#include "tests.hpp"

#include <gtest/gtest.h>

#include "templates.hpp"

TEST(Test, allTrue) {    
    ASSERT_TRUE(allTrue());
    ASSERT_TRUE(allTrue(true));
    ASSERT_TRUE(allTrue(true, true, true, true, true, true, true));
    ASSERT_FALSE(allTrue(false));
    ASSERT_FALSE(allTrue(true, false));
    ASSERT_FALSE(allTrue(true, true, true, true, true, true, false));
}
