#include <iostream>

using namespace std;

int main(){
	
	float valor, mes, rendimento;
	
	cout << "informe o valor depositado: ";
	cin >> valor;
	
	cout << "informe o tempo que o rendimento sera efetuado: ";
	cin >> mes;
	
	rendimento=valor+((0.70*mes)*100);
	
	cout << "o valor todal da conta apos " << mes << " meses e: " << rendimento;
	
}
