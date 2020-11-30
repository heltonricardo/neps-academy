#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
  short n, i;
  double x;
  cout << fixed << setprecision(4);

  cin >> n;

  for (i = 0; i < n; ++i) {
    cin >> x;
    cout << sqrt(x) << endl;
  }

  return 0;
}

