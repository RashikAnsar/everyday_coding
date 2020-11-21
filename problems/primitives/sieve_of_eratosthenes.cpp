#include <iostream>

using namespace std;

const int Nmax = 100001;

bool isPrime[Nmax];

void sieveOfEratosthenes(int n) {
  for (int i = 2; i <= n; i++) {
    isPrime[i] = true;
  }
  for (int i = 2; i <= n / 2; i++) {
    if (isPrime[i]) {
      for (int j = i * 2; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }
}

int main() {
  sieveOfEratosthenes(100);
  for (int i = 0; i < 100; i++) {
    if (isPrime[i]) {
      cout << i << " ";
    }
  }

  return 0;
}