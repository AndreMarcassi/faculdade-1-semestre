#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float graus_Celsius, Fahrenheit;
	int i;
	
	cout << "Celsius  Fahrenheit" << endl;
	
	for(i=1; i<=10; i++){
	
		graus_Celsius=graus_Celsius+10;
		
		Fahrenheit=((graus_Celsius*1.8)+32);
		
		cout << graus_Celsius << "          " << Fahrenheit << endl;
	}
	
	system("pause");
	return 0;
}
