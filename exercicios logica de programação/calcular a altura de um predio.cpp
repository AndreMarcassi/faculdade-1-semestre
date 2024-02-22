#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float H, h, S, s, M;
	
	cout << "para saber a altura de um predio digite as seguintes informações" << endl << endl;
	
	cout << "a sua altura em cm: " << endl;
	cin >> h;
	
	cout << "o comprimento da sua sombra em cm: " << endl;
	cin >> s;
	
	cout << "o comprimento da sombra do predio em cm: " << endl;
	cin >> S;
	
	H=(S/s)*h;
	
	M=H/100;
	
	cout << "a altura do predio é: " << M << "m" << endl;
	
	
	system("pause");
	return 0;
}
