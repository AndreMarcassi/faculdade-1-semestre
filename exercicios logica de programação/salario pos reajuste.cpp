#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int anos_de_empresa, dependentes;
	float salario, salario_novo, reajuste;
	char sexo_funcionario;
	
	reajuste=0;
	
	cout << "escreva o valor do seu salario: ";
	cin >> salario;
	
	cout << "escreva o seu tempo de empresa em anos: ";
	cin >> anos_de_empresa;
	
	cout << "digite o seu sexo (M=masculino, F=feminino): ";
	cin >> sexo_funcionario;
	
	cout << "quantidade de dependentes: ";
	cin >> dependentes;
	
	if ((sexo_funcionario='M')&&(anos_de_empresa>=10)){
		reajuste=reajuste+(salario*0.05);
	}
	
	else if ((sexo_funcionario='M')&&(anos_de_empresa<=10)){
		reajuste=reajuste+(salario*0.03);
	}
	
	else if ((sexo_funcionario='F')&&(anos_de_empresa>=8)){
		reajuste=reajuste+(salario*0.05);
	}
	
	else if ((sexo_funcionario='F')&&(anos_de_empresa<=8)){
		reajuste=reajuste+(salario*0.03);
	}
	
	if (dependentes!=0){
		reajuste=reajuste+((salario+reajuste)*0.02);
	}
	
	salario_novo=salario+reajuste;
	
	cout << "o valor do salario apos o reajuste sera de: " << salario_novo << endl;
	
	
	system("pause");
	return 0;
}
