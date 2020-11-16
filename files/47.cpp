#include <iostream>

using namespace std;

int main(void) {
  short n, i, v, c = 0, s = 1;

  cin >> n;

  for (i = 0; i < n; ++i) {
    cin >> v;
    if (v == 1 and s == 1)
      s = 2;
    else if (v == 0 and s == 2)
      s = 3;
    else if (v == 0 and s == 3) {
      s = 1;
      ++c;
    }
    else if (v == 1) s = 2;
    else s = 1;
  }
  cout << c << endl;
  return 0;
}
