#include <iostream>

using namespace std;

int main (){
	
	float nota1, nota2, nota3, mf;
	
	cout << "escreva a nota da primeira prova: ";
	cin >> nota1;
	
	cout << "escreva a nota da segunda prova: ";
	cin >> nota2;
	
	cout << "escreva a nota da terceira prova: ";
	cin >> nota3;
	
	mf=((nota1*2)+(nota2*3)+(nota3*5))/10;
	
	cout << "a media final do aluno e: " << mf;
}
