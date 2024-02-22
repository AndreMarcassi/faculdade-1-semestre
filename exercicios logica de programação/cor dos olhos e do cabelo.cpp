#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, nump, i;
	float altura, peso, idadepeso, idadetotal, alturatotal, totalcorolhoazul, ruivoazul, mediaidade, mediacorolhoazul;
	char cc, co;
	
	idadepeso=0;
	mediaidade=0;
	mediacorolhoazul=0;
	ruivoazul=0;
	
	cout << "quantas pessoas o programa vai ler? ";
	cin >> nump;
	
	cout << "  Cor dos olhos  " << "  Cor do cabelo  " << endl;
	cout << "    Castanho=C   " << "    Castanho=C   " << endl;
	cout << "    Preto=P      " << "    Preto=P      " << endl;
	cout << "    Verde=V      " << "    Ruivo=R      " << endl;
	cout << "    Azul=A       " << "    Loiro=L      " << endl;
	cout << endl;
	
	for(i=1; i<=nump; i++){
	
		cout << "escreva a idade: ";
		cin >> idade;
		
		cout << "escreva a altura em cm: ";
		cin >> altura;
		
		cout << "escreva o peso: ";
		cin >> peso;
		
		cout << "qual a cor do cabelo: ";
		cin >> cc;
		
		cout << "qual a cor dos olhos: ";
		cin >> co;
		cout << endl;
		
		
			if ((idade>=50)&&(peso<=60)){
				idadepeso=idadepeso+1;
			}
			
			if (altura<=150){
				alturatotal=alturatotal+1;
				idadetotal=idadetotal+idade;
			}
			
			if ((co=='A')&&(co=='a')){
				totalcorolhoazul=totalcorolhoazul+1;
			}
			
			if ((cc=='R')&&(cc=='r')&&(co!='A')&&(co!='a')){
				ruivoazul=ruivoazul+1;
			}
	
	}

	mediaidade=idadetotal/alturatotal;
	mediacorolhoazul=(totalcorolhoazul*100)/nump;
	
	cout << "A quantidade de pessoas com idade superior a 50 anos e com peso inferior a 60 kg: " << idadepeso << endl;
	
	cout << "A média das idades das pessoas com altura inferior a 1,50m: " << mediaidade << endl;
	
	cout << "A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: " << mediacorolhoazul << endl;
	
	cout << "A quantidade de pessoas ruivas e que não possuem olhos azuis: " << ruivoazul <<endl;
	
	
	system("pause");
	return 0;
}
