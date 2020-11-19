#include <iostream>

using namespace std;

void insertion_sort(int a[], int n) {
  for (int i = 0; i <= n - 1; i++) {
    int key = a[i];
    int j = i - 1;
    while (j >= 0 and a[j] > key) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = key;
  }
}

int main() {
  int n;
  cout << "Number of elements: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  insertion_sort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }

  return 0;
}