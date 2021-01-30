#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo(int x){
	int i, lim = sqrt(x);
  if (x != 2 && x%2 == 0 || x == 1)
    return false;
  for (i = 3; i <= lim; i += 2)
    if (x%i == 0) return false;
  return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
