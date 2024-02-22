#include <iostream>

using namespace std;

int main() {
	
	float A, B, C, menor, inter, maior;
	
	cout << "digite 3 valores separados por espaço: ";
	cin >> A >> B >> C;
	
	if (A > B) {
        maior = A;
        menor = B;
    } else {
        maior = B;
        menor = A;
    }
    
    if (C > maior) {
        inter = maior;
        maior = C;
    } else {
        if (C < menor) {
            inter = menor;
            menor = C;
        } else {
            inter = C;    
        }
    }
	
	cout << "o valor maior e: " << maior;
	cout << "\no valor intermediario e: " << inter;
	cout << "\no valor menor e: " << menor << "\n";
	
	system("pause");
    return 0;
}
