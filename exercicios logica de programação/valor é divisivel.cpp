#include <iostream>

using namespace std;

int main() {
	
	int valor;
	
	cout << "digite o valore: ";
	cin >> valor;   
   
   
    if(valor % 10 == 0)
		{cout << "e divisivel por 10.\n";}
    else if(valor % 5 == 0)
		{cout << "e divisivel por 5.\n";}
    else if(valor % 2 == 0)
		{cout << "e divisivel por 2.\n";}
    else
    	{cout << "nao e divisivel por 10, 5 ou 2.\n";}

    system("pause");
    return 0;
}
