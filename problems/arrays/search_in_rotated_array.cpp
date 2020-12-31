/***
 * Given an array sorted in ascending order is rotated at some pivot unknown to
 * you beforehand. (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]). You are
 * given a target value to search. If found in the array return its index,
 * otherwise return -1.
 *
 * Note:You may assume no duplicate exists in the array.
 ***/

#include <iostream>
#include <vector>

using namespace std;

int search_target(vector<int> &v, int target) {
  int n = v.size();
  int l = 0, r = n - 1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (target == v[mid]) {
      return mid;
    }

    if (v[mid] > v[n - 1]) {
      if (target < v[0] || target > v[mid]) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    } else {
      if (target > v[n - 1] || target < v[mid]) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
  }

  return -1;
}

int main() {
  int n, target;
  cin >> n;

  vector<int> nums(n);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  cin >> target;

  cout << search_target(nums, target) << endl;

  return 0;
}
