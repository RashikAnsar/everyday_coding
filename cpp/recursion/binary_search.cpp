#include <iostream>

using namespace std;

// Recursive binary search returns index of element else -1
int binary_search(int a[], int low, int high, int x) {
  // base condition
  if (low > high) {
    return -1;
  }

  int mid = low + (high - low) / 2;
  // base condition
  if (x == a[mid]) {
    return mid;
  } else if (x < a[mid]) {
    // recursive case
    return binary_search(a, low, mid - 1, x);
  } else {  // if (x > a[mid]) {
    // recursive case
    return binary_search(a, mid + 1, high, x);
  }
}
int main() {
  int a[] = {1, 3, 5, 7, 9, 14, 18, 20, 25, 27, 35};
  int low = 0, high = sizeof(a) / sizeof(a[0]);
  int x = 27;

  cout << binary_search(a, low, high, x) << endl;

  x = 45;
  cout << binary_search(a, low, high, x) << endl;

  return 0;
}
