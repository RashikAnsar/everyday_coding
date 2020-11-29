// Given a string consisting of only 'a' and 'b' as the characters. perfectness
// of a string as the maximum length substring of equal characters. given a
// number k which denotes the maximum number of characters we can change. Find
// the maximum perfectness we can generate by changing no more than k
// characters.

// INPUT: The first line contains an integer denoting the value of K. The next
// line contains a string having only ‘a’ and ‘b’ as the characters.

// OUTPUT: A single integer denoting the maximum perfectness achievable.
#include <iostream>

using namespace std;

int main() {
  int k;
  cin >> k;
  string str;
  cin >> str;
  int ans = 0;
  int count[] = {0, 0};
  int l = 0;
  for (int r = 0; r < str.length(); r++) {
    char a = str[r];
    count[a - 'a']++;
    if (min(count[0], count[1]) > k) {
      count[str[l] - 'a']--;
      l++;
    } else
      ans++;
  }
  cout << ans;
  return 0;
}
