#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct pais {
  short n, o, p, b;
};

bool ord(pais a, pais b) {
  if (a.o != b.o)
    return a.o > b.o;
  if (a.p != b.p)
    return a.p > b.p;
  if (a.b != b.b)
    return a.b > b.b;
  return a.n < b.n;
}

int main(void) {
  short n, m, i, p;
  pais *paises;

  cin >> n >> m;
  paises = (pais *) malloc(n * sizeof(pais));

  for (i = 0; i < n; ++i) {
    paises[i].n = i+1;
    paises[i].o = 0;
    paises[i].p = 0;
    paises[i].b = 0;
  }

  for (i = 0; i < m; ++i) {
    cin >> p;
    ++(paises[p-1].o);
    cin >> p;
    ++(paises[p-1].p);
    cin >> p;
    ++(paises[p-1].b);
  }

  sort(paises, paises + n, ord);

  for (i = 0; i < n; ++i)
    cout << paises[i].n << " ";

  free(paises);
  return 0;
}

