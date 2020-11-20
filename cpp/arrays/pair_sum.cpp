// Given an array find the pair of elements that sum to K (Given)
#include <iostream>

using namespace std;

int main() {
  int n, key;
  cout << "Number of elements in array: ";
  cin >> n;

  int arr[n];
  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Enter target sum: ";
  cin >> key;

  // Two pointers pointing to two ends
  int i = 0;
  int j = n - 1;

  while (i < j) {
    int current_sum = arr[i] + arr[j];
    if (current_sum > key) {
      j--;
    } else if (current_sum < key) {
      i++;
    } else if (current_sum == key) {
      cout << arr[i] << " and " << arr[j] << endl;
      i++;
      j--;
    }
  }
}