#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
public:
	
    Employee(string n, string sn, float s){
		setNome(n);
		setSobrenome(sn);
		setSalario(s);
	};							//default constructor	
	
	string getNome(){						//funcao get retorna nome
		cout << "NOME: " << nome << " ";
		return nome;
	}
	string getSobrenome(){				//funcao get retorna sobrenome
		cout << sobrenome << endl;
		return sobrenome;
	}
	float getSalario(){					//funcao get retorna salario
		cout << "SALARIO: " << salario << endl;
		return salario;
	}
	
	void setNome(string novo_nome){
		nome = novo_nome;
	}
	void setSobrenome(string novo_sn){
		sobrenome = novo_sn;
	}
	void setSalario(float novo_salario){
		if(novo_salario < 0) salario = 0;
		else salario = novo_salario;
	}

	void salarioAnual(){
		cout << "SALARIO ANUAL: " << 12*salario << endl << endl;
	}
	
	void aumento(float stonks){
		setSalario(salario*stonks);
	}
	
private:
	string nome, sobrenome;
	float salario;
};

int main(){
	
	Employee e1("Bruno", "Oliveira", 100);

	e1.getNome();
	e1.getSobrenome();
	e1.getSalario();
	e1.salarioAnual();
	
	Employee e2("Fran", "Voltolini", 50.2);
	
	e2.getNome();
	e2.getSobrenome();
	e2.getSalario();
	e2.salarioAnual();
	
	e1.aumento(1.2);
	e2.aumento(1.2);
	e1.getSalario();
	e2.getSalario();
	
	return 0;
}
