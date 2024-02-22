#include <iostream>

using namespace std;

int main(){
	
	float base, altura, area;
	
	cout << "informe a base e a altura do triangulo em CM (separado por um espaco): ";
	cin >> base >> altura;
	
	area=(base*altura)/2;
	
	cout << "a area do triangulo em cm e: " << area;
}
