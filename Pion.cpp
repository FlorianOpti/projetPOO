#ifndef _Pion_
#define _Pion_

#include "Color.cpp"






class Pion 
{
public :
	Pion();
	Pion(bool noir, bool rouge);
	~Pion();
	Colore getColore();
	void affichage();
	
protected:
	Colore color;
};


void Pion::affichage()
{
	color.affichage();
}

Colore Pion::getColore()
{
	return color;
}

Pion::Pion()
{
	color = *(new Colore(false,false));
}

Pion::Pion(bool noir, bool rouge)
{
	color = *(new Colore(noir,rouge));
}

Pion::~Pion()
{

}


#endif   
