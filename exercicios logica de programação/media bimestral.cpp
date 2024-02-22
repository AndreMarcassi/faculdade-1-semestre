#include <iostream>

using namespace std;

int main(){
	
	float notaA, notaB, notaC, media;
	
	cout << "escreva a nota dos 3 bimestre dividido por espaço em ordem: ";
	cin >> notaA >> notaB >> notaC;
	
	media= ((notaA+notaB+notaC)/3);
	
	cout << "a media do alono e: " << media << "\n";
	
	if (media>= 7) {
		cout << "aluno aprovado\n";
	} 
	
	else if (media <= 5) {
		cout << "aluno reprovado\n";
	}
	
	else if ((media<5,1)&&(media>6,9)) {
		cout << "aluno esta em recuperacao\n";
	}
	
	system("pause");
    return 0;
}
