#include <iostream>

using namespace std;

int main(void) {
  string e, t;
  short i, len;
  char flag = 'S';

  cin >> e;
  len = e.size();

  for (i = 0; i < len; ++i)
    if (e[i] == 'a' or e[i] == 'e' or e[i] == 'i' or e[i] == 'o' or e[i] == 'u')
      t += e[i];

  len = t.size();
  for (i = 0; i < len; ++i)
    if (t[i] != t[len-1-i])
      flag = 'N';

  cout << flag << endl;
  return 0;
}

