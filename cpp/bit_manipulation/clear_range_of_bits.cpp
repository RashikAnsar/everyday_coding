#include <iostream>

using namespace std;

// clears last i bits of number n
int clearLastIBits(int n, int i) {
  int mask = (-1 << i);
  return n & mask;
}

// clear range of bits between i and j
int clearRangeItoJ(int n, int i, int j) {
  int ones = (~0);
  int a = ones << (j + 1);
  int b = (1 << i) - 1;
  int mask = a | b;
  return n & mask;
}
int main() {
  int n = 31;
  cout << clearLastIBits(n, 3) << endl;
  cout << clearRangeItoJ(n, 1, 3) << endl;
}
