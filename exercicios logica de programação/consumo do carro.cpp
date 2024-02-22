#include <iostream>

using namespace std;

int main (){
	
	float capacidade_tanque, distancia_percorrida, combustivel_restante, consumo_medio, autonomia_restante ;
	
	cout << "qual a capacidade do tanque do carro: ";
	cin >> capacidade_tanque;
	
	cout << "distancia percorrida: ";
	cin >> distancia_percorrida;

	cout << "combustivel restante no tanque: ";
	cin >> combustivel_restante;
	
	consumo_medio= distancia_percorrida/(capacidade_tanque-combustivel_restante);
	
	autonomia_restante= combustivel_restante*consumo_medio;
	
	cout << "o consumo medio do carro e: " << consumo_medio << "KM/L";
	
	cout << "a autonomia restante e de: " << autonomia_restante << "KM";
}
