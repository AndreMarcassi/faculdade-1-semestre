#include <iostream>
#include <locale.h>

using namespace std;

float media(int x, int y){
	return (x+y)/2;
}

int main() {
	
	int num_a, num_b;
	
	setlocale(LC_ALL, "Portuguese");

	cout << "digite 2 n�meros para saber media: ";
	cin >> num_a >> num_b;
	
	cout << endl << "a media dos 2 numeros �: " << media(num_a, num_b) << endl;
	
	system("pause");
	return 0;
}
