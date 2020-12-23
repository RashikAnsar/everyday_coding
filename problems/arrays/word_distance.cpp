/**
 * Given a list of words and two words word1 and word2, return the shortest
 *distance between these two words in the list
 *
 * Note : You may assume that word1 does not equal to word2, and word1 and word2
 *are both in the list.
 ***/

#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int shortest_distance(vector<string>& words, string word1, string word2) {
  int dist = INT_MAX;
  for (int i = 0, index1 = -1, index2 = -1; i < words.size(); ++i) {
    if (words[i] == word1) {
      index1 = i;
    } else if (words[i] == word2) {
      index2 = i;
    }
    if (index1 != -1 && index2 != -1) {
      dist = min(dist, abs(index1 - index2));
    }
  }
  return dist;
}

int main() {
  int n;
  cin >> n;
  vector<string> words(n);

  string word1;
  string word2;

  for (int i = 0; i < n; i++) {
    cin >> words[i];
  }

  cin >> word1 >> word2;

  cout << shortest_distance(words, word1, word2) << endl;
  return 0;
}
