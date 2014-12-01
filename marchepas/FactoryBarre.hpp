
#ifndef _FacBA_
#define _FacBA_
#include<iostream>
#include "FactoryGraphique.hpp"
#include "BarreVertic.hpp"
#include "BarreHoriz.hpp"
#include "Espace.hpp"



class FactoryBarre : FactoryGraphique
{
public:

	ElemGraph* factoryMethod (std::string type);

	FactoryBarre();
	~FactoryBarre();
};
#endif
