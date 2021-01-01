#include <iostream>

using namespace std;

int main(void) {
  char op;
  double a, b, m, r;

  cin >> m >> a >> op >> b;

  if (op == '+')
    r = a + b;
  else
    r = a * b;

  if (r <= m) cout << "OK" << endl;
  else cout << "OVERFLOW" << endl;
  return 0;
}


