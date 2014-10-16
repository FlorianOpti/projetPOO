#ifndef Pion_
#define Pion_

#include "Color.cpp"






class Pion 
{
public :
	Pion();
	Pion(bool noir, bool rouge);
	~Pion();
protected:
	Colore color;
};


Pion::Pion()
{
}

Pion::Pion(bool noir, bool rouge)
{
	color(noir,rouge);
}

Pion::~Pion()
{

}








#endif
