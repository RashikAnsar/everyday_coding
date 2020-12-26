#include <iostream>

using namespace std;

// Recursive function to check if array is sorted
bool is_sorted(int a[], int n) {
  // base case
  if (n == 0 or n == 1) {
    return true;
  }

  // recursive case
  if (a[0] < a[1] and is_sorted(a + 1, n - 1)) {
    return true;
  }
  return false;
}

int main() {
  int a[] = {1, 2, 4, 6, 8, 9, 15};
  int n = sizeof(a) / sizeof(a[0]);

  int b[] = {8, 9, 1, 15, 20};
  int m = sizeof(b) / sizeof(b[0]);

  cout << boolalpha << is_sorted(a, n) << endl;
  cout << boolalpha << is_sorted(b, m) << endl;
  return 0;
}
