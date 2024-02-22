#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float total, preco_de_custo, preco_de_venda, total_custo, total_venda;
	
	total_custo=0;
	total_venda=0;
	
	for(i=1;i<=2; i++){

	cout << "digite o preço de custo do produto: ";
	cin >> preco_de_custo;
	
	cout << "digite o preço de venda do produto: ";
	cin >> preco_de_venda;
	cout << endl;
	
	total_custo+=preco_de_custo;
	total_venda+=preco_de_venda;
	
	}
	
	cout << fixed << setprecision(2);
	
	cout << "o preço de custo total é " << total_custo << endl;
	cout << "o preço de venda total é " << total_venda << endl;
	
	total=total_venda-total_custo;
	
	if(total_custo<total_venda){
		cout << "o valor total de lucro foi R$" << total << endl;
	}
	
	else {
		cout << "o valor total de prejuizo foi de R$" << abs(total) << endl;
	}
	
	system("pause");
	return 0;
}
