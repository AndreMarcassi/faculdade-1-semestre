#include <iostream>
#include <locale.h>

using namespace std;

int fibonacci(int f){
	
	if (f<=1){
		return 1;
	}
	
	else{
		return fibonacci(f-1) + fibonacci(f-2);
	}
}


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "digite um numero para saber o N-�simo numero na sequ�ncia de Fibonacci: ";
	cin >> num;

	cout << "o " << num << " n� na sequ�ncia de Fibonacci �: " << fibonacci(num) << endl;
	
	system("pause");
	return 0;
}
