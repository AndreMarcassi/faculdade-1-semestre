#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	int v, n, x, i, j, p, s;
	
	for (j=0 ; j=p ; j++){
		
		x=1;
		
		for (i=0 ; i=x; i++){
				
			unsigned seed = time(0);
			
		    srand(seed);
		    v = (rand()%100);
	    
		    //cout << v << endl;
		    
		    cout << "\nadivinhe o numero entre 0 e 100: ";
		    cin >> n;
			    
		    for (i=0 ; i=x ; i++){
			    	
			    if (n<v) {
					cout << "\no numero digitado e muito baixo" << endl;
					cout << "digite outro numero: ";
					cin >> n;
					x=1;
					}
						
					else if (n>v) {
						cout << "\no numero digitado e muito alto" << endl;
						cout << "digite outro numero: ";
						cin >> n;
						x=1;
					}
						
					else if (n=v) {
						cout << "\nvoce acertou o numero" << endl;
						x=0;
					}
				}
			}
			
			cout << "para jogar novamente digite 1: ";
			cin >> s;
				if (s==1) {
					p=1;
				}
				else {
					system("pause");
					return 0;
				}
		}
	}
