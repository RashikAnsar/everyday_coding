/**
 * Given an array of integers and a key k.
 * Find the index of first occurence of key in array.
 * Find the index of last occurence of key in array.
 **/

#include <iostream>

using namespace std;

int first_occurence(int *a, int n, int key) {
  // base case
  if (n == 0) {
    return -1;
  }

  // recursive cases
  if (a[0] == key) {
    return 0;
  }

  int i = first_occurence(a + 1, n - 1, key);
  if (i == -1) {
    return -1;
  }
  return i + 1;
}

int last_occurence(int *a, int n, int key) {
  // base case
  if (n == 0) {
    return -1;
  }

  int i = last_occurence(a + 1, n - 1, key);
  if (i == -1) {
    if (a[0] == key) {
      return 0;
    } else {
      return -1;
    }
  }
  return i + 1;
}

int main() {
  int a[] = {1, 2, 3, 4, 7, 9, 6, 7, 5, 8};
  int key = 7;
  int n = sizeof(a) / sizeof(a[0]);

  cout << first_occurence(a, n, key) << endl;
  cout << last_occurence(a, n, key) << endl;

  return 0;
}
