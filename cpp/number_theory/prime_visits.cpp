#include <iostream>

#define ll long long

using namespace std;

// Directly generate array contating primes
void prime_sieve(int *p) {
  // first mark all odd number's as prime
  for (int i = 3; i <= 1000000; i += 2) {
    p[i] = 1;
  }

  for (ll i = 3; i < 1000000; i += 2) {
    // If the current number is not marked then its prime
    if (p[i] == 1) {
      // Mark all the multiples of i as not prime
      for (ll j = i * i; j <= 1000000; j = j + i) {
        p[j] = 0;
      }
    }
  }
  // Special cases
  p[2] = 1;
  p[1] = p[0] = 0;
}

int main() {
  int p[1000005] = {0};
  prime_sieve(p);

  int csum[1000005] = {0};

  for (int i = 0; i < 1000000; i++) {
    csum[i] = csum[i - 1] + p[i];
  }

  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    cout << csum[b] - csum[a - 1] << endl;
  }

  return 0;
}
