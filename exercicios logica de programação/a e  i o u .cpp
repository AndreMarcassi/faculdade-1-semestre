#include <iostream>
#include <locale.h>

using namespace std;

int contarVogais(string palavra) {
	
    int contador = 0;
    
    for (size_t i = 0; i < palavra.length(); i++) {
    	
        char c = tolower(palavra[i]);
        
	        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
	            contador++;
	        }
        }
    return contador;
}


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    string entrada;
    
    cout << "Digite uma palavra ou frase: ";
    getline(cin, entrada);

    int numeroVogais = contarVogais(entrada);

    cout << "O número de vogais na entrada é: " << numeroVogais << endl;
	
	system("pause");
	return 0;
}
