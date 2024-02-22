#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float litros, L, l, lata;
	
	cout << "quantos embalagens de 350ml foram compradas: " << endl;
	cin >> lata;
	
	cout << "quantos embalagens de 600ml foram compradas: " << endl;
	cin >> l;
	
	cout << "quantos embalagens de 2 litros foram comprados: " << endl;
	cin >> L;
	
	litros=(((lata*350)+(l*600)+(L*2000))/1000);
	
	cout << "foram comprados " << litros << " litros de refrigerantes." << endl;
	
	system("pause");
	return 0;
}
