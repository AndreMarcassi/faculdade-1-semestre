#include <iostream>

using namespace std;

int main() {
	
	float valorE, valorS, porcentagem;
	
	porcentagem = 25;
	
	cout << "escreva o valor de entrada: ";
	cin >> valorE;
	
	valorS=valorE+((valorE*porcentagem)/100);
	
	cout << "o valor de venda do produto e: " << valorS << endl;
}
