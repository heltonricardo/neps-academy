#include <iostream>

using namespace std;

int main(void) {
  short v[50];
  short n, i, c;

  cin >> n;
  for (i = 0; i < n; ++i)
    cin >> v[i];

  for (i = 0; i < n; ++i) {
    c = 0;
    if (0 < i and v[i-1] == 1)
      ++c;
    if (v[i] == 1)
      ++c;
    if (i < n-1 and v[i+1] == 1)
      ++c;
    cout << c << endl;
  }
  return 0;
}

