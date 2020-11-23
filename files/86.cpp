#include <iostream>

using namespace std;

int main(void) {
  float a, b;
  cin >> a >> b;
  a = (a + b) / 2.0;
  if (7 <= a)
    cout << "Aprovado";
  else if (4 <= a)
    cout << "Recuperacao";
  else
    cout << "Reprovado";
  cout << endl;
  return 0;
}

