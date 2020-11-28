// Print "lowercase" if user enters a character between 'a-z' , Print
// "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other
// characters like $,.^# etc.

#include <iostream>

using namespace std;

int main() {
  char c;
  cin >> c;

  if (c >= 'a' and c <= 'z') {
    cout << "lowercase" << endl;
  } else if (c >= 'A' and c <= 'Z') {
    cout << "UPPERCASE" << endl;
  } else {
    cout << "Invalid" << endl;
  }

  return 0;
}