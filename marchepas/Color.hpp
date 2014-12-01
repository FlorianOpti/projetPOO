
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
	bool isEquals(Colore c);






};
#endif
