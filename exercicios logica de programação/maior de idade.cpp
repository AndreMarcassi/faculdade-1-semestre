#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, idade;
	
	for (i=1; i<=75; i++){
		
		cout << "escreva a sua idade: ";
		cin >> idade;
		
		if (idade>=18){
			
			cout << "voce é maior de idade." << endl << endl;
		}
		
		else {
			cout << "voce é menor de idade." << endl << endl;
		}
	}
	
	system("pause");
	return 0;
}
