#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char sexo, nome;
	float peso_ideal, altura, peso;
	
	cout << "digite o sea altura (em cm), sexo e nome: ";
	cin >> altura >> sexo >> nome;
	
	if (sexo=='M'){
		peso_ideal=((altura/100)*72.7)-58;
	}
	
	else if (sexo=='F'){
		peso_ideal=((altura/100)*62.1)-44.7;
	}
	
	cout << "seu peso ideal é: " << peso_ideal << endl;
	
	system("pause");
	return 0;
}
