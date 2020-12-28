#include <iostream>

using namespace std;

int main(void) {
  int n, i;

  cin >> n;

  for (i = 1; i <= n; ++i) {
    if (i != 1) {
      if (n % i == 0)
        cout << " " << i;
    }
    else cout << "1";
  }

  cout << endl;
  return 0;
}

