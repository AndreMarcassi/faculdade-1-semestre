#include <iostream>

using namespace std;

int main (){
	
	float votos_brancos, votos_nulos, votos_validos, total_de_votos, porcentagem_branco, porcentagem_nulo, porcentagem_valido; 
	
	cout << "total de votos brancos: ";
	cin >> votos_brancos;
	
	cout << "total de votos nulos: ";
	cin >> votos_nulos;
	
	cout << "total de votos validos: ";
	cin >> votos_validos;
	
	total_de_votos= votos_brancos+votos_nulos+votos_validos;
	
	cout << "o total de votos e: " << total_de_votos;
	
	porcentagem_branco = (votos_brancos*100)/total_de_votos;
	
	porcentagem_nulo = (votos_nulos*100)/total_de_votos;
	
	porcentagem_valido = (votos_validos*100)/total_de_votos;
	
	cout << porcentagem_branco << "% de votos em branco";
	
	cout << porcentagem_nulo << "% de votos nulos";
	
	cout << porcentagem_valido << "% de votos validos";
	
	
}
