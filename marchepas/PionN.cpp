#include "PionN.hpp"
  PionN()
	{
	color = *(new Colore(true,false));
	}
	~PionN(){}
	Colore getColore()
	{
	return color;
	}
	void affichage()
	{
	color.affichage();
	}
	std::string toString(){
		return "N";
	}

