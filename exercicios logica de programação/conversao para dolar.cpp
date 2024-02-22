#include <iostream>

using namespace std;

int main (){
	
	float real, dolar_atual, dolar;
	
	dolar_atual = 4.9;
	
	cout << "escreva o valor em real para comverter para dolar: ";
	cin >> real;
	
	dolar= real/dolar_atual;
	
	cout << "o valor em dolar e: " << dolar;
	
}
