
#ifndef _Fgrap_
#define _Fgrap_
#include "ElemGraph.cpp"
class FactoryGraphique 
{
public:
	FactoryGraphique();
	~FactoryGraphique();
	virtual ElemGraph* factoryMethod (std::string type)=0;

};

#endif

