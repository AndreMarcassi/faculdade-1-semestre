#include <iostream>
#include <locale.h>
#include <iomanip> // 
#include <limits> // cin.ignore(numeric_limits<streamsize>::max(), '\n');

using namespace std;

struct Cadastro_de_Aluno{
	char nome[50];
	int matricula;
	float Matematica;
	float Portugues;
	float Ciencias;
	float media;
};

float Calculo_de_Media(float m, float p, float c){
	return (m+p+c)/3;
}

string lista_de_aprovacao(struct Cadastro_de_Aluno novo_aluno) {
	
    if (novo_aluno.media >= 6) {
        return "Aprovado";
    } else {
        return "Reprovado";
    }
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	char veri;
	
	cout << "1: Cadastro de Aluno" << endl;
	cout << "2: C�lculo de M�dia" << endl;
	cout << "3: Consulta de Aluno" << endl;
	cout << "4: Listagem de Alunos Aprovados e Reprovados" << endl;
	cout << "5: parar" << endl;
	
	cout << "digite o numero para realizar a fun�ao: ";
	cin >> num;
	
	switch (num){
		
		case 1: {
	
				struct Cadastro_de_Aluno novo_aluno;
				
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
					cout << "digite o nome do novo aluno: ";
				    cin.getline(novo_aluno.nome, 50);
				    
				    cout << "digite a matricula do novo aluno: ";
				    cin >> novo_aluno.matricula;
				    
				    cout << "digite a nota de Matematica desse aluno: ";
				    cin >> novo_aluno.Matematica;
				    
				    cout << "digite a nota de Portugues desse aluno: ";
				    cin >> novo_aluno.Portugues;
				    
				    cout << "digite a nota de Ciencias desse aluno: ";
				    cin >> novo_aluno.Ciencias;
				    
				    novo_aluno.media=Calculo_de_Media(novo_aluno.Matematica,novo_aluno.Portugues,novo_aluno.Ciencias);
				    
				    cout << "deseja prosseguir para pr�xima etapa? (s/n) : ";
				    cin >> veri;
				    
				    if((veri=='S')||(veri=='s')){
					}
					
					else{
						break;	
					}
		}
		
		case 2: {
			
			struct Cadastro_de_Aluno novo_aluno;
			
			cout << fixed << setprecision(2);
			
			cout << endl << "a media do aluno �: " << novo_aluno.media << endl;
			
			cout << "deseja prosseguir para pr�xima etapa? (s/n) : ";
			cin >> veri;
				    
				if((veri=='S')||(veri=='s')){
				}
					
				else{
					break;
				}
		}
		
		case 3: {
			
			struct Cadastro_de_Aluno novo_aluno;
			
			cout << endl  << "nome do aluno: " << novo_aluno.nome << endl;
			cout << "numero da matricula do aluno: " << novo_aluno.matricula << endl;
			cout << "nota de Matematica: " << novo_aluno.Matematica << endl;
			cout << "nota de Portugues: " << novo_aluno.Portugues << endl;
			cout << "nota de Ciencias: " << novo_aluno.Ciencias << endl;
			cout << "media total das notas " << novo_aluno.media << endl << endl;
			
			cout << "deseja prosseguir para pr�xima etapa? (s/n) : ";
			cin >> veri;
				    
				if((veri=='S')||(veri=='s')){
				}
					
				else{
					break;
				}
		}
		
		case 4: {
			
			struct Cadastro_de_Aluno novo_aluno;
			
			cout << endl << "o aluno esta " << lista_de_aprovacao(novo_aluno) << endl;
			
			break;
			
		}
		
		case 5: {
			break;
		}

	}
	
	system("pause");
	return 0;
}


/*Voc� foi designado para desenvolver um sistema de cadastro de alunos para uma institui��o de ensino. 
Cada aluno possui informa��es como nome, matr�cula, notas em tr�s disciplinas e m�dia final. 
Utilize structs em C para criar uma solu��o que permita realizar as seguintes opera��es:

� Cadastro de Aluno: Permita ao usu�rio cadastrar um novo aluno, informando nome, matr�cula e as notas nas 
disciplinas de Matem�tica, Portugu�s e Ci�ncias.

� C�lculo de M�dia: Implemente uma fun��o que, dado um aluno, calcule a m�dia final considerando as notas 
nas tr�s disciplinas. A m�dia deve ser armazenada na struct do aluno.

� Consulta de Aluno: Crie uma fun��o que, dado o n�mero de matr�cula de um aluno, exiba na tela todas as 
informa��es sobre o aluno, incluindo nome, matr�cula, notas e m�dia final.

� Listagem de Alunos Aprovados e Reprovados: Desenvolva fun��es que listem os alunos aprovados e reprovados. 
Considere a m�dia m�nima para aprova��o como 6.0.

Certifique-se de modularizar o c�digo, criando fun��es separadas para cada uma das opera��es mencionadas acima. 
Al�m disso, forne�a um menu interativo para que o usu�rio possa escolher qual opera��o deseja realizar. Ao final, seu 
programa deve ser capaz de cadastrar alunos, calcular suas m�dias e fornecer informa��es sobre o desempenho 
acad�mico, identificando quem foi aprovado e quem foi reprovado*/
