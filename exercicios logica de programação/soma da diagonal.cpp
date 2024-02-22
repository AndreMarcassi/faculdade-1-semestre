#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3];
	int linha, coluna, diagonal, soma_total, soma_diagonal;
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			cout << "digite um numero para a matriz: ";
			cin >> matriz[linha][coluna];
		}	
	}
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			soma_total=soma_total+matriz[linha][coluna];
		}	
	}
	
	cout << soma_total << endl;
	
	for(diagonal=0; diagonal<3; diagonal++){
			soma_diagonal=soma_diagonal+matriz[diagonal][diagonal];	
	}
	
	cout << soma_diagonal << endl;
	
	system("pause");
	return 0;
}
