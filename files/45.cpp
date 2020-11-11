#include <iostream>

using namespace std;

int main(void) {
  short m[1000][1000], n, i, j;
  int sl[1000] = {0}, sc[1000] = {0}, s, a;
  bool eql = false;

  cin >> n;

  for (i = 0; i < n; ++i)
    for (j = 0; j < n; ++j) {
      cin >> m[i][j];
      sl[i] += m[i][j];
      sc[j] += m[i][j];
    }

  s = 0;
  for (i = 0; i < n; ++i)
    for (j = 0; j < n; ++j) {
      a = sl[i] + sc[j] - 2 * m[i][j];
      if (s < a) s = a;
    }

  cout << s << endl;
  return 0;
}


