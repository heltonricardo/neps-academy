#include <iostream>

using namespace std;

int main(void) {
  bool i1 = false, i2 = false;
  int n, i;
  short e;

  cin >> n;

  for (i = 0; i < n; ++i) {
    cin >> e;
    i1 = not i1;
    if (e == 2)
      i2 = not i2;
  }
  cout << int(i1) << endl;
  cout << int(i2) << endl;
  return 0;
}

