#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
  // if both string lengths are equal then sort lexograpically
  if (a.length() == b.length()) {
    return a<b;
  }
  // else sort based on string length
  return a.length() < b.length();
}

int main() {
  int n;
  cout << "Number of strings you want to enter: ";
  cin >> n;
  // to read buffer \n
  cin.get();

  string s [100];
  for(int i = 0; i< n; i++ ) {
    getline(cin, s[i]);
  }

  cout << "-------- lexicographic sorting -----------" <<endl;
  sort(s, s+n);

  for (int i = 0; i < n; i++)
  {
    cout << s[i] <<endl;
  }

  cout << "------- sorting based on string length -------" <<endl;
  sort(s, s+n, compare);

  for (int i = 0; i < n; i++)
  {
    cout << s[i] <<endl;
  }
  

  return 0;
}