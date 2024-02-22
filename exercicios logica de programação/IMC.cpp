#include <iostream>

using namespace std;

int main() {
	
	float peso, altura, IMC;
	
	cout << "digite a altura: ";
	cin >> altura;
	
	cout << "digite o peso: ";
	cin >> peso;
	
	
	IMC = (peso/(altura*altura));
	
	if(IMC<=20) {cout << "apaixo do peso.";}
	
	else if ((IMC>20)&&(IMC<=25)) {cout << "Peso Normal.";}
	
	else if ((IMC>25)&&(IMC<=30)) {cout << "Sobre Peso.";}
	
	else if ((IMC>30)&&(IMC<=40)) {cout << "Obeso.";}
	
	else if (IMC>40) {cout << "Obeso Morbido.";}
	
	system("pause");
    return 0;
}
