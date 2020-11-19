#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Number of elements in array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // generate all sub-arrays [n!]
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      for (int k = i; k <= j; k++) {
        cout << arr[k] << ", ";
      }
      cout << endl;
    }
  }

  return 0;
}