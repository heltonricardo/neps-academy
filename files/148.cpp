#include <iostream>

using namespace std;

int main(void) {
  short a, b;

  cin >> a >> b;

  if ((a + b) % 2 == 0)
    cout << "Bino";
  else
    cout << "Cino";

  cout << endl;
  return 0;
}

