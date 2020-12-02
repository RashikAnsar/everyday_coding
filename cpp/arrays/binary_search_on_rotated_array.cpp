// Apply Binary search on sorted rotated array
// [1,2,3,4,5] => [4,5,1,2,3]
#include <iostream>

using namespace std;

int find(int a[], int n, int key) {
  int start = 0;
  int end = n - 1;
  while (start <= end) {
    int mid = (start + end) / 2;
    if (a[mid] == key) {
      return mid;
    } else if (a[start] <= a[mid]) {
      if (key >= a[start] and key <= a[mid]) {
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    } else {
      if (key >= a[mid] and key <= a[end]) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
  }
  return -1;
}

int main() {
  int n, key;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> key;

  int idx = find(a, n, key);
  if (idx == -1) {
    cout << "ELEMENT NOT FOUND\n";
  } else {
    cout << "Element is at index: " << idx << endl;
  }

  return 0;
}