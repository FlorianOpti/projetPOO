#ifndef PionR_
#define PionR_

#include "Pion.cpp"

class PionR : public Pion
{
public:
	PionR()
	{
	color = *(new Colore(false,true));
	}
	~PionR(){}
	Colore getColore()
	{
	return color;
	}
	void affichage()
	{
	color.affichage();
	}
	string toString(){
		return "R";
	}


};





#endif
