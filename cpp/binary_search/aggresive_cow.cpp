// Question From: https://www.spoj.com/problems/AGGRCOW/
#include <iostream>

using namespace std;
bool canPlaceCows(int stalls[], int n, int c, int min_sep) {
  int last_cow = stalls[0];
  int count = 1;

  for (int i = 0; i < n; i++) {
    if (stalls[i] - last_cow >= min_sep) {
      last_cow = stalls[i];
      count++;
      if (count == c) {
        return true;
      }
    }
  }
  return false;
};

int main() {
  int stalls[] = {1, 2, 4, 8, 9};
  int n = 5;
  int cows = 3;

  int start = 0;
  int end = stalls[n - 1] - stalls[0];
  int ans = 0;

  while (start <= end) {
    int mid = (start + end) / 2;
    bool areCowsPlaced = canPlaceCows(stalls, n, cows, mid);

    if (areCowsPlaced) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  cout << ans << endl;

  return 0;
}