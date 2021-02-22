#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
	if (n + 1)
    return v[n] + soma_vetor(n-1, v);
	else return 0;
}

int main(){

	int n, v[100100];
	cin >> n;

	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n-1,v) << "\n";
}

