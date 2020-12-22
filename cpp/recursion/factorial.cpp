#include <iostream>

using namespace std;

int factorial(int n) {
  // base case
  if (n == 0 || n == 1) {
    return 1;
  }
  // recursive case
  return n * factorial(n - 1);
}

int main() {
  int n;
  cin >> n;

  cout << factorial(n) << endl;

  return 0;
}
