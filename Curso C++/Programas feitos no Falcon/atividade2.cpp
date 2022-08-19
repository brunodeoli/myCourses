#include <iostream>
#include <string.h>

using namespace std;

class Retangulo
{
public:
	Retangulo(){
		comp = 1;
		larg = 1;
	}
	
	void perimetro(){
		cout << "PERIMETRO: " << comp+larg << endl;
	}
	void area(){
		cout << "AREA: " << comp*larg << endl;
	}
	
	float getComp(){
		cout << "COMPRIMENTO: " << comp << endl;
		return comp;
	}
	float getLarg(){
		cout << "LARGURA: " << larg << endl;
		return larg;
	}
	
	void setComp(float ncomp){
		if(ncomp < 0 || ncomp > 20){
			cout << "***COMPRIMENTO FORA DO RANGE***" << endl;
		}
		else comp = ncomp;
	}
	void setLarg(float nlarg){
		if(nlarg < 0 || nlarg > 20){
			cout << "***LARGURA FORA DO RANGE***" << endl;
		}
		else larg = nlarg;
	}
	
private:
	float comp, larg;
};

int main(){
	Retangulo r1;
	
	r1.setComp(22.5);
	r1.setLarg(-7.5);
	
	r1.getComp();
	r1.getLarg();
	r1.perimetro();
	r1.area();
	
	return 0;
}