// NOT OPTIMAL SOLUTION
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Number of elements in array: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int maximumSum = 0;
  int currentSum = 0;
  int left = -1;
  int right = -1;

  //   Three for loops
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      currentSum = 0;
      for (int k = i; k <= j; k++) {
        currentSum += arr[k];
      }
      //   update maximumSum if currentSum < maximumSum
      if (currentSum > maximumSum) {
        maximumSum = currentSum;
        left = i;
        right = j;
      }
    }
  }

  cout << "Maximum sum is: " << maximumSum << endl;

  //   print the subarray
  for (int i = left; i <= right; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;

  return 0;
}