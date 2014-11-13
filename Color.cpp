
#ifndef _Color_
#define _Color_
#include <iostream>


class Colore
{
protected:
	bool estNoir;
	bool estRouge;
public:
	
	Colore();
	~Colore();
	Colore(bool noir, bool rouge);
	bool isBlack ();
	bool isRed ();
	bool isVide ();
	void affichage ();
	
	
	

	

};



Colore::~Colore()
{

}

Colore::Colore()
{
	estNoir = false;
	estRouge = false;

}

Colore::Colore(bool noir,bool rouge)
{
	estNoir = noir;
	estRouge = rouge;
}



bool Colore::isRed ()
{
	if (estRouge && !estNoir)
	{
		return true;
	}
	else { return false; }

}


bool Colore::isBlack ()
{
	if (!estRouge && estNoir)
	{
		return true;
	}
	else { return false; }
}


bool Colore::isVide ()
{
	if ((!estRouge && !estNoir)|| (estRouge && estNoir))
	{
		return true;
	}
	else { return false; }
}

void Colore::affichage ()
{
	if (isBlack())
	{
		std::cout<<"N";
	}
	else { 
		if (isRed())
		{
			std::cout<<"R";
		}
		else 
		{
			std::cout<<"0";
		}
	}
	
}


#endif       
