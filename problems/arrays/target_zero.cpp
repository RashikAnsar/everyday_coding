/**
 * Given an integer n, return an array containing n unique integers such that
 * they add up to 0
 **/

#include <iostream>
#include <vector>

using namespace std;

vector<int> target_zero(int n) {
  vector<int> v;
  int n1 = n / 2;
  for (int i = 1; i <= n1; i++) {
    v.push_back(i);
    v.push_back((-1 * i));
  }
  if (n % 2 == 1) {
    v.push_back(0);
  }
  return v;
}

int main() {
  int n;
  cin >> n;

  vector<int> v = target_zero(n);

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  return 0;
}
