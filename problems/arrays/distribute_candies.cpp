/***
 * Given an integer array with even length, where different numbers in this
 *array represent different kinds of candies. Each number means one candy of the
 *corresponding kind. You need to distribute these candies equally in number to
 *brother and sister. Print the maximum number of kinds of candies the sister
 *could gain.
 ***/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int distribute_candies(vector<int>& candies) {
  unordered_map<int, int> m;
  int count = 0;
  for (int i = 0; i < candies.size(); i++) {
    if (m.find(candies[i]) == m.end()) {
      m.insert({candies[i], 1});
      count++;
    } else {
      m[candies[i]]++;
    }
  }
  int ans = count < candies.size() / 2 ? count : candies.size() / 2;
  return ans;
}

int main() {
  int n, temp;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }

  cout << distribute_candies(v) << endl;

  return 0;
}
