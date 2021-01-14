#include <iostream>

using namespace std;

string title(string F){
  short len = F.size();
  short i;
  F[0] = ('a' <= F[0] and F[0] <= 'z')? F[0]-32 : F[0];
  for (i = 1; i < len; ++i) {
    if (F[i-1] == ' ')
      F[i] = ('a' <= F[i] and F[i] <= 'z')? F[i]-32 : F[i];
    else if (F[i] != ' ')
      F[i] = ('a' <= F[i] and F[i] <= 'z')? F[i] : F[i]+32;
  }
  return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}

