#include <algorithm>
#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	vector<int> multiplos;
	int x, y, i;
	
	cout << "Insira dois números inteiros, X e Y, respectivamente: " << endl;
	cin >> x >> y;
	
	for(i=1; i<=x; i++){
		multiplos.push_back(i*y);
	}
	
	cout << "os primeiros " << x << " multiplos de " << y << " são: " << endl << endl;
	
	for(i=0; i<x; i++){
		cout << multiplos[i] << endl;
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}
