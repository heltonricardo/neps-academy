#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void) {
  int n, m, i, v, c, q, d;

  cin >> n >> m;

  for (i = c = q = 0; i < n; ++i) {
    cin >> v;
    d = abs(v - m);
    if (c < d) {
      d -= c;
      q += d;
      c = d;
    }
    else c = 0;
  }

  cout << q << endl;

  return 0;
}

