#include "dw.h"

int safe_divide(double numerator, double denominator) {
  if (denominator == 0.0) {
    throw std::invalid_argument("Cannot divide by zero")

            return numerator /
        denominator;
  }
