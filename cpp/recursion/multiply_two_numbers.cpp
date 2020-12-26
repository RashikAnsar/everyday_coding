// Constraint: Without using *

#include <iostream>

using namespace std;

int multiply(int a, int b) {
  // base cases
  if (a == 0 || b == 0) {
    return 0;
  }

  // Positive values
  if (a == 1) {
    return b;
  }

  if (b == 1) {
    return a;
  }

  // Negative values
  if (a == -1) {
    return -b;
  }

  if (b == -1) {
    return -a;
  }

  // recursive case
  if (a > 0 and b > 0) {
    // both a and b are positive
    return a + multiply(a, b - 1);
  } else if (a > 0 and b < 0) {
    // a is positive and b is negative
    return b + multiply(a - 1, b);
  } else if (a < 0 and b > 0) {
    // a is negative and b is positive
    return a + multiply(a, b - 1);
  } else if (a < 0 and b < 0) {
    // both a and b are negative
    return -a + multiply(-a, -b - 1);
  } else {
    return 0;
  }
}

int main() {
  cout << multiply(3, 5) << endl;
  cout << multiply(3, -5) << endl;
  cout << multiply(-3, 5) << endl;
  cout << multiply(-3, -5) << endl;
  return 0;
}
