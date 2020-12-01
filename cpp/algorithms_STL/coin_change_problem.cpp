// Coin change problem
#include <algorithm>
#include <iostream>

using namespace std;

// custom compare function to pass into lower_bound()
bool compare(int a, int b) { return a <= b; }

int main() {
  int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
  int money = 227;

  int n = sizeof(coins) / sizeof(int);

  while (money) {
    int lb = lower_bound(coins, coins + n, money, compare) - coins - 1;
    int m = coins[lb];
    cout << m << ", ";
    money -= m;
  }
}