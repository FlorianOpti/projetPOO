#ifndef _FacP_
#define _FacP_
#include<string.h>
#include "FactoryGraphique.hpp"
#include "PionN.hpp"
#include "PionR.hpp"
#include "PionV.hpp"

class FactoryPion : FactoryGraphique
{
public:

	ElemGraph* factoryMethod (std::string type);

	FactoryPion();
	~FactoryPion();
};
#endif
