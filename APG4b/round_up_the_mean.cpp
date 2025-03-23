#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  int sum = a + b;
  int round_up;

  if((sum % 2) == 0) round_up = sum / 2;
  else round_up = sum / 2 + 1;

  cout << round_up << endl;

  return 0;

}
