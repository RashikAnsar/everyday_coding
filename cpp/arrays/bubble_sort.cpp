#include <iostream>

using namespace std;

// pairwise swapping
void bubble_sort(int a[], int n) {
  for (int i = 1; i <= n - 1; i++) {
    for (int j = 0; j <= n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
      }
    }
  }
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

  bubble_sort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }

  return 0;
}