#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
  char op;
  double a, b;
  cout << fixed << setprecision(2);

  cin >> op >> a >> b;

  if (op == 'M')
    cout << a * b << endl;
  else
    cout << a / b << endl;
  return 0;
}

