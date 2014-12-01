#include "PionR.hpp"
PionR::PionR()
	{
	color = *(new Colore(false,true));
	}
	PionR::~PionR(){}
	Colore PionR::getColore()
	{
	return color;
	}
	void PionR::affichage()
	{
	color.affichage();
	}
	std::string PionR::toString(){
		return "R";
	}




