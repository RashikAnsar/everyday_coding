#include <cstring>
#include <iostream>

using namespace std;

// Find subsequences or subsets of a given string
// INPUT: "abc"
// OUTPUT: "", a, b, c, ab, ac, b, bc, abc

void filter_chars(int n, char c[]) {
  int j = 0;

  while (n > 0) {
    int last_bit = (n & 1);
    if (last_bit) {
      cout << c[j];
    }
    j++;
    n = n >> 1;
  }
  cout << endl;
}

void print_subsets(char c[]) {
  int n = strlen(c);
  for (int i = 0; i < (1 << n); i++) {
    filter_chars(i, c);
  }
}

int main() {
  char c[100];
  cin >> c;
  print_subsets(c);
  return 0;
}
