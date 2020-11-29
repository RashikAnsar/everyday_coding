// Take as input S, a string. Write a program that inserts between each pair of
// characters the difference between their ascii codes and print the ans

#include <iostream>

using namespace std;

int main() {
  string S;
  cin >> S;
  int n = S.length() - 1;
  for (int i = 0; i < n; i++) {
    cout << S[i] << S[i + 1] - S[i];
  }
  cout << S[n] << endl;

  return 0;
}