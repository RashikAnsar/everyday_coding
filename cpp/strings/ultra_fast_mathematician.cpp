/**
 * SAMPLE INPUT:
 * 1
 * 10111 10000
 * SAMPLE OUTPUT:
 * 00111
 **/

#include <iostream>

using namespace std;

int main() {
  // The first line contains an integer t
  int t;
  cin >> t;

  while (t--) {
    string s1, s2;
    // There are two inputs in each line
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
      if (s1[i] != s2[i]) {
        //  i-th digit of the answer is 1 if and only if the i-th digit of the
        //  two given numbers differ
        cout << '1';
      } else {
        // other case the i-th digit of the answer is 0.
        cout << '0';
      }
    }
    cout << endl;
  }
  return 0;
}