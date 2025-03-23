#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;

  cin >> N >> A;

  int cell = pow(N, 2);
  int black_cell;

  black_cell = cell - A;

  cout << black_cell << endl;

  return 0;

}
