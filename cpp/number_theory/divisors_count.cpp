#include <iostream>
#include <vector>

using namespace std;

vector<int> prime_sieve(int *p, int n) {
  p[0] = p[1] = 0;
  p[2] = 1;

  // (Initialize ) Mark all odd as prime
  for (int i = 3; i <= n; i += 2) {
    p[i] = 1;
  }

  for (int i = 0; i <= n; i += 2) {
    if (p[i]) {
      for (int j = i * i; j <= n; j += 2 * i) {
        p[j] = 0;
      }
    }
  }

  vector<int> primes;
  primes.push_back(2);

  for (int i = 3; i <= n; i += 2) {
    if (p[i] == 1) {
      primes.push_back(i);
    }
  }

  return primes;
}

int number_of_divisors(int m, vector<int> &primes) {
  int i = 0;
  int p = primes[0];
  int ans = 1;

  while (p * p <= m) {
    if (m % p == 0) {
      int count = 0;
      while (m % p == 0) {
        count++;
        m = m / p;
      }
      ans = ans * (count + 1);
    }
    i++;
    p = primes[i];
  }

  if (m != 1) {
    ans = ans * 2;
  }

  return ans;
}

int main() {
  int N = 1000000;
  int p[N] = {0};
  vector<int> primes = prime_sieve(p, 100);

  int t;
  cin >> t;

  while (t--) {
    int num;
    cin >> num;
    int count = number_of_divisors(num, primes);

    cout << num << "\t" << count << endl;
  }
  return 0;
}
