#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void) {
  int n, i, *v;

  cin >> n;
  v = (int *) malloc(n * sizeof(int));

  for (i = 0; i < n; ++i)
    cin >> v[i];

  sort(v, v+n);

  for (i = 0; i < n; ++i)
    cout << v[i] << " ";

  cout << endl;
  free(v);
  return 0;
}

