/**
 * Given an array of strings. Find a string s such that it is a concatenation of
 *sub-sequence of given array and have unique characters.
 *
 * A sub-sequence of an array is a set of elements that can be obtained by
 *deleting some elements(posssibly none) from the array and keeping the order
 *same.
 * Print the maximum possible length of s.
 **/

#include <climits>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fun(vector<string> v, int i, string s) {
  // base case
  if (i == v.size()) {
    if (s.length() > 26) {
      return 0;
    }
    int freq[26] = {0};
    for (int k = 0; k < s.length(); k++) {
      if (freq[s[k] - 'a'] == 1) {
        return 0;
      }
      freq[s[k] - 'a']++;
    }
    return s.length();
  }

  int op1, op2;
  op1 = op2 = INT_MIN;

  // include the ith string
  if (s.length() + v[i].length() <= 26) {
    op1 = fun(v, i + 1, s + v[i]);
  }
  // else exclude the ith string
  op2 = fun(v, i + 1, s);

  return max(op1, op2);
}

int unique_string(vector<string> v) {
  string s = "";
  return fun(v, 0, s);
}

int main() {
  vector<string> v;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }

  cout << unique_string(v) << endl;

  return 0;
}
