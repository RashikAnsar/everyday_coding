#include <iostream>

using namespace std;

void linearSearch(int a[], int n, int key) {
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] == key) {
      cout << key << " found at index " << i << endl;
      break;
    }
  }
  if (i == n) {
    cout << key << " is not found\n";
  }
}

int main() {
  int n, key;
  cout << "Enter number of elements in array:\t";
  cin >> n;

  // create an array of size n
  int arr[n];

  cout << "Enter elements of array: \t";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Enter element to search: ";
  cin >> key;

  //  Search for the given key using linear search function
  linearSearch(arr, n, key);
  return 0;
}