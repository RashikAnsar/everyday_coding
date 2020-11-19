#include <iostream>

using namespace std;

void selection_sort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    // find the smallest element index in the unsorted part
    int min_index = i;
    for (int j = i; j <= n - 1; j++) {
      if (a[j] < a[min_index]) {
        min_index = j;
      }
    }
    swap(a[i], a[min_index]);
  }
}

int main() {
  int n;
  cout << "Number of elements in array: ";
  cin >> n;

  int arr[n];

  cout << "Enter elements of array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  selection_sort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }

  return 0;
}