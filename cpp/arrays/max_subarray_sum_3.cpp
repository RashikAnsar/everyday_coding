// Kadane's Algorithm
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

  int currentSum = 0;
  int maximumSum = 0;

  //   Kadanes algorithm
  for (int i = 0; i < n; i++) {
    currentSum = currentSum + arr[i];
    if (currentSum < 0) {
      currentSum = 0;
    }
    maximumSum = max(currentSum, maximumSum);
  }

  cout << "Maximum Sum is: " << maximumSum << endl;

  return 0;
}