/***
 * Given a string str, find the longest palindromic substring in str. You may
 * assume that the maximum length of s is 1000.
 *
 * constraint: 1 <= |s.length()| <= 1e3
 **/
#include <iostream>

using namespace std;

string longest_palindrome(string s) {
  // Manachar's Algorithm
  int n = s.size();
  int start = 0, maxLen = 1;
  for (int i = 0; i < n;) {
    int x = i - 1, y = i + 1;
    // for cases example waaw
    while (y < n && s[y] == s[i]) y++;
    i = y;
    // for cases such as waplilpaw
    while (x >= 0 && y < n && s[x] == s[y]) {
      x--;
      y++;
    }
    if (y - x - 1 > maxLen) {
      start = x + 1;
      maxLen = y - x - 1;
    }
  }
  return s.substr(start, maxLen);
}

int main() {
  string s = "asdfghjklmnbvcxz";
  cout << longest_palindrome(s) << endl;
  return 0;
}
