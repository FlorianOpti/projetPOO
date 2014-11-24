#ifndef PionV_
#define PionV_

#include "Pion.cpp"
#include "PionR.cpp"
#include "PionN.cpp"



class PionV : public Pion
{
public:
	PionV()
	{
	color = *(new Colore(false,false));
	}
	~PionV(){}
	Colore getColore()
	{
	return color;
	}
	void affichage()
	{
	color.affichage();
	}


};

int main()
{

	Pion* a = new PionR();
	a->affichage(); 
	a = new PionN();
	a->affichage();




}



#endif
