#include <iostream>
#include <locale.h>

using namespace std;

float fatorial(int F){
	int total;
	if (F<=1){
		return 1;
	}
	else {
		return F*fatorial(F-1);
	}
}


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int F;

	cout << "digite um numero para saber o seu fatorial: ";
	cin >> F;
	
	cout << endl << "o fatoria de " << F << " é " << fatorial(F) << endl << endl;

	
	system("pause");
	return 0;
}
