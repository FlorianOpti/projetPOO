#include "PionV.hpp"
PionV::PionV()
	{
	color = *(new Colore(false,false));
	}
	PionV::~PionV(){}
	Colore PionV::getColore()
	{
	return color;
	}
	void PionV::affichage()
	{
	color.affichage();
	}
	std::string PionV::toString(){
		return "O";
	}
/*
int main()
{

	Pion* a = new PionR();
	a->affichage();
	a = new PionN();
	a->affichage();




}*/



