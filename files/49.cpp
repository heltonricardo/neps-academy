#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(void) {
  int *v, n, i;

  cin >> n;
  v = (int *) malloc(n * sizeof(int));

  for (i = 0; i < n; ++i) {
    cin >> v[i];
    if (v[i] == -1) v[i] = 10;
  }

  for (i = 1; i < n; ++i)
    v[i] = min(min(v[i], v[i-1]+1), 9);

  for (i = n - 2; 0 <= i; --i)
    v[i] = min(min(v[i], v[i+1]+1), 9);

  for (i = 0; i < n; ++i) {
    cout << v[i];
    if (i != n - 1)
      cout << " ";
  }

  free(v);
  return 0;
}

