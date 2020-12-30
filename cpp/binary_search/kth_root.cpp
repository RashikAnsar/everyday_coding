// Given two integers n and k. Find the greatest integer x, such that, x^k <= n

#include <iostream>

#define ll long long int

using namespace std;

int main() {
  ll n, k;
  cin >> n >> k;

  if (k == 1) {
    cout << n << endl;
    return 0;
  }

  ll l = 1, r = 100000000, mid;

  while (l < r) {
    mid = (l + r + 1) >> 1;
    bool flag = 1;
    ll tmp = 1;
    for (int i = 1; i <= k; i++) {
      tmp *= mid;
      if (tmp > n) {
        flag = 0;
        break;
      }
    }
    if (flag)
      l = mid;
    else
      r = mid - 1;
  }

  cout << r << endl;

  return 0;
}
