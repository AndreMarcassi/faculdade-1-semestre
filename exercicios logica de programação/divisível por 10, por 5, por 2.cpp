#include <algorithm>
#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	vector<int> divisores;
    divisores.push_back(10);
    divisores.push_back(5);
    divisores.push_back(2);
	
	int numero, i, j, veri;
	
	for(i=0; ; i++){
	
	cout << "Digite um número: ";
	cin >> numero;
	
	if(numero!=-999){

	    for (j = 0; j<3; j++) {
	    	
	    if (numero % divisores[j] == 0) {
	        cout << "O número é divisivel por " << divisores[j] << "." << endl;
	        	veri=1;
	        }
	        
	    }
	    
	    if (veri!=1) {
			cout << "O número não é divisivel pro nenhuma variavel" << endl;
		}
		
		else {
		 	veri=0;
		}
		
		cout << endl;
		
	}
	
	else{
		system("pause");
		return 0;
	}

	}

}
