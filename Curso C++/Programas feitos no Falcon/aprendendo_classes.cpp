#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
public:
	char nome[100];
	char cpf[20];
	int idade;
};

int getIdade(Pessoa pessoas[], const char* nome)
{
	int tam = sizeof(pessoas);

	for(int i = 0; i < tam; i++)
	{
		if(strcmp(nome, pessoas[i].nome) == 0)
			return pessoas[i].idade;
	}
	return -1;
}

int main()
{
	Pessoa p1;
	strcpy(p1.nome, "Bruno");
	strcpy(p1.cpf, "09802499960");
	p1.idade = 25;

	Pessoa p2 = {"Francine", "094839123192", 23};

	Pessoa pessoas[3] =
	{
		{"Anders", "11111111111", 19},
		{"Villain", "11111111111", 24},
		{"Renato", "11111111111", 25},
	};

	cout << "Nome: " << p1.nome << endl;
	cout << "Cpf: " << p1.cpf << endl;
	cout << "Idade: " << p1.idade << endl;

	cout << "Nome: " << p2.nome << endl;
	cout << "Cpf: " << p2.cpf << endl;
	cout << "Idade: " << p2.idade << endl;

	cout << "Nome: " << pessoas[0].nome << endl;
	cout << "Nome: " << pessoas[1].nome << endl;
	cout << "Nome: " << pessoas[2].nome << endl;

	int idade = getIdade(pessoas, "Villain");

	if(idade != -1)
		cout << "Idade do " << pessoas[1].nome << ": " << idade << endl;
	else
		cout << "Pessoa nao encontrada." << endl;

	return 0;
}
