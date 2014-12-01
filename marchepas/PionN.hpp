#ifndef PionN_
#define PionN_

#include "Pion.hpp"


class PionN : Pion
{
public:
	PionN();
	~PionN();
	Colore getColore();
	void affichage();
	std::string toString() ;
};



#endif
