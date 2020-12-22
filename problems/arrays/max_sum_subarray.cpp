/**
 * You are given a one dimensional array that may contain both positive and
 *negative integers, find the sum of contiguous subarray of numbers which has
 *the largest sum.
 *
 **/

#include <iostream>

using namespace std;

int max_sum_subarray(int arr[], int n) {
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

  return maximumSum;
}

int main() {
  int n;
  cin >> n;
  int *arr = new int[n + 1];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << max_sum_subarray(arr, n) << endl;

  return 0;
}
