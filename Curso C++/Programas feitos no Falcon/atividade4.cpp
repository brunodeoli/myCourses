#include <iostream>
#include <string.h>

using namespace std;

class Ingresso
{
public:
	Ingresso(float val)
	{
		valor = val;
	}
	void getValor()
	{
		cout << "Valor do ingresso: R$ " << valor << endl;
	}
private:
	float valor;
};

class Vip: public Ingresso
{
public:
	Vip(float val_add, float valor): Ingresso(valor)
	{
		valorvip = valor + val_add;
	}
	void getValorVip()
	{
		cout << "Valor do ingresso VIP: R$ " << valorvip << endl;
	}
private:
	float valorvip;
};

class Normal
{
public:
	Normal(float valor): Ingresso(valor)
	{
		valornormal = valor;
	}
	void getValorNormal()
	{
		cout << "Valor do ingresso Normal: R$ " << valornormal << endl;
private:
	float valornormal;
};

class CamaroteInferior
{
public:
	CamaroteInferior(){
		lugar = 1;
		valorcmrt1 = 50;
	}
	void getCamaroteInferior(){
		cout << "Localização do camarote: " << lugar << endl;
		cout << "Valor do camarote: " << valorcmrt1 << endl;
	}
private:
	int lugar;
	float valorcmrt1;
};

class CamaroteSuperior
{
public:

protected:
	int luga2r2;
	float valorcmrt2;
};

int main()
{
	Ingresso i(5);
	i.getValor();
	Vip v(3, 8);
	v.getValorVip();
	return 0;
}

