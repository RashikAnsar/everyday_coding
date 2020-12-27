/**
 * Given a sorted array of integers where every element appears exactly twice,
 * except for one element which appears exactly once. Find this single element
 * that appears only once.
 *
 * Note: Your solution should run in O(log n) time and O(1) space.
 **/

#include <iostream>

using namespace std;

int single_non_duplicate(int nums[], int n) {
  int l = 0;
  int r = n - 1;

  while (l < r) {
    int mid = l + (r - l) / 2;
    if (nums[mid] == nums[mid - 1]) {
      if ((mid - l + 1) % 2 == 0) {
        l = mid + 1;
      } else {
        r = mid;
      }
    } else if (nums[mid] == nums[mid + 1]) {
      if ((r - mid + 1) % 2 == 0) {
        r = mid - 1;

      } else {
        l = mid;
      }
    } else {
      return nums[mid];
    }
  }

  return nums[l];
}

int main() {
  int v[] = {1, 1, 3, 3, 4, 4, 7, 8, 8};
  int n = sizeof(v) / sizeof(v[0]);

  cout << single_non_duplicate(v, n) << endl;

  return 0;
}
