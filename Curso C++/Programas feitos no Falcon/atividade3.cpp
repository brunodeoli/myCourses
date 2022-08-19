#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

class ConjuntoDeInteiros
{
public:
	ConjuntoDeInteiros(int tamanho){			//construtor default
		for(int i=0; i <= tamanho; i++){
			a.push_back(0);						//inicializa o conjunto em 0
		}	
	}
	
	void criarConjunto(vector <int> vet){		//cria conjunto conforme o objeto
		for(int i = 0; i < vet.size(); i++){
			a[vet[i]] = 1;						//troca 0 por 1 na posicao i do vet
		}		
	}
	
	vector <int> uniaoConjunto(ConjuntoDeInteiros &c1, ConjuntoDeInteiros &c2){
		int tam;
		vector <int> uniao;
		if(c1.a.size() < c2.a.size()){
			tam = c1.a.size();
		}
		else tam = c2.a.size();
		
		for(int i = 0; i <= tam; i++){
			if(c1.a[i] == 0 && c2.a[i] == 0){
				uniao.push_back(0);	
			}
			else uniao.push_back(1);
		}
		return uniao;
	}
	
	void intersecConjunto(){
		
	}
	
	void insereConjunto(int k){
		if(k >= 0 && k <= 100){					//se estiver dentro do range
			if(k > a.size()){					//se k for maior que final
				for(int i = a.size(); i <= k; i++){	//add 0 até chegar na posicao k
					if(i != k) a.push_back(0);
			   		else if (i == k) a.push_back(1);
				}
			}
			else if(a[k] == 0){ 
			   	a[k] = 1;
			}
		}
	}
	
	void retiraConjunto(){
		
	}
	
	int igualA(){
		
	}
		
	void imprimaConjunto(){						//imprime conjunto com espaço
		for(int i = 0; i < a.size(); i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
	
	
private:
	vector <int> a; 
	
};



int main(){
	
	int tam, tam2, i;
	vector <int> vet, vet2; 
	
	unsigned seed = time(0);					//gera valores aleatório
    srand(seed);
	tam = (rand() % 10) + 2;					//tamanho do vetor aleatório
	
	cout << "tamanho: " << tam << endl << "vetor: ";
	for(i=0; i<tam; i++){						//cria vetor com valores aleatórios
		vet.push_back(rand() % 10);
		cout << vet[i] << " ";
	}
	
	cout << endl;
	
	sort(vet.begin(), vet.end()); 				//ordena vetor crescente
	for(i=0; i<tam; i++){
		cout << vet[i];
	}
	cout << endl << "Maior numero do vetor: " << vet[tam-1] << endl ;
	
	
	
	
	
	// VET2
	tam2 = (rand() % 10) + 2;					//tamanho do vetor aleatório
	
	cout << "tamanho2: " << tam2 << endl << "vetor2: ";
	for(i=0; i<tam2; i++){						//cria vetor com valores aleatórios
		vet2.push_back(rand() % 10);
		cout << vet2[i] << " ";
	}
	
	cout << endl;
	
	sort(vet2.begin(), vet2.end()); 				//ordena vetor crescente
	for(i=0; i<tam2; i++){
		cout << vet2[i];
	}
	cout << endl << "Maior numero do vetor: " << vet2[tam2-1] << endl ;
	
	
	
	
	ConjuntoDeInteiros c1(vet[tam-1]);			//cria objeto
	
	cout << "Conjunto default: ";
	c1.imprimaConjunto();
	c1.criarConjunto(vet);
	cout << "Conjunto criado: ";
	c1.imprimaConjunto();
	
	ConjuntoDeInteiros c2(vet2[tam2-1]);
	
	cout << "Conjunto default 2: ";
	c2.imprimaConjunto();
	c2.criarConjunto(vet2);
	cout << "Conjunto criado 2: ";
	c2.imprimaConjunto();
	
	c2.insereConjunto(5);
	c2.imprimaConjunto();
	c2.insereConjunto(15);
	c2.imprimaConjunto();
	
	ConjuntoDeInteiros c3();
	c3.uniaoConjunto(c1,c2);
	
	return 0;
}