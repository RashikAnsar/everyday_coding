/***
 * You are given an array which contains elements equal to only 0 or 1.
 * Your task is to find out the maximum length of the subarray which contains
 * equal number of zeroes' and one's1
 * **/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int balanced_subarray(vector<int>& nums) {
  int res = 0, count = 0;
  unordered_map<int, int> map;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 0)
      count--;
    else
      count++;

    if (count == 0)
      res = i + 1;
    else if (map.find(count) != map.end()) {
      res = max(res, i - map[count]);
    } else
      map[count] = i;
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  cout << balanced_subarray(v) << endl;

  return 0;
}
