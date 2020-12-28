/**
 * Given an array of integers and a key k.
 * Find all the occurence of key in array.
 **/

#include <iostream>

using namespace std;

int store_occurences(int *a, int i, int n, int key, int *out, int j) {
  if (i == n) {
    return j;
  }
  if (a[i] == key) {
    out[j] = i;
    return store_occurences(a, i + 1, n, key, out, j + 1);
  }
  return store_occurences(a, i + 1, n, key, out, j);
}

void all_occurences(int *a, int i, int n, int key) {
  if (i == n) {
    return;
  }
  if (a[i] == key) {
    cout << i << " ";
  }

  all_occurences(a, i + 1, n, key);
}

int main() {
  int a[] = {1, 2, 3, 4, 7, 9, 6, 7, 5, 8};
  int key = 7;
  int n = sizeof(a) / sizeof(a[0]);

  int output[100];
  int count = store_occurences(a, 0, n, key, output, 0);
  for (int i = 0; i < count; i++) {
    cout << output[i] << " ";
  }

  cout << endl;

  all_occurences(a, 0, n, key);
  // cout << last_occurence(a, n, key) << endl;

  return 0;
}
