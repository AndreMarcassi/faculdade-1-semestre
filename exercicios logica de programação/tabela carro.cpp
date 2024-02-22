#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float valorcarro, valoravista;
	char pagamento;
	
	cout << "digite o valor do carro: ";
	cin >> valorcarro;
	
	cout << "  V= a vista   P=parcelado " << endl;
	cout << "qual a forma de pagamento: " << endl;
	cin >> pagamento;
	
	if (pagamento='P'){
	
	cout << "  Parcelas  " << "  Percentual de acréscimo   " << endl;
	cout << "            " << "    sobre o preço final     " << endl;
	cout << "            " << "                            " << endl;
	cout << "     6      " << "            3%              " << endl; 
	cout << "     12     " << "            6%              " << endl;
	cout << "     18     " << "            9%              " << endl;
	cout << "     24     " << "            12%             " << endl;
	cout << "     30     " << "            15%             " << endl;
	cout << "     36     " << "            18%             " << endl;
	cout << "     42     " << "            21%             " << endl;
	cout << "     48     " << "            24%             " << endl;
	cout << "     54     " << "            27%             " << endl;
	cout << "     60     " << "            30%             " << endl;
	
	cout << "em quantas parcelas voce deseja pagar: " << endl;
	cin >> nump;
	
	switch (nump){
		
		case 
	}
	}
	
	else {
		valoravista=(valorcarro-(valorcarro/20));
		cout << "o valor final para pagamneto a vista é: R$" << valoravista << endl;
	}
	
	cout << "o";
	
	system("pause");
	return 0;
}
