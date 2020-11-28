// Take as input S, a string. Write a function that returns the character with
// maximum frequency. Print the value returned.

#include <cstring>
#include <iostream>
#define ASCII_SIZE 256

using namespace std;

char max_freq(string s) {
  // frequecy of each character => array f
  int f[ASCII_SIZE] = {0};
  int max = 0;
  char output;

  for (int i = 0; i < s.length(); i++) {
    f[s[i]]++;
    if (max < f[s[i]]) {
      max = f[s[i]];
      output = s[i];
    }
  }
  return output;
}

int main() {
  string s;
  cin >> s;
  cout << max_freq(s) << endl;

  return 0;
}