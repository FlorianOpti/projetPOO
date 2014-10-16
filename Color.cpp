
#ifndef Color
#define Color
#include <iostream>
using namespace std;

class Colore
{
protected:
	bool estNoir;
	bool estRouge;
public:
	
	Colore();
	~Colore();
	Colore(bool noir, bool rouge);
	
	void affichage ();
	bool IsBlack ();
	bool isRed ();
	
	

	

};


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



#endif       
