#include <iostream>

using namespace std;

void print_arr(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void merge(int *a, int s, int e) {
  int mid = (s + e) / 2;
  int i = s;
  int j = mid + 1;
  int k = s;

  int temp[100];

  while (i <= mid && j <= e) {
    if (a[i] < a[j]) {
      temp[k++] = a[i++];
    } else {
      temp[k++] = a[j++];
    }
  }

  while (i <= mid) {
    temp[k++] = a[i++];
  }

  while (j <= e) {
    temp[k++] = a[j++];
  }

  // copy all elements to original array
  for (int p = s; p <= e; p++) {
    a[p] = temp[p];
  }
}

void merge_sort(int a[], int s, int e) {
  // base case
  if (s >= e) {
    return;
  }

  int mid = (s + e) / 2;
  merge_sort(a, s, mid);
  merge_sort(a, mid + 1, e);
  merge(a, s, e);
}

int main() {
  int a[] = {5, 4, 3, 2, 1};
  int n = 5;
  print_arr(a, n);

  merge_sort(a, 0, n - 1);

  print_arr(a, n);
  return 0;
}
