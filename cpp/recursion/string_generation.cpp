#include <iostream>

using namespace std;

void generate_strings(char *in, char *out, int i, int j) {
  if (in[i] == '\0') {
    out[j] = '\0';
    cout << out << endl;
    return;
  }

  int digit = in[i] - '0';
  char ch = digit + 'A' - 1;

  out[j] = ch;

  generate_strings(in, out, i + 1, j + 1);

  if (in[i + 1] != '\0') {
    int second_digit = in[i + 1] - '0';
    int num = digit * 10 + second_digit;
    if (num <= 26) {
      ch = num + 'A' - 1;
      out[j] = ch;
      generate_strings(in, out, i + 2, j + 1);
    }
  }

  return;
}

int main() {
  char a[100];
  cin >> a;

  char out[100];
  generate_strings(a, out, 0, 0);
  return 0;
}
