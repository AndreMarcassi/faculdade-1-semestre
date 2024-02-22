#include <iostream>

using namespace std;

int main(){
	
	float kmph, mps, tempo;
	
	cout << "qual a velocidade do veiculo em km/h: ";
	cin >> kmph;
	
	mps=kmph/3.6;
	
	tempo=435/kmph;
	
	cout << "a velocidade em m/s e: " << mps << "\no tempo de viagem de Sao paulo ate o Rio de janeiro e: " << tempo << "horas.";
}
