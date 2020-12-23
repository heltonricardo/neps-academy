#include <iostream>

using namespace std;

int main(void) {
  short n, i, j, len;
  short v[10] = {0};
  string e;

  cin >> n;
  for (i = 0; i < n; ++i) {
    cin >> e;
    len = e.size();
    for (j = 0; j < len; ++j)
      ++v[e[j]-48];
  }

  for (i = 0; i < 10; ++i)
    cout << i << " - " << v[i] << endl;
  return 0;
}

