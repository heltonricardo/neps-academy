#include <iostream>
#include <cstdlib>

using namespace std;

struct clas {
  short id, p;
};

int main(void) {
  int g, p, i, j, k, m, t, x, s, n;
  int **race;
  clas *pilot;

  while (cin >> g >> p, g + p) {

    race = (int **) malloc(g * sizeof(int *));
    pilot = (clas *) malloc(p * sizeof(pilot));

    for (i = 0; i < g; ++i) {
      race[i] = (int *) malloc(p * sizeof(int));
      for (j = 0; j < p; ++j)
        cin >> race[i][j];
    }

    cin >> s;
    for (i = 0; i < s; ++i) {
      for (t = 0; t < p; ++t) {
            pilot[t].id = t + 1;
            pilot[t].p = 0;
      }

      x = 0;
      cin >> k;
      for (j = 1; j <= k; ++j) {
        cin >> m;
        for (t = 0; t < g; ++t)
          for (n = 0; n < p; ++n)
            if (race[t][n] == j) {
              pilot[n].p += m;
              if (pilot[n].p > x)
                x = pilot[n].p;
              break;
            }
      }

      for (t = 0; t < p; ++t)
        if (pilot[t].p == x)
          cout << pilot[t].id << " ";
      cout << endl;

    }
  }

  for (i = 0; i < g; ++i) free(race[i]);
  free(race);
  free(pilot);
  return 0;
}

