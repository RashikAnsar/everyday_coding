/**
 *  given a number n. find out number of trailing zeroes in n! in logarithmic
 *time
 *
 * Constraints: n can go upto 2000
 *
 **************************************************************
 *  REFER: https://www.purplemath.com/modules/factzero.htm
 **/
#include <iostream>

using namespace std;

// count number of trailing zeros in n!
int factorial_trailing_zeros(int n) {
  int ans = 0;
  while (n > 0) {
    n /= 5;
    ans += n;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;

  cout << factorial_trailing_zeros(n) << endl;
  return 0;
}
