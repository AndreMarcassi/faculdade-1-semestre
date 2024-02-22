#include <iostream>
#include <locale.h>

using namespace std;

float potencia(int x){
	return x*x;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int num;
	
	cout << "digite um numero para calcular sua potencia: ";
	cin >> num;
	
	cout << endl << "a potencia do numero é: " << potencia(num) << endl;
	
	system("pause");
	return 0;
}
