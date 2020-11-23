#include <iostream>

using namespace std;

int main(void) {
  short r, p;
  cin >> p >> r;
  if (p)
    if (r) cout << "A";
    else cout << "B";
  else cout << "C";
  cout << endl;
  return 0;
}

