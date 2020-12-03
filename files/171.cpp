#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
  double x, y;
  cout << fixed << setprecision(4);

  cin >> x >> y;
  cout << pow(x, y) << endl;

  return 0;
}

