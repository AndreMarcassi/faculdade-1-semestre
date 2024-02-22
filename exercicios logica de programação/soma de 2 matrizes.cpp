#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz1 [3][3];
	int matriz2 [3][3];
	int linha, coluna, soma;
	
	cout << "digite um numero: " << endl;
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			cin >> matriz1[linha][coluna];
			soma=soma+matriz1[linha][coluna];
		}
	}
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			cin >> matriz2[linha][coluna];
			soma=soma+matriz2[linha][coluna];
		}
	}
	
	cout << endl << "o total da soma entre as 2 matrizes é: " << soma << endl;
	
	system("pause");
	return 0;
}
