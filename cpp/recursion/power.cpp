#include <iostream>

using namespace std;

double power(int a, int n) {
  // base case
  if (n == 0) {
    return 1;
  }

  // if exponent is negative
  if (n < 0) {
    return 1 / power(a, -n);
  } else {
    // if exponent is positive
    return a * power(a, n - 1);
  }
}

int main() {
  cout << power(2, 5) << endl;
  cout << power(10, -3) << endl;
  return 0;
}
