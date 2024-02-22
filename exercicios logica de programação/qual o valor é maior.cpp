#include <iostream>

using namespace std;

int main() {
	
	float A, B, menor, maior;
	
	cout << "digite 2 valores separados por espaco: ";
	cin >> A >> B;
	
	if (A > B) {
        maior = A;
        menor = B;
    } else {
        maior = B;
        menor = A;
    }
	cout << "o numero " << maior << " e maior que o numero " << menor << "\n";
	
	system("pause");
    return 0;
}
