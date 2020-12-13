// Find out the number of numbers between 1 and n which are divisible by any of
// the prime numbers less than 20

#include <iostream>
#define ll long long

using namespace std;

int main() {
  ll t;
  cin >> t;

  ll primes[] = {2, 3, 5, 7, 11, 13, 17, 19};

  while (t--) {
    ll n;
    cin >> n;

    ll subsets = (1 << 8) - 1;
    ll ans = 0;

    for (ll i = 1; i <= subsets; i++) {
      ll denominator = 1ll;
      ll setBits = __builtin_popcount(i);

      for (ll j = 0; j <= 7; j++) {
        if (i & (1 << j)) {
          denominator = denominator * primes[j];
        }
      }
      if (setBits & 1) {
        ans += n / denominator;
      } else {
        ans -= n / denominator;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
