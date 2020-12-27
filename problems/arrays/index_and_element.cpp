/**
 * Given a sorted array arr of distinct integers, return the lowest index i for
 * which arr[i] == i. Return null if there is no such index.
 *
 * For example, given the array [-5, -3, 2, 3], return 2 since arr[2] == 2. Even
 * though arr[3] == 3, we return 2 since it's the lowest index.
 *
 ***/

#include <iostream>

using namespace std;

int element_same_as_index(int arr[], int size) {
  // use binary search since the given array is sorted
  int low = 0, high = size - 1;

  while (low <= high) {
    int middle = low + (high - low) / 2;

    if (arr[middle] == middle) {
      return middle;
    }

    if (arr[middle] < middle) {
      low = middle + 1;
    } else {
      high = middle - 1;
    }
  }
  return -1;
}

int main() {
  //
  int a[] = {-5, -3, 2, 3};
  int n = sizeof(a) / sizeof(int);

  cout << element_same_as_index(a, n) << endl;

  return 0;
}
