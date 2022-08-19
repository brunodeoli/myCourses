#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

#define TAM_MAX 20

class ConjuntoDeInteiros
{
public:
	ConjuntoDeInteiros(){			//construtor default
		for(int i=0; i <= TAM_MAX; i++){
			a.push_back(0);						//inicializa o conjunto em 0
		}
	}
	
	void criarConjunto(vector <int> vet){		//cria conjunto conforme o objeto
		for(int i = 0; i < vet.size(); i++){
			if(vet[i] < TAM_MAX){
				a[vet[i]] = 1;						//troca 0 por 1 na posicao i do vet
			}
		}		
	}
	
	void uniaoConjunto(ConjuntoDeInteiros &c1, ConjuntoDeInteiros &c2){
		for(int i = 0; i <= TAM_MAX; i++){
			if(c1.a[i] == 0 && c2.a[i] == 0){
				a[i] = 0;
			}
			else a[i] = 1;
		}
	}
	
	void intersecConjunto(ConjuntoDeInteiros &c1, ConjuntoDeInteiros &c2){
		for(int i = 0; i <= TAM_MAX; i++){
			if(c1.a[i] == 1 && c2.a[i] == 1){
				a[i] = 1;
			}
			else a[i] = 0;
		}
	}
	
	void insereConjunto(int k){
		if(k >= 0 && k <= TAM_MAX){					//se estiver dentro do range
			a[k] = 1;
		}
	}
	
	void retiraConjunto(int k){
		if(k >= 0 && k <= TAM_MAX){					//se estiver dentro do range
			a[k] = 0;
		}
	}
	
	int igualA(ConjuntoDeInteiros &c1, ConjuntoDeInteiros &c2){
		for(int i = 0; i <= TAM_MAX; i++){
			if(c1.a[i] != c2.a[i]){
				cout << "Nao sao iguais." << endl;
				return 0;							//retorna 0 se forem diferentes
			}
		}
		cout << "Sao iguais." << endl;
		return 1;									//retorna 1 se forem iguais
	}
		
	void imprimaConjunto(){						//imprime conjunto com espaço
		cout << "[ ";
		for(int i = 0; i <= TAM_MAX; i++){
			cout << a[i] << " ";
		}
		cout << "]" << endl;
	}
	
private:
	vector <int> a; 	
};



int main(){
	
	int tam, tam2, i;
	vector <int> vet, vet2; 
	
	unsigned seed = time(0);					//gera valores aleatório
    srand(seed);
	tam = (rand() % 20) + 2;					//tamanho do vetor aleatório
	
	cout << "vetor 1: [ ";
	for(i=0; i<tam; i++){						//cria vetor com valores aleatórios
		vet.push_back(rand() % 20);
		cout << vet[i] << ", ";
	}
	cout << "]" << endl;
	
	// VET2
	
	tam2 = (rand() % 20) + 2;					//tamanho do vetor aleatório
	
	cout << "vetor 2: [ ";
	for(i=0; i<tam2; i++){						//cria vetor com valores aleatórios
		vet2.push_back(rand() % 20);
		cout << vet2[i] << ", ";
	}
	cout << "]" << endl;
	
	
	ConjuntoDeInteiros c1;			//cria objeto
	c1.criarConjunto(vet);
	cout << "Conjunto Vetor 1:" << endl;
	c1.imprimaConjunto();
	
	ConjuntoDeInteiros c2;
	c2.criarConjunto(vet2);
	cout << "Conjunto Vetor 2:" << endl;
	c2.imprimaConjunto();
		
	ConjuntoDeInteiros c3;
	c3.uniaoConjunto(c1,c2);
	cout << "Uniao c1 e c2:" << endl;
	c3.imprimaConjunto();
	
	ConjuntoDeInteiros c4;
	c4.intersecConjunto(c1,c2);
	cout << "Intersessao c1 e c2:" << endl;
	c4.imprimaConjunto();

	c2.igualA(c1,c2);
	c3.igualA(c3,c3);
	
	return 0;
}