//  transform the initial number x to the minimum possible positive number by
//  inverting some (possibly, zero) digits. The decimal representation of the
//  final number shouldn't start with a zero.

#include <iostream>

using namespace std;

int main() {
  char A[100000];
  cin >> A;
  int i = 0;
  if (A[i] == '9') i++;
  for (; A[i] != '\0'; i++) {
    int digit = A[i] - '0';
    if (digit >= 5) {
      digit = 9 - digit;
    }
    A[i] = digit + '0';
  }
  cout << A << endl;
  return 0;
}
