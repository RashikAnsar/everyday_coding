// Using climits for INT_MIN and INT_MAX macros
#include <climits>
#include <iostream>

using namespace std;

int main() {
  int n, key;
  int largest = INT_MIN;   // -Infinity
  int smallest = INT_MAX;  // + Infinity

  cout << "Number of elements in array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // finding largest and smallest elements of the array
  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
    if (arr[i] < smallest) {
      smallest = arr[i];
    }
    //   Using built-in max and min functions
    // largest = max(largest, arr[i]);
    // smallest = min(smallest, arr[i]);
  }

  cout << "Largest: " << largest << endl;
  cout << "Smallest: " << smallest << endl;

  return 0;
}