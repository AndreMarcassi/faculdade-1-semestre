#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, numn;
	float numpar, numimpar;
	
	cout << "quantos numeros voce quer somar? ";
	cin >> num;
	
	for (i=1; i<=num; i++){
		cout << "digite o numero par cer somado: ";
		cin >> numn;
		
		if (numn%2==0){
			numpar=numpar+numn;
		}
		
		else{
			numimpar=numimpar+numn;
		}
		
	}
	
	cout << "a soma de todos os numeros pares é: " << numpar << endl;
	cout << "a soma de todos os numeros impares é: " << numimpar << endl;
	
	system("pause");
	return 0;
}
