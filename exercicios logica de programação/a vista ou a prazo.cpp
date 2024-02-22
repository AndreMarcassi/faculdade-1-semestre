#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	 setlocale(LC_ALL, "Portuguese");
	
	int i, r, limit;
	float valor, total, valorparcela, totalavista, totalaprazo, valorprimeiraparcela;
	char pagamento, repet, var, s, n;
	
	totalavista=0;
	totalaprazo=0;
	valorprimeiraparcela=0;
	
	repet=1;
	
	for(r=1; r=repet; r++){
	
		cout << "quanto valores deseja inserir: ";
		cin >> limit;
		
		for(i=1; i<=limit; i++){
		
			cout << "digite o valor total da compra: ";
			cin >> valor ;
			
			cout << "digite o modo de pagamento: ";
			cin >> pagamento;
		
			switch (pagamento) {
				case 'v':
					total=valor-(valor*0.05);
					cout << "o valor toda para pagamento a vista é: " << total << "\n\n";
						totalavista=totalavista+total;
					break;
		
				case 'p':
					valorparcela=valor/3;
					cout << "o valor total é " << valor << " e o valor de cada parcel é " << valorparcela << "\n\n";
						totalaprazo=totalaprazo+(valorparcela*3);
						valorprimeiraparcela=valorprimeiraparcela+valorparcela;
					break;
				
			}	
		}
		
		cout << "o valor total vendido a vista é: " << totalavista << endl;
		cout << "o valor total vendido a prazo é: " << totalaprazo << endl;
		cout << "o valor total das primeiras parcelas é: " << valorprimeiraparcela << endl << endl;
		
		cout << "deseja inceria mais um numero: ";
		cin >> var;
		
		if (var=='s'){
			repet;
		}
		
		else if (var=='n'){
			system("pause");
			return 0;
		}
	}
}
