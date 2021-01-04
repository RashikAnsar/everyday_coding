/**
 * Given an array having n elements representing balls of various colours like
 * red, white or blue, sort them in-place so that balls of the same colour are
 * adjacent, with the colours in the order red, white and blue.
 *
 * To represent the colour red, white, and blue we will use the integers 0, 1,
 * and 2 respectively.
 *
 * Note:You are not suppose to use the sort function for this problem.
 **/
#include <iostream>

using namespace std;

void linear_time_sort(int arr[], int n) {
  int current = 0, left = 0, right = n - 1;

  while (current <= right) {
    if (arr[current] == 0) {
      int temp = arr[current];
      arr[current] = arr[left];
      arr[left] = temp;
      current++;
      left++;
    } else if (arr[current] == 2) {
      int temp = arr[current];
      arr[current] = arr[right];
      arr[right] = temp;
      // current++;
      right--;
    } else {
      current++;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  linear_time_sort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
