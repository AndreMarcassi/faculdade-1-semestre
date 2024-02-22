#include <iostream>

using namespace std;

int main(){
	
	float A, B, soma, subtracao, multiplicacao, divisao;
	
	cout << "escreva um valor para o A: ";
	cin >> A;
	
	cout << "escreva um valor para B: ";
	cin >> B;
	
	if(A>B){
		subtracao=A-B;
	}
	else{
		subtracao=B-A;
	}
	
	soma=A+B;
	multiplicacao=A*B;
	divisao=A/B;
	
	cout << "A soma de A e B: " << soma;
	cout << "\nA subtracao de A e B: " << subtracao;
	cout << "\nA multiplicacao de A e B: " << multiplicacao;
	cout << "\nA divisao de A e B: " << divisao;
	
	
}
