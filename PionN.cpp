#ifndef PionN_
#define PionN_

#include "Pion.cpp"


class PionN : public Pion
{
public:
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
};





#endif