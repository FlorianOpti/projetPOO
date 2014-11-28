
#ifndef _FacBA_
#define _FacBA_
#include<iostream>
#include "FactoryGraphique.cpp"
#include "BarreVertic.cpp"
#include "BarreHoriz.cpp"
#include "Espace.cpp"



class FactoryBarre : FactoryGraphique
{
public:

	ElemGraph* factoryMethod (std::string type);

	FactoryBarre();
	~FactoryBarre();
};

FactoryBarre ::FactoryBarre(){}
FactoryBarre ::~FactoryBarre(){};


ElemGraph* FactoryBarre::factoryMethod (std::string type){

	if(type == "verticale"){
		return new BarreVertic();
	}else if(type == "horizontale"){
		return new BarreHoriz();
	}else if(type == "espace"){
		return new Espace();
	}else{
		std::cout << "can t instanciate that Intercase\n";
		
	}
	return null;
}
#endif
