#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int n = sizeof(arr) / sizeof(int);

  // Search an element from an sorted array using `binary_search` function
  int key;
  cin >> key;

  bool present = binary_search(arr, arr + n, key);
  if (present) {
    cout << "Element Present";
  } else {
    cout << "Element not found";
  }

  return 0;
}