// Remove duplicate characters from a string

#include <cstring>
#include <iostream>

using namespace std;

void remove_duplicates(char a[]) {
  int l = strlen(a);
  if (l == 0 or l == 1) {
    return;
  }
  int prev = 0;
  for (int current = 1; current < l; current++) {
    if (a[current] != a[prev]) {
      prev++;
      a[prev] = a[current];
    }
  }
  a[prev + 1] = '\0';
  return;
}

int main() {
  char a[100];
  cout << "Enter a string: ";
  cin.getline(a, 100);

  remove_duplicates(a);
  cout << "After removing duplicate characters: " << a << endl;

  return 0;
}