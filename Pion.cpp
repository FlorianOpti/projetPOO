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
protected:
	Colore color;
};


Colore Pion::getColore()
{
	return color;
}

Pion::Pion()
{
	//
}

Pion::Pion(bool noir, bool rouge)
{
	//
}

Pion::~Pion()
{

}








#endif
