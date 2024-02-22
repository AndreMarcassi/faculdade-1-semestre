#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int linha, coluna, soma;
	int matriz[2][2];
	
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<2; coluna++){
			cout << "digite um numero para a matriz: ";
			cin >> matriz[linha][coluna];
		}	
	}
	
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<2; coluna++){
			cout << matriz[linha][coluna] << " ";
		}	
	}
	
	cout << endl;
	
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<2; coluna++){
			soma=soma+matriz[linha][coluna];
		}	
	}
	
	cout << soma << endl;
	
	system("pause");
	return 0;
}
