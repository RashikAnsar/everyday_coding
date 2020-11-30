#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 5, 7, 2, 85, 41, 22};
  int n = sizeof(arr) / sizeof(int);

  // Search an element from an unsorted array using `find` method
  int key;
  cout << "Enter a key to search: ";
  cin >> key;

  // find(first, last, element)
  auto it = find(arr, arr + n, key);
  int index = it - arr;
  if (index == n) {
    cout << "Element " << key << "is not present" << endl;
  } else {
    cout << key << " is at index " << index << endl;
  }
  return 0;
}