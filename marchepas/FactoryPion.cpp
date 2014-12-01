#include "FactoryPion.hpp"

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
