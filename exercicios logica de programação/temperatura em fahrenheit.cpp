#include <iostream>

using namespace std;

int main (){
	
	float tempC, tempF;
	
	cout << "escreva a temperatura em celsius: ";
	cin >> tempC;
	
	tempF= (1.8*tempC)+32;
	
	cout << "a temperatura em fahrenheit e: " << tempF;
	
}
