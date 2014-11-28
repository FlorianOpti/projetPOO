#ifndef _FacP_
#define _FacP_
#include<string.h>
#include "PionN.cpp"
#include "PionR.cpp"
#include "PionV.cpp"

class FactoryPion : FactoryGraphique 
{
public:

	ElemGraph* factoryMethod (std::string type);

	FactoryPion();
	~FactoryPion();
};

FactoryPion ::FactoryPion(){}
FactoryPion ::~FactoryPion(){};


ElemGraph* FactoryPion::factoryMethod (std::string type){

	if(type == "rouge"){
		return new PionR();
	}else if(type == "noir"){
		return new PionN();
	}else if(type == "vide"){
		return new PionV();
	}else{
		std :: cout << "can t instanciate that Pion\n";
	}
	return null;
}
#endif