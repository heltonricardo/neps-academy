#include <iostream>

using namespace std;

int main(void) {
  short p1, c1, p2, c2;

  cin >> p1 >> c1 >> p2 >> c2;

  if (p1 * c1 > p2 * c2) cout << "-1";
  else if (p1 * c1 < p2 * c2) cout << "1";
  else cout << "0";
  cout << endl;

  return 0;
}
