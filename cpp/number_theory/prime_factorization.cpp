#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int> > prime_factors(int n) {
  int count;
  vector<pair<int, int> > factors;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      count = 0;
      while (n % i == 0) {
        count++;
        n = n / i;
      }
      factors.push_back(make_pair(i, count));
    }
  }
  if (n != 1) {
    factors.push_back(make_pair(n, 1));
  }

  return factors;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int> > factors = prime_factors(n);

  for (auto p : factors) {
    cout << p.first << "^" << p.second << endl;
  }
}
