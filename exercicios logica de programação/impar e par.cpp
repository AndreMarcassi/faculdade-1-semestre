#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3];
	int linha, coluna;
	
	cout << "digite um numero: " << endl;
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			cin >> matriz[linha][coluna];
			
			if(matriz[linha][coluna]%2!=0){
				matriz[linha][coluna]=-1;
			}
			
			else if (matriz[linha][coluna]%2==0){
				matriz[linha][coluna]=+1;
			}
		}
	}
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			cout << matriz[linha][coluna] << endl;
		}
	}
	
	system("pause");
	return 0;
}
