// Better than old solution
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Number of elements in array: ";
  cin >> n;

  int arr[n];
  int cumSum[n] = {0};
  cout << "Enter the elements of array: ";
  // Take first element of array
  cin >> arr[0];
  cumSum[0] = arr[0];

  for (int i = 1; i < n; i++) {
    cin >> arr[i];
    cumSum[i] = cumSum[i - 1] + arr[i];
  }

  int maximumSum = 0;
  int currentSum = 0;
  int left = -1;
  int right = -1;

  //   Two for loops
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      currentSum = cumSum[j] - cumSum[i - 1];

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
