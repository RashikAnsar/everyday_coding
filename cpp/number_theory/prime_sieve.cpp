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
  int n;
  cin >> n;

  int p[1000005] = {0};
  prime_sieve(p);

  for (int i = 0; i <= n; i++) {
    if (p[i] == 1) {
      cout << i << " ";
    }
  }

  return 0;
}
