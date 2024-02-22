#include <algorithm>
#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	
	vector<int> divisivel;
	
	for(i=0; i<=200 ; i++){
		
		if(i%4==0){
			divisivel.push_back(i);
		}
		else{
			continue;
		}
	}
	
	cout << "os numero menores que 200 e que sao divisiveis por 4 sao: ";
	
	for (j=0; j < divisivel.size(); j++) {
    cout << divisivel[j] << endl;
    }
    
    cout << endl;
	
	system("pause");
	return 0;
}
