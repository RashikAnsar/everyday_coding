/**
 * First line of the input contains an integer N denoting the number of
 *integers. Second line contains N space-separated integers. Third line contains
 *an integer X denoting the index(0-based) of the N integers which needs to be
 *deleted.
 *
 *
 * Your task is to print the N-1 integers in sorted order (ascending). Each
 *integer in a new line.
 *
 *
 * SAMPLE INPUT
 * 5
 * 10 5 2 3 10
 * 2
 *
 * SAMPLE OUTPUT
 * 3
 * 5
 * 10
 * 10
 ****/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;
  int a;
  int idx;

  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }
  cin >> idx;

  v.erase(v.begin() + idx);

  sort(v.begin(), v.end());

  for (auto x : v) {
    cout << x << endl;
  }

  return 0;
}