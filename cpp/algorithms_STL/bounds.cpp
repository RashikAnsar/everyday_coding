#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int arr[] = {10, 15, 17, 17, 17, 35, 38, 48, 55};
  int n = sizeof(arr) / sizeof(int);
  int key = 17;

  // get the lower bound of element 17 occurence
  auto lb = lower_bound(arr, arr + n, key);
  cout << "Lower bound of element 17 occurence: " << lb - arr << endl;

  // if element doesn't  exist then
  if ((lb - arr) == n) {
    cout << "ELEMENT DOES NOT EXIST" << endl;
  }

  auto ub = upper_bound(arr, arr + n, key);
  cout << "Upper bound of element 17 occurence: " << ub - arr << endl;

  // If it's a sorted array then freqency of element occurene is
  // upper_bound-lower_bound
  cout << "Occurence Frequency of element 17: " << ub - lb << endl;

  return 0;
}