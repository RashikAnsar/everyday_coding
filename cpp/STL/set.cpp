/***
 * QUESTION: https://www.interviewbit.com/problems/set-and-multiset/
 * You will be given Q queries. Each query is one of the following three types:
 *
 * 1 x : Add an element x to the set.
 * 2 x : Delete an element x from the set. (If the number x is not present in
 * the set, then do nothing).
 * 3 x : If the number x is present in the set, then print "Yes"(without quotes)
 * else print "No"(without quotes
 *
 * After processing all queries, if the size of set is greater than 0, print
 * each element (sorted order) in the new line.
 * */

#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main() {
  // YOUR CODE GOES HERE
  // Please take input and print output to standard input/output (stdin/stdout)
  // E.g. 'cin' for input & 'cout' for output
  int iCount;
  set<int> ss;
  cin >> iCount;
  for (int i = 0; i < iCount; ++i) {
    int type, query;
    cin >> type >> query;
    switch (type) {
      case 1:
        ss.insert(query);
        break;
      case 2:
        ss.erase(query);
        break;
      case 3:
        cout << (ss.find(query) == ss.end() ? "No" : "Yes") << endl;
        break;
    }
  }

  if (ss.size()) {
    for (auto x : ss) {
      cout << x << endl;
    }
  }

  return 0;
}