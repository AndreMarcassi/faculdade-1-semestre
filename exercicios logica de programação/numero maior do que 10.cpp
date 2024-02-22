#include <iostream>

using namespace std;

int main() {
	
	float numero;
	
	cout << "escreva um valor para saber se ele e maior que 10: ";
	cin >> numero;
	
	if (numero>10) 
		{cout << "\no numero " << numero << " e maior que 10" << "\n";}
		
		else 
		{cout << "\no numero " << numero  << " nao e maior do que 10" << "\n";}
		
	system("pause");
    return 0;
}
