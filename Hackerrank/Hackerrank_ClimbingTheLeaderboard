#include <stack>
#include <iostream>
using namespace std;

int main(){
  unsigned long n, m, i, tmp;
  cin >> n;
  stack<unsigned long> scores;
  for (i = 0; i < n; ++i) {
    cin >> tmp;
    if (scores.empty() || scores.top() != tmp) scores.push(tmp);
  }
  cin >> m;
  for (i = 0; i < m; ++i) {
    cin >> tmp;
    while (!scores.empty() && tmp >= scores.top()) scores.pop();
    cout << (scores.size() + 1) << endl;
  }
  return 0;
}
