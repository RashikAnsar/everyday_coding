/**
 * Given N, friends who want to go to a party on bikes. Each guy can go as a
 *single or as a couple. Find the number of way in which N friends can go to
 *party.
 *
 **/

#include <iostream>

using namespace std;

int f(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  if (n == 2) {
    return 2;
  }

  return f(n - 1) + (n - 1) * f(n - 2);
}

int main() {
  int n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}
