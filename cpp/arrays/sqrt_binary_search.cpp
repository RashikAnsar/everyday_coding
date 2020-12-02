#include <iostream>

using namespace std;

float square_root(int n, int p) {
  int start = 0;
  int end = n - 1;

  float ans = -1;

  while (start <= end) {
    int mid = (start + end) >> 1;

    if (mid * mid == n) {
      return mid;
    }

    if (mid * mid < n) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  // Based on precision generate decimal places
  float inc = 0.1;
  for (int times = 0; times < p; times++) {
    while (ans * ans <= n) {
      ans = ans + inc;
    }
    ans = ans - inc;
    inc = inc / 10;
  }

  return ans;
}

int main() {
  int n, precision;
  cin >> n;
  cin >> precision;
  cout << square_root(n, precision) << endl;
  return 0;
}