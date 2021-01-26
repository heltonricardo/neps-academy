#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void) {
  int n, i, *v, *s, c = 0;
  stringstream r;

  cin >> n;
  v = (int *) malloc(n * sizeof(int));
  s = (int *) malloc(n * sizeof(int));

  for (i = 0; i < n; ++i) {
    cin >> v[i];
    s[i] = v[i];
  }

  sort(v, v+n);

  for (i = 0; i < n; ++i)
    if (v[i] != s[i]) {
      r << v[i] << " ";
      ++c;
    }

  cout << c << endl;
  cout << r.str() << endl;
  free(v);
  free(s);
  return 0;
}

