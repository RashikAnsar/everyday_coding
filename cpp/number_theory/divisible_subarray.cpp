#include <cstring>
#include <iostream>

using namespace std;

long a[1000005], pre[1000005];

int main() {
  int n, sum = 0;
  cin >> n;

  memset(pre, 0, sizeof(pre));

  pre[0] = 1;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    sum %= n;
    sum = (sum + n) % n;
    pre[sum]++;
  }

  long ans = 0;
  for (int i = 0; i < n; i++) {
    long m = pre[i];
    ans += m * (m - 1) / 2;
  }

  cout << ans << endl;

  return 0;
}
