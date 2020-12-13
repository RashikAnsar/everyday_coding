// gives Q queries each query containing two integers a and b.
// count the no of set-bits in for all numbers between a and b (both inclusive)

#include <iostream>

using namespace std;

int setbit_count(int n) {
  int ans = 0;
  while (n > 0) {
    n = n & (n - 1);
    ans++;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;

  while (n--) {
    int a, b;
    cin >> a >> b;

    int count = 0;

    if (a > b) {
      return count;
    }

    for (int i = a; i <= b; i++) {
      int ans = setbit_count(i);
      count += ans;
    }
    cout << count << endl;
  }

  return 0;
}
