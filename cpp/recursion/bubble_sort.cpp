#include <iostream>

using namespace std;

void print_arr(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void bubble_sort(int a[], int n) {
  // base case
  if (n == 1) {
    return;
  }

  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      swap(a[i], a[i + 1]);
    }
  }

  bubble_sort(a, n - 1);
}

void bubble_sort_recursive(int a[], int j, int n) {
  if (n == 1) {
    return;
  }

  if (j == n - 1) {
    return bubble_sort_recursive(a, 0, n - 1);
  }

  if (a[j] > a[j + 1]) {
    swap(a[j], a[j + 1]);
  }
  bubble_sort_recursive(a, j + 1, n);
  return;
}

int main() {
  int a[] = {5, 4, 3, 2, 1};
  int n = 5;

  print_arr(a, n);
  bubble_sort_recursive(a, 0, n);
  print_arr(a, n);
  return 0;
}
