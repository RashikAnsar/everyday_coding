/**
 * Suppose an array sorted in ascending order is rotated at some pivot unknown
 * to you beforehand. (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).
 *
 * Find the minimum element.
 *
 * You may assume no duplicate exists in the array.
 **/

#include <iostream>
#include <vector>

using namespace std;

int find_min(vector<int>& nums) {
  int n = nums.size();
  if (nums[0] <= nums[n - 1]) {
    return nums[0];
  }
  int l = 0, r = n - 1;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (mid - 1 >= 0 && nums[mid] < nums[mid - 1]) {
      return nums[mid];
    } else if (nums[mid] > nums[n - 1]) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return -1;
}

int main() {
  int n;
  cin >> n;

  vector<int> nums;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    nums.push_back(num);
  }
  cout << find_min(nums) << endl;
}
