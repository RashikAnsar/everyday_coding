// Take as input S, a string. Write a function that does basic string
// compression. Print the value returned. E.g. for input “aaabbccds” print out
// a3b2c2d1s1

#include <iostream>

using namespace std;

void compress(string s) {
  int i = 0;
  int j = 1;
  int count = 1;
  while (s[i] != '\0') {
    if (s[i] == s[j]) {
      count++;
    } else {
      cout << s[i] << count;
      count = 1;
    }
    i++;
    j++;
  }
}

int main() {
  string S;
  cin >> S;
  compress(S);
  return 0;
}