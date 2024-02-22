#include <iostream>

using namespace std;

int main() {
	
	float custo_de_fabrica, porcentagem_da_distribuidora, imposto, custo_para_o_consumidor, custo_com_imposto ;
	
	cout << "escreva o custo de fabrica do carro: ";
	cin >> custo_de_fabrica;
	
	imposto=((custo_de_fabrica*45)/100);
	custo_com_imposto=(custo_de_fabrica+imposto);
	porcentagem_da_distribuidora=((custo_com_imposto*28)/100);
	
	custo_para_o_consumidor=((custo_de_fabrica+imposto)+porcentagem_da_distribuidora);
	
	cout << "o custo para o consumidor e de: " << custo_para_o_consumidor << "\n";
	
	system("pause");
    return 0;
}
