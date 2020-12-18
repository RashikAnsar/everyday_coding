#include <iostream>

using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int lcm(int a, int b) {
  // gcd * lcm = (a * b);
  return (a * b) / gcd(a, b);
}

int main() {
  int n1, n2;
  cin >> n1 >> n2;

  cout << "GCD of " << n1 << " and " << n2 << " is " << gcd(n1, n2) << endl;
  cout << "LCM of " << n1 << " and " << n2 << " is " << lcm(n1, n2) << endl;

  return 0;
}
