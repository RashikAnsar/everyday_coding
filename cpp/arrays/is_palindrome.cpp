// Take as input N, a number. Take N more inputs and store that in an array.
// Write a recursive function which tests if the array is a palindrome and
// returns a Boolean value. Print the value returned.

#include <iostream>

using namespace std;

bool isPalindrome(int a[], int n) {
  int i = 0, j = n - 1;

  while (i < j) {
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
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << boolalpha << isPalindrome(a, n) << endl;

  return 0;
}