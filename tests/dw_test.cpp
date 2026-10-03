#include "dw.h"
#include <gtest/gtest.h>
#include <stdexcept>

TEST(SafeDivide, DividesNormally) {
  EXPECT_DOUBLE_EQ(safe_divide(10.0, 2.0), 5.0);
}

TEST(SafeDivide, ThrowsOnDivideByZero) {
  EXPECT_THROW(safe_divide(5.0, 0.0), std::invalid_argument);
}
