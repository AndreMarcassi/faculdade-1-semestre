#include <iostream>

using namespace std;

int main(){
	
	float altura, largura, profundidade, volume;
	
	cout << "escreva as dimençoes de uma caixa d'agua (separadas por um espaco): ";
	cin >> altura >> largura >> profundidade;
	
	volume= (altura*largura*profundidade)/1000;
	
	cout << "o volume total da caixa d'agua e: " << volume << "m3";
}
