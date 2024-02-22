#include <iostream>
#include <locale.h>

// biblioteca para definir a precisão
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    char resposta;
    int ano, totalCarrosAte2000 = 0, totalGeral = 0;

    do {
        cout << "Informe o ano do veiculo: ";
        cin >> ano;

        double desconto;
        if (ano <= 2000) {
            desconto = 0.12;
            totalCarrosAte2000++;
        } else {
            desconto = 0.07;
        }

        double valorVeiculo, valorDesconto, valorFinal;
        cout << "Informe o valor do veiculo: ";
        cin >> valorVeiculo;

        valorDesconto = valorVeiculo * desconto;
        valorFinal = valorVeiculo - valorDesconto;

        // setprecision(2) é usado para definir a precisão decimal para 2 casas ao exibir números
        cout << fixed << setprecision(2);
        cout << "Desconto: R$ " << valorDesconto << endl;
        cout << "Valor a ser pago pelo cliente: R$ " << valorFinal << endl;

        cout << "Deseja continuar calculando desconto? (S/N): ";
        cin >> resposta;

        totalGeral++;
    } 
	
	while (resposta == 'S' || resposta == 's');

    cout<< endl << "Total de carros com ano ate 2000: " << totalCarrosAte2000 << endl;
    cout << "Total geral de carros: " << totalGeral << endl;

    system("pause");
	return 0;
}
