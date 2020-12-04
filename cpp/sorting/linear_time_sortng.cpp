// You will be given an array containing only 0s, 1s and 2s. you have sort the
// array in linear time that is O(N) where N is the size of the array.

// Similar to Dutch Flag problem

#include <iostream>

using namespace std;

// Approach 1: using three pointers
void sortArr_1(int arr[], int n) {
  int low = 0, mid = 0, high = n - 1;

  while (mid <= high) {
    // if mid 0 then swap with low, inc both low and mid
    if (arr[mid] == 0) {
      swap(arr[low], arr[mid]);
      mid++;
      low++;
      // if mid 1 then inc mid
    } else if (arr[mid] == 1) {
      mid++;
      // else swap mid and high, dec high
    } else {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}

// Approach 2: Counting and reassigning values of array
void sortArr_2(int arr[], int n) {
  int count0 = 0, count1 = 0, count2 = 0;

  for (int i = 0; i < n; i++) {
    switch (arr[i]) {
      case 0:
        count0++;
        break;
      case 1:
        count1++;
        break;
      case 2:
        count2++;
        break;
    }
  }

  // Update the array
  int i = 0;

  // Store all the 0s in the beginning
  while (count0 > 0) {
    arr[i++] = 0;
    count0--;
  }

  // Then all the 1s
  while (count1 > 0) {
    arr[i++] = 1;
    count1--;
  }

  // Finally all the 2s
  while (count2 > 0) {
    arr[i++] = 2;
    count2--;
  }
}

int main() {
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // sorting array
  sortArr_1(a, n);

  // printing array
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
  return 0;
}