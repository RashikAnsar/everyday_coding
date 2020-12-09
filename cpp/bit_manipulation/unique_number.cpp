// Given a list of numbers where every number occurs twice except one, find that
// unique number.
#include <iostream>

using namespace std;

int main() {
  int n, num, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    ans = ans ^ num;
  }

  cout << ans << endl;

  return 0;
}
