#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
  int n, c = 1;
  cout << fixed;

  while (cin >> n, n) {
    cout << "Teste " << c++ << endl;
    cout << int(pow(2, n)) - 1 << endl;
    cout << endl;
  }

  return 0;
}

