#ifndef _FacP_
#define _FacP_
#include<string.h>
class FactoryPion : FactoryGraphique 
{
public:
	ElemGraph* factoryMethod (string type);
	FactoryPion();
	~FactoryPion();
};

FactoryPion ::FactoryPion(){}
FactoryPion ::~FactoryPion(){};

ElemGraph* FactoryPion::factoryMethod (string type){
	if(type == "rouge"){
		return new PionR();
	}else if(type == "noir"){
		return new PionN();
	}else if(type == "vide"){
		return new PionV();
	}else{
		cout << "can t instanciate that Pion\n";
	}
}
#endif
