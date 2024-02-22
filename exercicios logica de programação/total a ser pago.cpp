#include <iostream>

using namespace std;

int main (){
	
	float km_percorrido, dias_utilizados, total_a_pagar;
	
	cout << "digite o total em KM percorridos: ";
	cin >> km_percorrido;
	
	cout << "digite o total de dia utilizados: ";
	cin >> dias_utilizados;
	
	total_a_pagar= (km_percorrido*0.15)+(dias_utilizados*70);
	
	cout << "o total a ser pago e: R$" << total_a_pagar;
}
