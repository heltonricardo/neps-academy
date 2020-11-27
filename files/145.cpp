#include <iostream>

using namespace std;

int main(void) {
  short n;
  cin >> n;
  if (n > 0) cout << "positivo";
  else if (n < 0) cout << "negativo";
  else cout << "nulo";
  cout << endl;
  return 0;
}

