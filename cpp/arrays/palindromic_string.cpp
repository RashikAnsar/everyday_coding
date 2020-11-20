#include <cstring>
#include <iostream>

using namespace std;

bool isPalindrome(char a[]) {
  int i = 0;
  int j = strlen(a) - 1;

  while (i < j) {
    //  If both are same move pointers else return false
    if (a[i] == a[j]) {
      i++;
      j--;
    } else {
      return false;
    }
  }
  return true;
}

int main() {
  char a[100];
  cout << "Enter a string: ";
  cin.getline(a, 100);

  if (isPalindrome(a)) {
    cout << "Palindromic string" << endl;
  } else {
    cout << "Not a Palindromic string" << endl;
  }

  return 0;
}