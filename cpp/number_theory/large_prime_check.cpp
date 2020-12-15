#include <bitset>
#include <iostream>
#include <vector>

using namespace std;

const int n = 10000000;
bitset<10000005> b;
vector<int> primes;

void sieve() {
  // set all bits
  b.set();

  b[0] = b[1] = 0;

  for (long long int i = 2; i <= n; i++) {
    if (b[i]) {
      primes.push_back(i);
      for (long long int j = i * i; j <= n; j = j + i) {
        b[j] = 0;
      }
    }
  }
}

bool is_prime(long long num) {
  if (num <= n) {
    return b[num] == 1 ? true : false;
  }

  for (long long int i = 0; primes[i] * (long long)primes[i] <= num; i++) {
    if (num % primes[i] == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  sieve();

  cout << boolalpha << is_prime(2147483647) << endl;  // True
  cout << boolalpha << is_prime(7894563211) << endl;  // False

  return 0;
}
