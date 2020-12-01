#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(int);
  rotate(arr, arr + 2, arr + n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  vector<int> v{10, 20, 30, 40, 50};
  rotate(v.begin(), v.begin() + 3, v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  cout << endl;

  // next permutation
  vector<int> a{1, 2, 3, 4, 5};
  int j = 5;
  next_permutation(a.begin(), a.end());
  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;

  int b[] = {1, 2, 3};
  int m = sizeof(b) / sizeof(int);
  next_permutation(b, b + m);
  for (int x : b) {
    cout << x << " ";
  }

  return 0;
}