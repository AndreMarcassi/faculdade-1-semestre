#include <iostream>

using namespace std;

int main() {
	
	float num, i;
	
	cout << "escreva um numero para saber a tabuada: ";
	cin >> num;
	
	for (i=0; i<=num*10; i=i+num){
		cout << i << endl;
	}
	
	system("pause");
	return 0;
}
