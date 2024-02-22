#include <iostream>

using namespace std;

int main (){
	
	float valor_gasto, gorjeta, valor_total;
	
	cout << "valor gasto pelo cliente: ";
	cin >> valor_gasto;
	
	gorjeta=(valor_gasto*0.10);
	
	valor_total= valor_gasto+gorjeta;
	
	cout << "o total a ser pago pelo cliente e: " << valor_total;
	
}
