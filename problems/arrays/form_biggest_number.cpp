/**
 * Given an array of numbers. You need to arrange them in a way that yields the
 * largest value.
 **/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// comaprator for inbuilt sort algorithm
bool compare(int a, int b) {
  string x = to_string(a);
  string y = to_string(b);
  return (x + y) > (y + x);
}

string form_biggest_number(vector<int> nums) {
  // sorting the vector
  sort(nums.begin(), nums.end(), compare);
  // Flag is 0 if nums vector contains only zeros else 1
  int flag = 0;

  // edge case check
  for (int i = 0; i < nums.size(); i++) {
    // Check If nums array contain other than zeros and update flag
    if (nums[i] != 0) {
      flag = 1;
      break;
    }
  }

  // If nums vector contain numbers other than zero
  if (flag) {
    string s = "";
    for (int i = 0; i < nums.size(); i++) {
      s += to_string(nums[i]);
    }
    return s;
  } else {
    // else nums vector contains only zeros
    return "0";
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  cout << form_biggest_number(nums) << endl;

  return 0;
}
