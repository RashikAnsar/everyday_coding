#include <iostream>

using namespace std;

int decimalToBinary(int n) {
  int ans = 0, p = 1;

  while (n > 0) {
    int last_bit = (n & 1);
    ans += p * last_bit;
    p = p * 10;
    n = n >> 1;
  }
  // return number in decimal which is in binary format
  return ans;
}

int main() {
  int n;
  cin >> n;
  cout << decimalToBinary(n) << endl;
  return 0;
}
