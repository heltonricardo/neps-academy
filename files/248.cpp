#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct consulta {
  int ini, fim;
};

bool order(consulta a, consulta b) {
  return a.fim < b.fim;
}

int main(void) {
  int n, i, t, c;
  consulta *cons;

  cin >> n;
  cons = (consulta *) malloc(n * sizeof(consulta));

  for (i = 0; i < n; ++i)
    cin >> cons[i].ini >> cons[i].fim;

  sort(cons, cons + n, order);

  for (i = t = c = 0; i < n; ++i) {
    if (t <= cons[i].ini) {
      t = cons[i].fim;
      ++c;
    }
  }

  cout << c << endl;

  free(cons);
  return 0;
}
