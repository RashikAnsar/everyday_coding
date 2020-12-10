#include <iostream>

using namespace std;

// isOdd: checking the given number is odd or not using bitwise operators
bool isOdd(int num) { return (num & 1); }

// getBit returns i'th bit of number n
int getBit(int n, int i) {
  int mask = (1 << i);
  int bit = (n & mask) > 0 ? 1 : 0;
  return bit;
}

// setBit: returns number after setting bit at i'th position in n to 1s
int setBit(int n, int i) {
  int mask = (1 << i);
  int ans = n | mask;
  return ans;
}

// clearBit: returns number after clearing a bit at i'th position of n to 0
int clearBit(int n, int i) {
  int mask = ~(1 << i);
  int num = n & mask;
  return num;
}

// updateBit:
void updateBit(int &n, int i, int v) {
  int mask = ~(1 << i);
  int cleared_bit_num = n & mask;
  n = cleared_bit_num | (v << i);
}

int main() {
  int n = 5;
  cout << "Is number " << n << " odd: " << isOdd(n) << endl;
  cout << "Get bits of num n from position 3 to 0: ";
  cout << getBit(n, 3) << getBit(n, 2) << getBit(n, 1) << getBit(n, 0) << endl;
  cout << "After settig bit at position 1 of num 5: " << setBit(n, 1) << endl;
  cout << "After clearing bit at position 2 of num 5: " << clearBit(n, 2)
       << endl;

  updateBit(n, 2, 0);
  updateBit(n, 3, 1);
  cout << "After updating bit 2 & 3 with 0 and 1 of num 5: " << n << endl;

  return 0;
}
