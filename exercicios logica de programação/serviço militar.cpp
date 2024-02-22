#include <iostream>
#include <locale.h>
#include <limits> // Adicionado para usar numeric_limits

using namespace std;

struct registro{
	char nome[30];
	int idade;
	char sexo[2];
	char saude[30];
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, i;

	cout << "digite o numero de pessoas que serão analizadas: ";
	cin >> num;
	
	struct registro registros[num];
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpar buffer antes do getline
	
	for(i=0;i<num; i++){
		
		cout << "digite o nome: ";
        cin.getline(registros[i].nome, 30);
		
		cout << "digite a idade: ";
		cin >> registros[i].idade;
		
		cout << "digite o sexo (M para masculino e F para feminino): ";
		cin >> registros[i].sexo;
		
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		
		cout << "digite a condiçao de saude: ";
        cin.getline(registros[i].saude, 30);
        cout << endl;
	}
	
	for(i=0;i<num; i++){
		
		if(registros[i].idade>=18){
			cout << registros[i].nome << " aprovado." << endl;
		}
		else{
			cout << registros[i].nome << " não aprovado." << endl;
		}

	}	
	
	system("pause");
	return 0;
}
