/***
 *
 * Write a function to find the longest common prefix string amongst an array of
 * strings.
 * If there is no common prefix, return an empty string "".
 *
 * CONSTRAINT : length of strings is less than 1e5
 **/
#include <iostream>
#include <vector>

using namespace std;

string longest_common_prefix(vector<string>& strs) {
  if (strs.empty() == 1) {
    return "";
  }

  int min = strs[0].length();
  for (int i = 1; i < strs.size(); i++) {
    if (min > strs[i].length()) {
      min = strs[i].length();
    }
    for (int j = 0; j < min; j++) {
      if (strs[i][j] != strs[i - 1][j]) {
        min = j;
        break;
      }
    }
  }
  return strs[0].substr(0, min);
}

int main() {
  int n;
  cin >> n;
  vector<string> s(n);

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  cout << longest_common_prefix(s) << endl;

  return 0;
}
