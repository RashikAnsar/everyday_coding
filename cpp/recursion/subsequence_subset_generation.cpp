// Given a string containing n characters find out all the subsets of that
// string
// NOTE: Subset/subsequence is different from sub-array
#include <iostream>

using namespace std;

void generate_subsequence(char *in, char *out, int i, int j) {
  // base case
  if (in[i] == '\0') {
    out[j] = '\0';
    cout << out << endl;
    return;
  }

  // recursion
  out[j] = in[i];
  // include the current char
  generate_subsequence(in, out, i + 1, j + 1);
  // exclude the current char
  generate_subsequence(in, out, i + 1, j);
}

int main() {
  char input[] = "abc";
  char output[10];

  generate_subsequence(input, output, 0, 0);

  return 0;
}
