#include <iostream>

using namespace std;

int main(void) {
  short n, m = 1, i, k = 1;
  int v, a;
  cin >> n;
  cin >> a;
  for (i = 1; i < n; ++i) {
    cin >> v;
    if (v == a) m++;
    else {
      a = v;
      m = 1;
    }
    if (m > k) k = m;
  }
  cout << k << endl;
  return 0;
}
