#include <iostream>
using namespace std;

// binary search function
// the array provided to binary search must be a sorted one
// this function returns the index of target element if found else -1
int binary_search(int a[], int n, int key) {
  int start = 0;
  int end = n - 1;
  while (start < end) {
    // To avoid overflow [(start + end) / 2]
    int mid = start + (end - start) / 2;
    if (a[mid] == key) {
      return mid;
    }
    if (a[mid] > key) {
      end = mid - 1;
    }
    if (a[mid] < key) {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {
  int n, key;
  cout << "Number of elements in array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array: ";

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Enter element to search: ";
  cin >> key;

  // index at which target found
  int idx = binary_search(arr, n, key);
  if (idx == -1) {
    cout << key << " doesn't exist in given array" << endl;
  } else {
    cout << key << " is at index " << idx << endl;
  }

  return 0;
}