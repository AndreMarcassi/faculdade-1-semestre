#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario, quilowatts, valordecadaquilowatts, valortotal;
	
	cout << "qual o valor do salario minimu: " << endl;
	cin >> salario;
	
	cout << "qual a quantidade de enegia comsumida (em quilowatts): " << endl;
	cin >> quilowatts;
	
	valordecadaquilowatts=((salario/7)/100);
	
	valortotal=valordecadaquilowatts*quilowatts;
	
	cout << "o valor de cada quilowatts é " << valordecadaquilowatts << endl;
	
	cout << "o valor total a ser pago pela conta de luz é " << valortotal << "R$" << endl;
	
	system("pause");
	return 0;
}
