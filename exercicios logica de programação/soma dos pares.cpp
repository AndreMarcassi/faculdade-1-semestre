#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3];
	int linha, coluna, soma;
	
	cout << "digite um numero: " << endl;
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			cin >> matriz[linha][coluna];
			
			if(matriz[linha][coluna]%2==0){
				soma=soma+matriz[linha][coluna];
			}
			
			else if (matriz[linha][coluna]%2!=0){
				continue;
			}
		}
	}

	cout << soma<< endl;
	
	system("pause");
	return 0;
}
