#include <iostream>

using namespace std;

int main (){
	
	float horas, minutos, segundos, horario;
	
	cout << "escreva as horas: ";
	cin >> horas;
	
	cout << "escreva os minutos: ";
	cin >> minutos;
	
	cout << "escreva os segundos: ";
	cin >> segundos;
	
	horario= (((horas*60)+minutos)*60)+segundos;
	
	cout << "o total das horas em segundos e igual a: " << horario;
	
}
