#include <iostream>

using namespace std;

int main (){
	
	float valor_vendido, quantidade_de_sapatos, comissao, salario_total;
	
	cout << "qual o valor total vendido pelo funcionario: ";
	cin >> valor_vendido;
	
	cout << "qaul a qunatidade de par de sapatos vendidos pelo funcionario: ";
	cin >> quantidade_de_sapatos;
	
	comissao= valor_vendido*0.20;
	
	salario_total= (quantidade_de_sapatos*5)+comissao;
	
	cout << "o salario total do funcionario e: R$" << salario_total;
}
