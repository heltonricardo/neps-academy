#include <iostream>

using namespace std;

int main(void) {
  short a, b;
  cin >> a >> b;
  if (a + b <= 50) cout << "S";
  else cout << "N";
  cout << endl;
  return 0;
}
