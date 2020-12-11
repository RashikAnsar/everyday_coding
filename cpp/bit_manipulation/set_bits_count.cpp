#include <iostream>

using namespace std;

int setBitsCount(int n) {
  int ans = 0;
  while (n > 0) {
    ans += (n & 1);
    n = n >> 1;
  }
  return ans;
}

// alternate approach (More Efficient)
int setBitsCount_2(int n) {
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

  cout << setBitsCount(n) << endl;
  cout << setBitsCount_2(n) << endl;
  return 0;
}
