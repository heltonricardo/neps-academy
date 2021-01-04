#include <iostream>

using namespace std;

int main(void) {
  short m, n, i, j;
  short sl[10] = {0}, sc[10] = {0}, dp = 0, ds = 0;
  bool eql = false;

  cin >> n;

  for (i = 0; i < n; ++i)
    for (j = 0; j < n; ++j) {
      cin >> m;
      sl[i] += m;
      sc[j] += m;
      if (i == j) dp += m;
      if (i + j == n - 1) ds += m;
    }

  if (dp == ds) {
    eql = true;
    for (i = 0; i < n; ++i)
      if (dp != sl[i])
        eql = false;
    for (i = 0; i < n; ++i)
      if (dp != sc[i])
        eql = false;
  }

  if (eql) cout << dp << endl;
  else cout << "-1" << endl;
  return 0;
}

