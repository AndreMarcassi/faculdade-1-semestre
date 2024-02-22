#include <iostream>
#include <locale.h>

#define linhas 2
#define colunas 2

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int Estante [linhas][colunas];
	
	int i, j, shampoo, condicionador, hidratante, tintura, demaquilante, vazio;

	shampoo=0;
	condicionador=0;
	hidratante=0;
	tintura=0;
	demaquilante=0;
	vazio=0;
	
	cout << "1: shampoo" << endl;
	cout << "2: condicionador" << endl;
	cout << "3: hidratante" << endl;
	cout << "4: tintura" << endl;
	cout << "5: demaquilante" << endl;
	cout << "0: vazio" << endl << endl;
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			
			cout << "escreva o códigos do produtos que sera armazenado no espaço " << i << " " << j << ": ";
			cin >> Estante [i][j];
			cout << endl;
		}
	}
	
		for(i=0; i<linhas; i++){
			for(j=0; j<colunas; j++){
			
			if (Estante [i][j]==1){
				shampoo++;
			}
			
			if (Estante [i][j]==2){
				condicionador++;
			}
			
			if (Estante [i][j]==3){
				hidratante++;
			}
			
			if (Estante [i][j]==4){
				tintura++;
			}
			
			if (Estante [i][j]==5){
				demaquilante++;
			}
			
			if (Estante [i][j]==0){
				vazio++;
			}
		}
	}
	
	cout << "a quantidade de caixas de cada tipo de produto na estante é: " << endl;
	cout << "shampoo: " << shampoo << endl;
	cout << "condicionador: " << condicionador << endl;
	cout << "hidratante: " << hidratante << endl;
	cout << "tintura: " << tintura << endl;
	cout << "demaquilante :" << demaquilante << endl;
	cout << "vazio: " << vazio << endl << endl;
	
	
	
	system("pause");
	return 0;
}
