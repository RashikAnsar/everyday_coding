#include <climits>
#include <iostream>

using namespace std;

int profit(int N, int C, int *wt, int *prices) {
  if (N == 0 || C == 0) {
    return 0;
  }

  int ans = 0;
  int inc, exc;
  inc = exc = INT_MIN;

  if (wt[N - 1] <= C) {
    inc = prices[N - 1] + profit(N - 1, C - wt[N - 1], wt, prices);
  }

  exc = profit(N - 1, C, wt, prices);

  ans = max(inc, exc);
  return ans;
}

int main() {
  int weights[] = {1, 2, 3, 5};
  int prices[] = {40, 20, 30, 100};

  int n = 4;
  int c = 7;

  cout << profit(n, c, weights, prices) << endl;
  return 0;
}
