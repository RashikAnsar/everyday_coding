#include <iostream>

using namespace std;

void calculate(int a[], int b[], int n, int m) {
  int sum[n];

  int i = n - 1, j = m - 1, k = n - 1;

  int carry = 0, s = 0;

  while (j >= 0) {
    s = a[i] + b[j] + carry;
    sum[k] = (s % 10);

    carry = s / 10;

    k--;
    i--;
    j--;
  }

  while (i >= 0) {
    s = a[i] + carry;
    sum[k] = (s % 10);
    carry = s / 10;

    i--;
    k--;
  }

  int ans = 0;

  if (carry) cout << carry << ", ";

  for (int i = 0; i <= n - 1; i++) {
    cout << sum[i] << ", ";
  }
  cout << "END";
}

void compare(int a[], int b[], int n, int m) {
  if (n >= m)
    calculate(a, b, n, m);
  else
    calculate(b, a, m, n);
}

int main() {
  int a[10001], b[10001];
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  compare(a, b, n, m);

  return 0;
}
