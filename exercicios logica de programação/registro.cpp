#include <iostream>
#include <locale.h>

using namespace std;

struct registro{
	char nome[30];
	int idade;
	char sexo[2];
	char CPF[16];
	char cargo[30];
	float salario;
	int dia;
	int ano;
	char mes[15];
	int codigo_setor;
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	struct registro registros[3];
	
	int i;
	
	for(i=0; i<3; i++){
		
		cout << "digite o nome do funcionario: ";
        cin.getline(registros[i].nome, 30);
		
		cout << "digite a idade do funcionario: ";
		cin >> registros[i].idade;
		
		cout << "digite o sexo do funcionario (M para masculino e F para feminino): ";
		cin >> registros[i].sexo;
		
		cout << "digite o CPF do funcionario: ";
		cin.ignore();
		cin.getline(registros[i].CPF, 16);
		
		cout << "digite o cargo do funcionario: ";
        cin.getline(registros[i].cargo, 30);
		
		cout << "digite o valor do salario do funcionario: ";
		cin >> registros[i].salario;
		
		cout << "digite o dia (em numero) o mes (por escrito por extenso) e o ano de nascimento do funcionario: ";
		cin >> registros[i].dia >> registros[i].mes >> registros[i].ano;
		
		cout << "digite o codigo do setor do funcionario: ";
		cin >> registros[i].codigo_setor;
		
	}
	
    for (i=0; i<3; i++) {
    	cout << endl;
        cout << "Registro " << i + 1 << ":" << endl << endl;
        cout << "Nome: " << registros[i].nome << endl;
        cout << "Idade: " << registros[i].idade << endl;
        cout << "Sexo: " << registros[i].sexo << endl;
        cout << "CPF: " << registros[i].CPF << endl;
        cout << "Cargo: " << registros[i].cargo << endl;
        cout << "Salário: R$" << registros[i].salario << endl;
        cout << "Data de nascimento: " << registros[i].dia << " " << registros[i].mes << " " << registros[i].ano << endl;
        cout << "Código do setor: " << registros[i].codigo_setor << endl;
        cout << "---------------------" << endl;
    }

	system("pause");
	return 0;
}
