#include <iostream>

using namespace std;

int main(void) {
  short n, i, c;
  string a, b;

  cin >> n >> a >> b;

  for (i = c = 0; i <n; ++i)
    if (a[i] == b[i])
      ++c;

  cout << c << endl;
  return 0;
}

