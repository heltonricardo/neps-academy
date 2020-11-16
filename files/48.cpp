#include <iostream>

using namespace std;

int main(void) {
  int s = 0, m = 0, v;
  short i, n;

  cin >> n;
  for (i = 0; i < n; ++i) {
    cin >> v;
    s += v;
    if (not m and 1000000 <= s)
      m = i + 1;
  }
  cout << m << endl;
  return 0;
}

