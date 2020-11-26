// You are provided an array of numbers. You need to
// arrange them in a way that yields the largest value.
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s[j] + s[i] > s[i] + s[j]) {
        string b = s[j];
        s[j] = s[i];
        s[i] = b;
      }
    }
  }
  for (int i = 0; i < n; i++) cout << s[i];
  cout << endl;
  return 0;
}
