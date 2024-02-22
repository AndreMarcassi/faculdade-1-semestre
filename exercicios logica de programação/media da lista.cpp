#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, list_num;
	float media, total;
	
	cout << "quantos numero tem em sua lista: ";
	cin >> num;
	
	for (i=1; i<=num; i++){
		
		cout << "escreva um numero da lista: ";
		cin >> list_num;
		
		total=total+list_num;
	}
	
	media=total/num;
	
	cout << "a media de todos os numeros digitados é: " << media << endl;
	
	system("pause");
	return 0;
}
