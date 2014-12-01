#include "FactoryBarre.hpp"
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
	return NULL;
}
