#include <iostream>

using namespace std;

char spellings[][10] = {"zero", "one", "two",   "three", "four",
                        "five", "six", "seven", "eight", "nine"};

void print_spellings(int n) {
  if (n == 0) {
    return;
  }

  print_spellings(n / 10);
  int digit = n % 10;
  cout << spellings[digit] << " ";
  return;
}

int main() {
  //
  int n;
  cin >> n;
  print_spellings(n);
  return 0;
}
