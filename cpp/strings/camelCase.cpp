// One of the important aspect of object oriented programming is readability of
// the code. To enhance the readability of code, developers write function and
// variable names in Camel Case. You are given a string, S, written in Camel
// Case. FindAllTheWordsContainedInIt.

#include <iostream>
#include <string>

using namespace std;

int main() {
  string S;
  cin >> S;
  int len = S.length();
  int i = 0;
  for (int i = 0; i < len; i++) {
    if (i == 0 && S[i] >= 'A' && S[i] <= 'Z') {
      cout << S[i];
    } else if (S[i] >= 'a' && S[i] <= 'z') {
      cout << S[i];
    } else if (S[i] >= 'A' && S[i] <= 'Z') {
      cout << endl;
      cout << S[i];
    }
  }
  return 0;
}
