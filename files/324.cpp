#include <iostream>

using namespace std;

int main(void) {
  short n, a, c, i, q = 0;
  cin >> n;
  for (i = 0; i < n; ++i) {
    cin >> a >> c;
    if (a > c)
      q += c;
  }
  cout << q << endl;
  return 0;
}
